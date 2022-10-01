// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityDashboardOptionsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDeliverabilityDashboardOptionsRequest : public PinpointEmailRequest {

public:
    GetDeliverabilityDashboardOptionsRequest(const GetDeliverabilityDashboardOptionsRequest &other);
    GetDeliverabilityDashboardOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeliverabilityDashboardOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
