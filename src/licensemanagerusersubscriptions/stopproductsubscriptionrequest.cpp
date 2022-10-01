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

#include "stopproductsubscriptionrequest.h"
#include "stopproductsubscriptionrequest_p.h"
#include "stopproductsubscriptionresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StopProductSubscriptionRequest
 * \brief The StopProductSubscriptionRequest class provides an interface for LicenseManagerUserSubscriptions StopProductSubscription requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::stopProductSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
StopProductSubscriptionRequest::StopProductSubscriptionRequest(const StopProductSubscriptionRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new StopProductSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopProductSubscriptionRequest object.
 */
StopProductSubscriptionRequest::StopProductSubscriptionRequest()
    : LicenseManagerUserSubscriptionsRequest(new StopProductSubscriptionRequestPrivate(LicenseManagerUserSubscriptionsRequest::StopProductSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool StopProductSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopProductSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopProductSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new StopProductSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StopProductSubscriptionRequestPrivate
 * \brief The StopProductSubscriptionRequestPrivate class provides private implementation for StopProductSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a StopProductSubscriptionRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
StopProductSubscriptionRequestPrivate::StopProductSubscriptionRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, StopProductSubscriptionRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopProductSubscriptionRequest
 * class' copy constructor.
 */
StopProductSubscriptionRequestPrivate::StopProductSubscriptionRequestPrivate(
    const StopProductSubscriptionRequestPrivate &other, StopProductSubscriptionRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
