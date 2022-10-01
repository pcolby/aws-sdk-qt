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

#include "startproductsubscriptionrequest.h"
#include "startproductsubscriptionrequest_p.h"
#include "startproductsubscriptionresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StartProductSubscriptionRequest
 * \brief The StartProductSubscriptionRequest class provides an interface for LicenseManagerUserSubscriptions StartProductSubscription requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::startProductSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
StartProductSubscriptionRequest::StartProductSubscriptionRequest(const StartProductSubscriptionRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new StartProductSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartProductSubscriptionRequest object.
 */
StartProductSubscriptionRequest::StartProductSubscriptionRequest()
    : LicenseManagerUserSubscriptionsRequest(new StartProductSubscriptionRequestPrivate(LicenseManagerUserSubscriptionsRequest::StartProductSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartProductSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartProductSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartProductSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new StartProductSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::StartProductSubscriptionRequestPrivate
 * \brief The StartProductSubscriptionRequestPrivate class provides private implementation for StartProductSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a StartProductSubscriptionRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
StartProductSubscriptionRequestPrivate::StartProductSubscriptionRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, StartProductSubscriptionRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartProductSubscriptionRequest
 * class' copy constructor.
 */
StartProductSubscriptionRequestPrivate::StartProductSubscriptionRequestPrivate(
    const StartProductSubscriptionRequestPrivate &other, StartProductSubscriptionRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
