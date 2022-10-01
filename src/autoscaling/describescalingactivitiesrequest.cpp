// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesrequest_p.h"
#include "describescalingactivitiesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScalingActivitiesRequest
 * \brief The DescribeScalingActivitiesRequest class provides an interface for AutoScaling DescribeScalingActivities requests.
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
 * \sa AutoScalingClient::describeScalingActivities
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &other)
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScalingActivitiesRequest object.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest()
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(AutoScalingRequest::DescribeScalingActivitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingActivitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScalingActivitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingActivitiesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeScalingActivitiesRequestPrivate
 * \brief The DescribeScalingActivitiesRequestPrivate class provides private implementation for DescribeScalingActivitiesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScalingActivitiesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeScalingActivitiesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingActivitiesRequest
 * class' copy constructor.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const DescribeScalingActivitiesRequestPrivate &other, DescribeScalingActivitiesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
