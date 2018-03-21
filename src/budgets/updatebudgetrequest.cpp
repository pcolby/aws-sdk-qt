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

#include "updatebudgetrequest.h"
#include "updatebudgetrequest_p.h"
#include "updatebudgetresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  UpdateBudgetRequest
 *
 * @brief  Implements Budgets UpdateBudget requests.
 *
 * @see    BudgetsClient::updateBudget
 */

/**
 * @brief  Constructs a new UpdateBudgetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBudgetResponse::UpdateBudgetResponse(

/**
 * @brief  Constructs a new UpdateBudgetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBudgetRequest::UpdateBudgetRequest(const UpdateBudgetRequest &other)
    : BudgetsRequest(new UpdateBudgetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateBudgetRequest object.
 */
UpdateBudgetRequest::UpdateBudgetRequest()
    : BudgetsRequest(new UpdateBudgetRequestPrivate(BudgetsRequest::UpdateBudgetAction, this))
{

}

bool UpdateBudgetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateBudgetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBudgetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * UpdateBudgetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBudgetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateBudgetRequestPrivate
 *
 * @brief  Private implementation for UpdateBudgetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBudgetRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public UpdateBudgetRequest instance.
 */
UpdateBudgetRequestPrivate::UpdateBudgetRequestPrivate(
    const BudgetsRequest::Action action, UpdateBudgetRequest * const q)
    : UpdateBudgetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBudgetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBudgetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBudgetRequest instance.
 */
UpdateBudgetRequestPrivate::UpdateBudgetRequestPrivate(
    const UpdateBudgetRequestPrivate &other, UpdateBudgetRequest * const q)
    : UpdateBudgetPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
