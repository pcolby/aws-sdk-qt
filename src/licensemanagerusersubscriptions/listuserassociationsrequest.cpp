// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
