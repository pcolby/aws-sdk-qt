// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPRODUCTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_STOPPRODUCTSUBSCRIPTIONREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "stopproductsubscriptionrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StopProductSubscriptionRequest;

class StopProductSubscriptionRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    StopProductSubscriptionRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   StopProductSubscriptionRequest * const q);
    StopProductSubscriptionRequestPrivate(const StopProductSubscriptionRequestPrivate &other,
                                   StopProductSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopProductSubscriptionRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
