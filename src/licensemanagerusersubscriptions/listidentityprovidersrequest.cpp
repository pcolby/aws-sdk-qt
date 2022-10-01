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

#include "listidentityprovidersrequest.h"
#include "listidentityprovidersrequest_p.h"
#include "listidentityprovidersresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListIdentityProvidersRequest
 * \brief The ListIdentityProvidersRequest class provides an interface for LicenseManagerUserSubscriptions ListIdentityProviders requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listIdentityProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListIdentityProvidersRequest::ListIdentityProvidersRequest(const ListIdentityProvidersRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new ListIdentityProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIdentityProvidersRequest object.
 */
ListIdentityProvidersRequest::ListIdentityProvidersRequest()
    : LicenseManagerUserSubscriptionsRequest(new ListIdentityProvidersRequestPrivate(LicenseManagerUserSubscriptionsRequest::ListIdentityProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentityProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIdentityProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentityProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListIdentityProvidersRequestPrivate
 * \brief The ListIdentityProvidersRequestPrivate class provides private implementation for ListIdentityProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListIdentityProvidersRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
ListIdentityProvidersRequestPrivate::ListIdentityProvidersRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, ListIdentityProvidersRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityProvidersRequest
 * class' copy constructor.
 */
ListIdentityProvidersRequestPrivate::ListIdentityProvidersRequestPrivate(
    const ListIdentityProvidersRequestPrivate &other, ListIdentityProvidersRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
