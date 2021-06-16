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

#include "describesavingsplanratesrequest.h"
#include "describesavingsplanratesrequest_p.h"
#include "describesavingsplanratesresponse.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlanRatesRequest
 * \brief The DescribeSavingsPlanRatesRequest class provides an interface for SavingsPlans DescribeSavingsPlanRates requests.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::describeSavingsPlanRates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSavingsPlanRatesRequest::DescribeSavingsPlanRatesRequest(const DescribeSavingsPlanRatesRequest &other)
    : SavingsPlansRequest(new DescribeSavingsPlanRatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSavingsPlanRatesRequest object.
 */
DescribeSavingsPlanRatesRequest::DescribeSavingsPlanRatesRequest()
    : SavingsPlansRequest(new DescribeSavingsPlanRatesRequestPrivate(SavingsPlansRequest::DescribeSavingsPlanRatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSavingsPlanRatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSavingsPlanRatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSavingsPlanRatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSavingsPlanRatesResponse(*this, reply);
}

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlanRatesRequestPrivate
 * \brief The DescribeSavingsPlanRatesRequestPrivate class provides private implementation for DescribeSavingsPlanRatesRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlanRatesRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
DescribeSavingsPlanRatesRequestPrivate::DescribeSavingsPlanRatesRequestPrivate(
    const SavingsPlansRequest::Action action, DescribeSavingsPlanRatesRequest * const q)
    : SavingsPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSavingsPlanRatesRequest
 * class' copy constructor.
 */
DescribeSavingsPlanRatesRequestPrivate::DescribeSavingsPlanRatesRequestPrivate(
    const DescribeSavingsPlanRatesRequestPrivate &other, DescribeSavingsPlanRatesRequest * const q)
    : SavingsPlansRequestPrivate(other, q)
{

}

} // namespace SavingsPlans
} // namespace QtAws
