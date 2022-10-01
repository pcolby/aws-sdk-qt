// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateuserrequest.h"
#include "disassociateuserrequest_p.h"
#include "disassociateuserresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserRequest
 * \brief The DisassociateUserRequest class provides an interface for LicenseManagerUserSubscriptions DisassociateUser requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::disassociateUser
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateUserRequest::DisassociateUserRequest(const DisassociateUserRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new DisassociateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateUserRequest object.
 */
DisassociateUserRequest::DisassociateUserRequest()
    : LicenseManagerUserSubscriptionsRequest(new DisassociateUserRequestPrivate(LicenseManagerUserSubscriptionsRequest::DisassociateUserAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateUserRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateUserResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserRequestPrivate
 * \brief The DisassociateUserRequestPrivate class provides private implementation for DisassociateUserRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a DisassociateUserRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
DisassociateUserRequestPrivate::DisassociateUserRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, DisassociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateUserRequest
 * class' copy constructor.
 */
DisassociateUserRequestPrivate::DisassociateUserRequestPrivate(
    const DisassociateUserRequestPrivate &other, DisassociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
