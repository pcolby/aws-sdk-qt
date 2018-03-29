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

#include "describebudgetrequest.h"
#include "describebudgetrequest_p.h"
#include "describebudgetresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  DescribeBudgetRequest
 *
 * @brief  Implements Budgets DescribeBudget requests.
 *
 * @see    BudgetsClient::describeBudget
 */

/**
 * @brief  Constructs a new DescribeBudgetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBudgetRequest::DescribeBudgetRequest(const DescribeBudgetRequest &other)
    : BudgetsRequest(new DescribeBudgetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBudgetRequest object.
 */
DescribeBudgetRequest::DescribeBudgetRequest()
    : BudgetsRequest(new DescribeBudgetRequestPrivate(BudgetsRequest::DescribeBudgetAction, this))
{

}

bool DescribeBudgetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBudgetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBudgetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * DescribeBudgetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBudgetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBudgetRequestPrivate
 *
 * @brief  Private implementation for DescribeBudgetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DescribeBudgetRequest instance.
 */
DescribeBudgetRequestPrivate::DescribeBudgetRequestPrivate(
    const BudgetsRequest::Action action, DescribeBudgetRequest * const q)
    : DescribeBudgetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBudgetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBudgetRequest instance.
 */
DescribeBudgetRequestPrivate::DescribeBudgetRequestPrivate(
    const DescribeBudgetRequestPrivate &other, DescribeBudgetRequest * const q)
    : DescribeBudgetPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
