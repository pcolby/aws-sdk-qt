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

#include "associateuserrequest.h"
#include "associateuserrequest_p.h"
#include "associateuserresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::AssociateUserRequest
 * \brief The AssociateUserRequest class provides an interface for LicenseManagerUserSubscriptions AssociateUser requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::associateUser
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateUserRequest::AssociateUserRequest(const AssociateUserRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new AssociateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateUserRequest object.
 */
AssociateUserRequest::AssociateUserRequest()
    : LicenseManagerUserSubscriptionsRequest(new AssociateUserRequestPrivate(LicenseManagerUserSubscriptionsRequest::AssociateUserAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateUserRequest::response(QNetworkReply * const reply) const
{
    return new AssociateUserResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::AssociateUserRequestPrivate
 * \brief The AssociateUserRequestPrivate class provides private implementation for AssociateUserRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a AssociateUserRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
AssociateUserRequestPrivate::AssociateUserRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, AssociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateUserRequest
 * class' copy constructor.
 */
AssociateUserRequestPrivate::AssociateUserRequestPrivate(
    const AssociateUserRequestPrivate &other, AssociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
