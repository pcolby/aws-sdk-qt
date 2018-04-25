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

#include "describescalingplansrequest.h"
#include "describescalingplansrequest_p.h"
#include "describescalingplansresponse.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlansRequest
 * \brief The DescribeScalingPlansRequest class provides an interface for AutoScalingPlans DescribeScalingPlans requests.
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
 * \sa AutoScalingPlansClient::describeScalingPlans
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScalingPlansRequest::DescribeScalingPlansRequest(const DescribeScalingPlansRequest &other)
    : AutoScalingPlansRequest(new DescribeScalingPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScalingPlansRequest object.
 */
DescribeScalingPlansRequest::DescribeScalingPlansRequest()
    : AutoScalingPlansRequest(new DescribeScalingPlansRequestPrivate(AutoScalingPlansRequest::DescribeScalingPlansAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingPlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScalingPlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingPlansRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingPlansResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlansRequestPrivate
 * \brief The DescribeScalingPlansRequestPrivate class provides private implementation for DescribeScalingPlansRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DescribeScalingPlansRequestPrivate object for AutoScalingPlans \a action,
 * with public implementation \a q.
 */
DescribeScalingPlansRequestPrivate::DescribeScalingPlansRequestPrivate(
    const AutoScalingPlansRequest::Action action, DescribeScalingPlansRequest * const q)
    : AutoScalingPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingPlansRequest
 * class' copy constructor.
 */
DescribeScalingPlansRequestPrivate::DescribeScalingPlansRequestPrivate(
    const DescribeScalingPlansRequestPrivate &other, DescribeScalingPlansRequest * const q)
    : AutoScalingPlansRequestPrivate(other, q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
