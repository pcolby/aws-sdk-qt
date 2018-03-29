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

#include "createbudgetrequest.h"
#include "createbudgetrequest_p.h"
#include "createbudgetresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/**
 * @class  CreateBudgetRequest
 *
 * @brief  Implements Budgets CreateBudget requests.
 *
 * @see    BudgetsClient::createBudget
 */

/**
 * @brief  Constructs a new CreateBudgetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBudgetRequest::CreateBudgetRequest(const CreateBudgetRequest &other)
    : BudgetsRequest(new CreateBudgetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBudgetRequest object.
 */
CreateBudgetRequest::CreateBudgetRequest()
    : BudgetsRequest(new CreateBudgetRequestPrivate(BudgetsRequest::CreateBudgetAction, this))
{

}

bool CreateBudgetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBudgetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBudgetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBudgetRequest::response(QNetworkReply * const reply) const
{
    return new CreateBudgetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBudgetRequestPrivate
 *
 * @brief  Private implementation for CreateBudgetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBudgetRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public CreateBudgetRequest instance.
 */
CreateBudgetRequestPrivate::CreateBudgetRequestPrivate(
    const BudgetsRequest::Action action, CreateBudgetRequest * const q)
    : BudgetsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBudgetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBudgetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBudgetRequest instance.
 */
CreateBudgetRequestPrivate::CreateBudgetRequestPrivate(
    const CreateBudgetRequestPrivate &other, CreateBudgetRequest * const q)
    : BudgetsRequestPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
