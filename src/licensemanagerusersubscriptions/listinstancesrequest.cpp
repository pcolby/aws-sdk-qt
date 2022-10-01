// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListInstancesRequest
 * \brief The ListInstancesRequest class provides an interface for LicenseManagerUserSubscriptions ListInstances requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::listInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : LicenseManagerUserSubscriptionsRequest(new ListInstancesRequestPrivate(LicenseManagerUserSubscriptionsRequest::ListInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::ListInstancesRequestPrivate
 * \brief The ListInstancesRequestPrivate class provides private implementation for ListInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a ListInstancesRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, ListInstancesRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
