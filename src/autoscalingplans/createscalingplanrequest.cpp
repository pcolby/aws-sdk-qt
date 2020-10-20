/*
    Copyright 2013-2020 Paul Colby

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

#include "createscalingplanrequest.h"
#include "createscalingplanrequest_p.h"
#include "createscalingplanresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::CreateScalingPlanRequest
 * \brief The CreateScalingPlanRequest class provides an interface for AutoScalingPlans CreateScalingPlan requests.
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
 *  For more information about AWS Auto Scaling, including information about granting IAM users required permissions for AWS
 *  Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *
 * \sa AutoScalingPlansClient::createScalingPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateScalingPlanRequest::CreateScalingPlanRequest(const CreateScalingPlanRequest &other)
    : AutoScalingPlansRequest(new CreateScalingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateScalingPlanRequest object.
 */
CreateScalingPlanRequest::CreateScalingPlanRequest()
    : AutoScalingPlansRequest(new CreateScalingPlanRequestPrivate(AutoScalingPlansRequest::CreateScalingPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateScalingPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateScalingPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScalingPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateScalingPlanResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScalingPlans::CreateScalingPlanRequestPrivate
 * \brief The CreateScalingPlanRequestPrivate class provides private implementation for CreateScalingPlanRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a CreateScalingPlanRequestPrivate object for AutoScalingPlans \a action,
 * with public implementation \a q.
 */
CreateScalingPlanRequestPrivate::CreateScalingPlanRequestPrivate(
    const AutoScalingPlansRequest::Action action, CreateScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateScalingPlanRequest
 * class' copy constructor.
 */
CreateScalingPlanRequestPrivate::CreateScalingPlanRequestPrivate(
    const CreateScalingPlanRequestPrivate &other, CreateScalingPlanRequest * const q)
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
