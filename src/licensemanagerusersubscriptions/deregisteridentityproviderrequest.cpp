// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisteridentityproviderrequest.h"
#include "deregisteridentityproviderrequest_p.h"
#include "deregisteridentityproviderresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DeregisterIdentityProviderRequest
 * \brief The DeregisterIdentityProviderRequest class provides an interface for LicenseManagerUserSubscriptions DeregisterIdentityProvider requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::deregisterIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterIdentityProviderRequest::DeregisterIdentityProviderRequest(const DeregisterIdentityProviderRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new DeregisterIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterIdentityProviderRequest object.
 */
DeregisterIdentityProviderRequest::DeregisterIdentityProviderRequest()
    : LicenseManagerUserSubscriptionsRequest(new DeregisterIdentityProviderRequestPrivate(LicenseManagerUserSubscriptionsRequest::DeregisterIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DeregisterIdentityProviderRequestPrivate
 * \brief The DeregisterIdentityProviderRequestPrivate class provides private implementation for DeregisterIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a DeregisterIdentityProviderRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
DeregisterIdentityProviderRequestPrivate::DeregisterIdentityProviderRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, DeregisterIdentityProviderRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterIdentityProviderRequest
 * class' copy constructor.
 */
DeregisterIdentityProviderRequestPrivate::DeregisterIdentityProviderRequestPrivate(
    const DeregisterIdentityProviderRequestPrivate &other, DeregisterIdentityProviderRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
