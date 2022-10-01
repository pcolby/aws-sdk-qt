// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesavingsplansofferingsrequest.h"
#include "describesavingsplansofferingsrequest_p.h"
#include "describesavingsplansofferingsresponse.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansOfferingsRequest
 * \brief The DescribeSavingsPlansOfferingsRequest class provides an interface for SavingsPlans DescribeSavingsPlansOfferings requests.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::describeSavingsPlansOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSavingsPlansOfferingsRequest::DescribeSavingsPlansOfferingsRequest(const DescribeSavingsPlansOfferingsRequest &other)
    : SavingsPlansRequest(new DescribeSavingsPlansOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSavingsPlansOfferingsRequest object.
 */
DescribeSavingsPlansOfferingsRequest::DescribeSavingsPlansOfferingsRequest()
    : SavingsPlansRequest(new DescribeSavingsPlansOfferingsRequestPrivate(SavingsPlansRequest::DescribeSavingsPlansOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSavingsPlansOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSavingsPlansOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSavingsPlansOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSavingsPlansOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansOfferingsRequestPrivate
 * \brief The DescribeSavingsPlansOfferingsRequestPrivate class provides private implementation for DescribeSavingsPlansOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlansOfferingsRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
DescribeSavingsPlansOfferingsRequestPrivate::DescribeSavingsPlansOfferingsRequestPrivate(
    const SavingsPlansRequest::Action action, DescribeSavingsPlansOfferingsRequest * const q)
    : SavingsPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSavingsPlansOfferingsRequest
 * class' copy constructor.
 */
DescribeSavingsPlansOfferingsRequestPrivate::DescribeSavingsPlansOfferingsRequestPrivate(
    const DescribeSavingsPlansOfferingsRequestPrivate &other, DescribeSavingsPlansOfferingsRequest * const q)
    : SavingsPlansRequestPrivate(other, q)
{

}

} // namespace SavingsPlans
} // namespace QtAws
