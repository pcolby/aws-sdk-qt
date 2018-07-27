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

#include "describeadjustmenttypesrequest.h"
#include "describeadjustmenttypesrequest_p.h"
#include "describeadjustmenttypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesRequest
 * \brief The DescribeAdjustmentTypesRequest class provides an interface for AutoScaling DescribeAdjustmentTypes requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeAdjustmentTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAdjustmentTypesRequest::DescribeAdjustmentTypesRequest(const DescribeAdjustmentTypesRequest &other)
    : AutoScalingRequest(new DescribeAdjustmentTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAdjustmentTypesRequest object.
 */
DescribeAdjustmentTypesRequest::DescribeAdjustmentTypesRequest()
    : AutoScalingRequest(new DescribeAdjustmentTypesRequestPrivate(AutoScalingRequest::DescribeAdjustmentTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAdjustmentTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAdjustmentTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAdjustmentTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAdjustmentTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesRequestPrivate
 * \brief The DescribeAdjustmentTypesRequestPrivate class provides private implementation for DescribeAdjustmentTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAdjustmentTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAdjustmentTypesRequestPrivate::DescribeAdjustmentTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAdjustmentTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAdjustmentTypesRequest
 * class' copy constructor.
 */
DescribeAdjustmentTypesRequestPrivate::DescribeAdjustmentTypesRequestPrivate(
    const DescribeAdjustmentTypesRequestPrivate &other, DescribeAdjustmentTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
