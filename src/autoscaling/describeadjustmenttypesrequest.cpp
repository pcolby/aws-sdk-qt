// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
