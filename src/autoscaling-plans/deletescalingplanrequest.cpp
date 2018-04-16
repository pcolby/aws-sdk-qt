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

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanRequest
 *
 * \brief The DeleteScalingPlanRequest class encapsulates AutoScalingPlans DeleteScalingPlan requests.
 *
 * \ingroup AutoScalingPlans
 *
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling for your scalable
 * 
 *  resources>
 * 
 *  To get started, create a scaling plan with a set of instructions used to configure dynamic scaling for the scalable
 *  resources in your application. AWS Auto Scaling creates target tracking scaling policies for the scalable resources in
 *  your scaling plan. Target tracking scaling policies adjust the capacity of your scalable resource as required to
 *  maintain resource utilization at the target value that you
 *
 * \sa AutoScalingPlansClient::deleteScalingPlan
 */

/*!
 * @brief  Constructs a new DeleteScalingPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteScalingPlanRequest::DeleteScalingPlanRequest(const DeleteScalingPlanRequest &other)
    : AutoScalingPlansRequest(new DeleteScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteScalingPlanRequest object.
 */
DeleteScalingPlanRequest::DeleteScalingPlanRequest()
    : AutoScalingPlansRequest(new DeleteScalingPlanRequestPrivate(AutoScalingPlansRequest::DeleteScalingPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScalingPlanRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteScalingPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteScalingPlanResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingPlansClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScalingPlanResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteScalingPlanRequestPrivate
 *
 * @brief  Private implementation for DeleteScalingPlanRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPlanRequestPrivate object.
 *
 * @param  action  AutoScalingPlans action being performed.
 * @param  q       Pointer to this object's public DeleteScalingPlanRequest instance.
 */
DeleteScalingPlanRequestPrivate::DeleteScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, DeleteScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
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
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
