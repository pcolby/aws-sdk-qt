// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDeliverabilityDashboardOptionRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutDeliverabilityDashboardOptionRequest : public PinpointEmailRequest {

public:
    PutDeliverabilityDashboardOptionRequest(const PutDeliverabilityDashboardOptionRequest &other);
    PutDeliverabilityDashboardOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDeliverabilityDashboardOptionRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
