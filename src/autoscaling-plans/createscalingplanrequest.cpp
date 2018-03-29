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

#include "createscalingplanrequest.h"
#include "createscalingplanrequest_p.h"
#include "createscalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/**
 * @class  CreateScalingPlanRequest
 *
 * @brief  Implements AutoScalingPlans CreateScalingPlan requests.
 *
 * @see    AutoScalingPlansClient::createScalingPlan
 */

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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingPlansClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScalingPlanRequest::response(QNetworkReply * const reply) const
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
    : AutoScalingPlansRequestPrivate(action, q)
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
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
