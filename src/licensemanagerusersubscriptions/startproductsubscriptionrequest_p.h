// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPRODUCTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_STARTPRODUCTSUBSCRIPTIONREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "startproductsubscriptionrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StartProductSubscriptionRequest;

class StartProductSubscriptionRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    StartProductSubscriptionRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   StartProductSubscriptionRequest * const q);
    StartProductSubscriptionRequestPrivate(const StartProductSubscriptionRequestPrivate &other,
                                   StartProductSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartProductSubscriptionRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
