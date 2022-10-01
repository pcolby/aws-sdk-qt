// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registeridentityproviderrequest.h"
#include "registeridentityproviderrequest_p.h"
#include "registeridentityproviderresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::RegisterIdentityProviderRequest
 * \brief The RegisterIdentityProviderRequest class provides an interface for LicenseManagerUserSubscriptions RegisterIdentityProvider requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::registerIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterIdentityProviderRequest::RegisterIdentityProviderRequest(const RegisterIdentityProviderRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new RegisterIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterIdentityProviderRequest object.
 */
RegisterIdentityProviderRequest::RegisterIdentityProviderRequest()
    : LicenseManagerUserSubscriptionsRequest(new RegisterIdentityProviderRequestPrivate(LicenseManagerUserSubscriptionsRequest::RegisterIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new RegisterIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::RegisterIdentityProviderRequestPrivate
 * \brief The RegisterIdentityProviderRequestPrivate class provides private implementation for RegisterIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a RegisterIdentityProviderRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
RegisterIdentityProviderRequestPrivate::RegisterIdentityProviderRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, RegisterIdentityProviderRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterIdentityProviderRequest
 * class' copy constructor.
 */
RegisterIdentityProviderRequestPrivate::RegisterIdentityProviderRequestPrivate(
    const RegisterIdentityProviderRequestPrivate &other, RegisterIdentityProviderRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
