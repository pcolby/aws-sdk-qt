// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETEMONITORINGSUBSCRIPTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletemonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteMonitoringSubscriptionRequest;

class DeleteMonitoringSubscriptionRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteMonitoringSubscriptionRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteMonitoringSubscriptionRequest * const q);
    DeleteMonitoringSubscriptionRequestPrivate(const DeleteMonitoringSubscriptionRequestPrivate &other,
                                   DeleteMonitoringSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
