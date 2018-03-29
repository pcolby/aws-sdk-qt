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

#include "describenotificationsforbudgetrequest.h"
#include "describenotificationsforbudgetrequest_p.h"
#include "describenotificationsforbudgetresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/**
 * @class  DescribeNotificationsForBudgetRequest
 *
 * @brief  Implements Budgets DescribeNotificationsForBudget requests.
 *
 * @see    BudgetsClient::describeNotificationsForBudget
 */

/**
 * @brief  Constructs a new DescribeNotificationsForBudgetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNotificationsForBudgetRequest::DescribeNotificationsForBudgetRequest(const DescribeNotificationsForBudgetRequest &other)
    : BudgetsRequest(new DescribeNotificationsForBudgetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNotificationsForBudgetRequest object.
 */
DescribeNotificationsForBudgetRequest::DescribeNotificationsForBudgetRequest()
    : BudgetsRequest(new DescribeNotificationsForBudgetRequestPrivate(BudgetsRequest::DescribeNotificationsForBudgetAction, this))
{

}

bool DescribeNotificationsForBudgetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNotificationsForBudgetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNotificationsForBudgetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotificationsForBudgetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationsForBudgetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNotificationsForBudgetRequestPrivate
 *
 * @brief  Private implementation for DescribeNotificationsForBudgetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationsForBudgetRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DescribeNotificationsForBudgetRequest instance.
 */
DescribeNotificationsForBudgetRequestPrivate::DescribeNotificationsForBudgetRequestPrivate(
    const BudgetsRequest::Action action, DescribeNotificationsForBudgetRequest * const q)
    : DescribeNotificationsForBudgetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationsForBudgetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationsForBudgetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNotificationsForBudgetRequest instance.
 */
DescribeNotificationsForBudgetRequestPrivate::DescribeNotificationsForBudgetRequestPrivate(
    const DescribeNotificationsForBudgetRequestPrivate &other, DescribeNotificationsForBudgetRequest * const q)
    : DescribeNotificationsForBudgetPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
