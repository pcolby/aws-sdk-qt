/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
