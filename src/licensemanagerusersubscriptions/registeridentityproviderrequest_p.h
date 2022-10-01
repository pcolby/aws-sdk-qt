// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_REGISTERIDENTITYPROVIDERREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "registeridentityproviderrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class RegisterIdentityProviderRequest;

class RegisterIdentityProviderRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    RegisterIdentityProviderRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   RegisterIdentityProviderRequest * const q);
    RegisterIdentityProviderRequestPrivate(const RegisterIdentityProviderRequestPrivate &other,
                                   RegisterIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterIdentityProviderRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
