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

#include "listuserassociationsrequest.h"
#include "listuserassociationsrequest_p.h"
#include "listuserassociationsresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsRequest
 * \brief The ListUserAssociationsRequest class provides an interface for LicenseManagerUserSubscriptions ListUserAssociations requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listUserAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserAssociationsRequest::ListUserAssociationsRequest(const ListUserAssociationsRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new ListUserAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserAssociationsRequest object.
 */
ListUserAssociationsRequest::ListUserAssociationsRequest()
    : LicenseManagerUserSubscriptionsRequest(new ListUserAssociationsRequestPrivate(LicenseManagerUserSubscriptionsRequest::ListUserAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListUserAssociationsRequestPrivate
 * \brief The ListUserAssociationsRequestPrivate class provides private implementation for ListUserAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListUserAssociationsRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
ListUserAssociationsRequestPrivate::ListUserAssociationsRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, ListUserAssociationsRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserAssociationsRequest
 * class' copy constructor.
 */
ListUserAssociationsRequestPrivate::ListUserAssociationsRequestPrivate(
    const ListUserAssociationsRequestPrivate &other, ListUserAssociationsRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
