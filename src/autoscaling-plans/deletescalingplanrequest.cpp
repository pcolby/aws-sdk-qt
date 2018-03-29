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

#include "deletescalingplanrequest.h"
#include "deletescalingplanrequest_p.h"
#include "deletescalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/**
 * @class  DeleteScalingPlanRequest
 *
 * @brief  Implements AutoScalingPlans DeleteScalingPlan requests.
 *
 * @see    AutoScalingPlansClient::deleteScalingPlan
 */

/**
 * @brief  Constructs a new DeleteScalingPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteScalingPlanRequest::DeleteScalingPlanRequest(const DeleteScalingPlanRequest &other)
    : AutoScalingPlansRequest(new DeleteScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteScalingPlanRequest object.
 */
DeleteScalingPlanRequest::DeleteScalingPlanRequest()
    : AutoScalingPlansRequest(new DeleteScalingPlanRequestPrivate(AutoScalingPlansRequest::DeleteScalingPlanAction, this))
{

}

bool DeleteScalingPlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteScalingPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteScalingPlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingPlansClient::send
 */
AwsAbstractResponse * DeleteScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScalingPlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteScalingPlanRequestPrivate
 *
 * @brief  Private implementation for DeleteScalingPlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPlanRequestPrivate object.
 *
 * @param  action  AutoScalingPlans action being performed.
 * @param  q       Pointer to this object's public DeleteScalingPlanRequest instance.
 */
DeleteScalingPlanRequestPrivate::DeleteScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, DeleteScalingPlanRequest * const q)
    : DeleteScalingPlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteScalingPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteScalingPlanRequest instance.
 */
DeleteScalingPlanRequestPrivate::DeleteScalingPlanRequestPrivate(
    const DeleteScalingPlanRequestPrivate &other, DeleteScalingPlanRequest * const q)
    : DeleteScalingPlanPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
