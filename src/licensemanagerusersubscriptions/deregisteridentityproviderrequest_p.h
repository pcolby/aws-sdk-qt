// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_DEREGISTERIDENTITYPROVIDERREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "deregisteridentityproviderrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DeregisterIdentityProviderRequest;

class DeregisterIdentityProviderRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    DeregisterIdentityProviderRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   DeregisterIdentityProviderRequest * const q);
    DeregisterIdentityProviderRequestPrivate(const DeregisterIdentityProviderRequestPrivate &other,
                                   DeregisterIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterIdentityProviderRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
