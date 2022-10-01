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
