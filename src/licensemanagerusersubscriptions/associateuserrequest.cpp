// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
