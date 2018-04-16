/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describebudgetsrequest.h"
#include "describebudgetsrequest_p.h"
#include "describebudgetsresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::DescribeBudgetsRequest
 *
 * \brief The DescribeBudgetsRequest class encapsulates Budgets DescribeBudgets requests.
 *
 * \ingroup Budgets
 *
 *  Budgets enable you to plan your service usage, service costs, and your RI utilization. You can also track how close your
 *  plan is to your budgeted amount or to the free tier limits. Budgets provide you with a quick way to see your
 *  usage-to-date and current estimated charges from AWS and to see how much your predicted usage accrues in charges by the
 *  end of the month. Budgets also compare current estimates and charges to the amount that you indicated you want to use or
 *  spend and lets you see how much of your budget has been used. AWS updates your budget status several times a day.
 *  Budgets track your unblended costs, subscriptions, and refunds. You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  Cost budgets allow you to say how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  Usage budgets allow you to say how many hours you want to use for one or more
 * 
 *  services> </li> <li>
 * 
 *  RI utilization budgets allow you to define a utilization threshold and receive alerts when RIs are tracking below that
 * 
 *  threshold> </li> </ul>
 * 
 *  You can create up to 20,000 budgets per AWS master account. Your first two budgets are free of charge. Each additional
 *  budget costs $0.02 per day. You can set up optional notifications that warn you if you exceed, or are forecasted to
 *  exceed, your budgeted amount. You can have notifications sent to an Amazon SNS topic, to an email address, or to both.
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-sns-policy.html">Creating an Amazon SNS Topic
 *  for Budget Notifications</a>. AWS Free Tier usage alerts via AWS Budgets are provided for you, and do not count toward
 *  your budget
 * 
 *  limits>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa BudgetsClient::describeBudgets
 */

/*!
 * @brief  Constructs a new DescribeBudgetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBudgetsRequest::DescribeBudgetsRequest(const DescribeBudgetsRequest &other)
    : BudgetsRequest(new DescribeBudgetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeBudgetsRequest object.
 */
DescribeBudgetsRequest::DescribeBudgetsRequest()
    : BudgetsRequest(new DescribeBudgetsRequestPrivate(BudgetsRequest::DescribeBudgetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBudgetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeBudgetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBudgetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBudgetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBudgetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeBudgetsRequestPrivate
 *
 * @brief  Private implementation for DescribeBudgetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetsRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DescribeBudgetsRequest instance.
 */
DescribeBudgetsRequestPrivate::DescribeBudgetsRequestPrivate(
    const BudgetsRequest::Action action, DescribeBudgetsRequest * const q)
    : BudgetsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBudgetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBudgetsRequest instance.
 */
DescribeBudgetsRequestPrivate::DescribeBudgetsRequestPrivate(
    const DescribeBudgetsRequestPrivate &other, DescribeBudgetsRequest * const q)
    : BudgetsRequestPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
