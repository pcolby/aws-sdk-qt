// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemetriccollectiontypesrequest.h"
#include "describemetriccollectiontypesrequest_p.h"
#include "describemetriccollectiontypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesRequest
 * \brief The DescribeMetricCollectionTypesRequest class provides an interface for AutoScaling DescribeMetricCollectionTypes requests.
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
 * \sa AutoScalingClient::describeMetricCollectionTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMetricCollectionTypesRequest::DescribeMetricCollectionTypesRequest(const DescribeMetricCollectionTypesRequest &other)
    : AutoScalingRequest(new DescribeMetricCollectionTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMetricCollectionTypesRequest object.
 */
DescribeMetricCollectionTypesRequest::DescribeMetricCollectionTypesRequest()
    : AutoScalingRequest(new DescribeMetricCollectionTypesRequestPrivate(AutoScalingRequest::DescribeMetricCollectionTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMetricCollectionTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMetricCollectionTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMetricCollectionTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMetricCollectionTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesRequestPrivate
 * \brief The DescribeMetricCollectionTypesRequestPrivate class provides private implementation for DescribeMetricCollectionTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeMetricCollectionTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeMetricCollectionTypesRequestPrivate::DescribeMetricCollectionTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeMetricCollectionTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMetricCollectionTypesRequest
 * class' copy constructor.
 */
DescribeMetricCollectionTypesRequestPrivate::DescribeMetricCollectionTypesRequestPrivate(
    const DescribeMetricCollectionTypesRequestPrivate &other, DescribeMetricCollectionTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
