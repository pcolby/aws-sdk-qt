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

#include "listproductsubscriptionsrequest.h"
#include "listproductsubscriptionsrequest_p.h"
#include "listproductsubscriptionsresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListProductSubscriptionsRequest
 * \brief The ListProductSubscriptionsRequest class provides an interface for LicenseManagerUserSubscriptions ListProductSubscriptions requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listProductSubscriptions
 */

/*!
 * Constructs a copy of \a other.
 */
ListProductSubscriptionsRequest::ListProductSubscriptionsRequest(const ListProductSubscriptionsRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new ListProductSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProductSubscriptionsRequest object.
 */
ListProductSubscriptionsRequest::ListProductSubscriptionsRequest()
    : LicenseManagerUserSubscriptionsRequest(new ListProductSubscriptionsRequestPrivate(LicenseManagerUserSubscriptionsRequest::ListProductSubscriptionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProductSubscriptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProductSubscriptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProductSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new ListProductSubscriptionsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListProductSubscriptionsRequestPrivate
 * \brief The ListProductSubscriptionsRequestPrivate class provides private implementation for ListProductSubscriptionsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListProductSubscriptionsRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
ListProductSubscriptionsRequestPrivate::ListProductSubscriptionsRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, ListProductSubscriptionsRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProductSubscriptionsRequest
 * class' copy constructor.
 */
ListProductSubscriptionsRequestPrivate::ListProductSubscriptionsRequestPrivate(
    const ListProductSubscriptionsRequestPrivate &other, ListProductSubscriptionsRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
