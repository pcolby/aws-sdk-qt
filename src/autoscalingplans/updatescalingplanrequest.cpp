/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatescalingplanrequest.h"
#include "updatescalingplanrequest_p.h"
#include "updatescalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::UpdateScalingPlanRequest
 * \brief The UpdateScalingPlanRequest class provides an interface for AutoScalingPlans UpdateScalingPlan requests.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
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
 * \sa AutoScalingPlansClient::updateScalingPlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateScalingPlanRequest::UpdateScalingPlanRequest(const UpdateScalingPlanRequest &other)
    : AutoScalingPlansRequest(new UpdateScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateScalingPlanRequest object.
 */
UpdateScalingPlanRequest::UpdateScalingPlanRequest()
    : AutoScalingPlansRequest(new UpdateScalingPlanRequestPrivate(AutoScalingPlansRequest::UpdateScalingPlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateScalingPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateScalingPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScalingPlanResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScalingPlans::UpdateScalingPlanRequestPrivate
 * \brief The UpdateScalingPlanRequestPrivate class provides private implementation for UpdateScalingPlanRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a UpdateScalingPlanRequestPrivate object for AutoScalingPlans \a action,
 * with public implementation \a q.
 */
UpdateScalingPlanRequestPrivate::UpdateScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, UpdateScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateScalingPlanRequest
 * class' copy constructor.
 */
UpdateScalingPlanRequestPrivate::UpdateScalingPlanRequestPrivate(
    const UpdateScalingPlanRequestPrivate &other, UpdateScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
