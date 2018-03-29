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

/**
 * @class  DescribeBudgetsRequest
 *
 * @brief  Implements Budgets DescribeBudgets requests.
 *
 * @see    BudgetsClient::describeBudgets
 */

/**
 * @brief  Constructs a new DescribeBudgetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBudgetsRequest::DescribeBudgetsRequest(const DescribeBudgetsRequest &other)
    : BudgetsRequest(new DescribeBudgetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBudgetsRequest object.
 */
DescribeBudgetsRequest::DescribeBudgetsRequest()
    : BudgetsRequest(new DescribeBudgetsRequestPrivate(BudgetsRequest::DescribeBudgetsAction, this))
{

}

bool DescribeBudgetsRequest::isValid() const
{
    return false;
}


/**
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

/**
 * @internal
 *
 * @class  DescribeBudgetsRequestPrivate
 *
 * @brief  Private implementation for DescribeBudgetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetsRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DescribeBudgetsRequest instance.
 */
DescribeBudgetsRequestPrivate::DescribeBudgetsRequestPrivate(
    const BudgetsRequest::Action action, DescribeBudgetsRequest * const q)
    : DescribeBudgetsPrivate(action, q)
{

}

/**
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
    : DescribeBudgetsPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
