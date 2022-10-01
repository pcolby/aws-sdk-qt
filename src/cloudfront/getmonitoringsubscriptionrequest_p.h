// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMONITORINGSUBSCRIPTIONREQUEST_P_H
#define QTAWS_GETMONITORINGSUBSCRIPTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getmonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetMonitoringSubscriptionRequest;

class GetMonitoringSubscriptionRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetMonitoringSubscriptionRequestPrivate(const CloudFrontRequest::Action action,
                                   GetMonitoringSubscriptionRequest * const q);
    GetMonitoringSubscriptionRequestPrivate(const GetMonitoringSubscriptionRequestPrivate &other,
                                   GetMonitoringSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
