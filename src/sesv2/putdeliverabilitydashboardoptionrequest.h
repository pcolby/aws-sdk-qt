// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutDeliverabilityDashboardOptionRequestPrivate;

class QTAWSSESV2_EXPORT PutDeliverabilityDashboardOptionRequest : public SESv2Request {

public:
    PutDeliverabilityDashboardOptionRequest(const PutDeliverabilityDashboardOptionRequest &other);
    PutDeliverabilityDashboardOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDeliverabilityDashboardOptionRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
