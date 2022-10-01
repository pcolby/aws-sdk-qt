// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATEMONITORINGSUBSCRIPTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createmonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateMonitoringSubscriptionRequest;

class CreateMonitoringSubscriptionRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateMonitoringSubscriptionRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateMonitoringSubscriptionRequest * const q);
    CreateMonitoringSubscriptionRequestPrivate(const CreateMonitoringSubscriptionRequestPrivate &other,
                                   CreateMonitoringSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
