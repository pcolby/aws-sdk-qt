/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebudgetrequest.h"
#include "deletebudgetrequest_p.h"
#include "deletebudgetresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  DeleteBudgetRequest
 *
 * @brief  Implements Budgets DeleteBudget requests.
 *
 * @see    BudgetsClient::deleteBudget
 */

/**
 * @brief  Constructs a new DeleteBudgetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBudgetResponse::DeleteBudgetResponse(

/**
 * @brief  Constructs a new DeleteBudgetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBudgetRequest::DeleteBudgetRequest(const DeleteBudgetRequest &other)
    : BudgetsRequest(new DeleteBudgetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBudgetRequest object.
 */
DeleteBudgetRequest::DeleteBudgetRequest()
    : BudgetsRequest(new DeleteBudgetRequestPrivate(BudgetsRequest::DeleteBudgetAction, this))
{

}

bool DeleteBudgetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBudgetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBudgetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * DeleteBudgetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBudgetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBudgetRequestPrivate
 *
 * @brief  Private implementation for DeleteBudgetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBudgetRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public DeleteBudgetRequest instance.
 */
DeleteBudgetRequestPrivate::DeleteBudgetRequestPrivate(
    const BudgetsRequest::Action action, DeleteBudgetRequest * const q)
    : DeleteBudgetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBudgetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBudgetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBudgetRequest instance.
 */
DeleteBudgetRequestPrivate::DeleteBudgetRequestPrivate(
    const DeleteBudgetRequestPrivate &other, DeleteBudgetRequest * const q)
    : DeleteBudgetPrivate(other, q)
{

}
