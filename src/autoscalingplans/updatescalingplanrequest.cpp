// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Use AWS Auto Scaling to create scaling plans for your applications to automatically scale your scalable AWS resources.
 * 
 *  </p
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  You can use the AWS Auto Scaling service API to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Create and manage scaling
 * 
 *  plan> </li> <li>
 * 
 *  Define target tracking scaling policies to dynamically scale your resources based on
 * 
 *  utilizatio> </li> <li>
 * 
 *  Scale Amazon EC2 Auto Scaling groups using predictive scaling and dynamic scaling to scale your Amazon EC2 capacity
 * 
 *  faste> </li> <li>
 * 
 *  Set minimum and maximum capacity
 * 
 *  limit> </li> <li>
 * 
 *  Retrieve information on existing scaling
 * 
 *  plan> </li> <li>
 * 
 *  Access current forecast data and historical forecast data for up to 56 days
 * 
 *  previou> </li> </ul>
 * 
 *  To learn more about AWS Auto Scaling, including information about granting IAM users required permissions for AWS Auto
 *  Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *  Guide</a>.
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
