// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
