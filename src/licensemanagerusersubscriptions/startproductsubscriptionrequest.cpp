// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
