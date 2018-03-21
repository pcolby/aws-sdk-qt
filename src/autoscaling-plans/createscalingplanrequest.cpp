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

#include "createscalingplanrequest.h"
#include "createscalingplanrequest_p.h"
#include "createscalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace AWS {
namespace AutoScalingPlans {

/**
 * @class  CreateScalingPlanRequest
 *
 * @brief  Implements AutoScalingPlans CreateScalingPlan requests.
 *
 * @see    AutoScalingPlansClient::createScalingPlan
 */

/**
 * @brief  Constructs a new CreateScalingPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateScalingPlanResponse::CreateScalingPlanResponse(

/**
 * @brief  Constructs a new CreateScalingPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateScalingPlanRequest::CreateScalingPlanRequest(const CreateScalingPlanRequest &other)
    : AutoScalingPlansRequest(new CreateScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateScalingPlanRequest object.
 */
CreateScalingPlanRequest::CreateScalingPlanRequest()
    : AutoScalingPlansRequest(new CreateScalingPlanRequestPrivate(AutoScalingPlansRequest::CreateScalingPlanAction, this))
{

}

bool CreateScalingPlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateScalingPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateScalingPlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingPlansClient::send
 */
AwsAbstractResponse * CreateScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateScalingPlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateScalingPlanRequestPrivate
 *
 * @brief  Private implementation for CreateScalingPlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateScalingPlanRequestPrivate object.
 *
 * @param  action  AutoScalingPlans action being performed.
 * @param  q       Pointer to this object's public CreateScalingPlanRequest instance.
 */
CreateScalingPlanRequestPrivate::CreateScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, CreateScalingPlanRequest * const q)
    : CreateScalingPlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateScalingPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateScalingPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateScalingPlanRequest instance.
 */
CreateScalingPlanRequestPrivate::CreateScalingPlanRequestPrivate(
    const CreateScalingPlanRequestPrivate &other, CreateScalingPlanRequest * const q)
    : CreateScalingPlanPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace AWS
