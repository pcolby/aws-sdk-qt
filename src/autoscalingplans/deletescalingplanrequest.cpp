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

#include "deletescalingplanrequest.h"
#include "deletescalingplanrequest_p.h"
#include "deletescalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanRequest
 * \brief The DeleteScalingPlanRequest class provides an interface for AutoScalingPlans DeleteScalingPlan requests.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling and predictive scaling for your resources using scaling plans. Use this service in conjunction with the Amazon
 *  EC2 Auto Scaling, Application Auto Scaling, Amazon CloudWatch, and AWS CloudFormation services.
 * 
 *  </p
 * 
 *  Currently, predictive scaling is only available for Amazon EC2 Auto Scaling
 * 
 *  groups>
 * 
 *  For more information about AWS Auto Scaling, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *
 * \sa AutoScalingPlansClient::deleteScalingPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScalingPlanRequest::DeleteScalingPlanRequest(const DeleteScalingPlanRequest &other)
    : AutoScalingPlansRequest(new DeleteScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScalingPlanRequest object.
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
 * Returns a DeleteScalingPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScalingPlanResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanRequestPrivate
 * \brief The DeleteScalingPlanRequestPrivate class provides private implementation for DeleteScalingPlanRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DeleteScalingPlanRequestPrivate object for AutoScalingPlans \a action,
 * with public implementation \a q.
 */
DeleteScalingPlanRequestPrivate::DeleteScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, DeleteScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScalingPlanRequest
 * class' copy constructor.
 */
DeleteScalingPlanRequestPrivate::DeleteScalingPlanRequestPrivate(
    const DeleteScalingPlanRequestPrivate &other, DeleteScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
