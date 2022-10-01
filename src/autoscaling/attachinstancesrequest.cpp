// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachinstancesrequest.h"
#include "attachinstancesrequest_p.h"
#include "attachinstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachInstancesRequest
 * \brief The AttachInstancesRequest class provides an interface for AutoScaling AttachInstances requests.
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
 * \sa AutoScalingClient::attachInstances
 */

/*!
 * Constructs a copy of \a other.
 */
AttachInstancesRequest::AttachInstancesRequest(const AttachInstancesRequest &other)
    : AutoScalingRequest(new AttachInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachInstancesRequest object.
 */
AttachInstancesRequest::AttachInstancesRequest()
    : AutoScalingRequest(new AttachInstancesRequestPrivate(AutoScalingRequest::AttachInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool AttachInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachInstancesRequest::response(QNetworkReply * const reply) const
{
    return new AttachInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::AttachInstancesRequestPrivate
 * \brief The AttachInstancesRequestPrivate class provides private implementation for AttachInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachInstancesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
AttachInstancesRequestPrivate::AttachInstancesRequestPrivate(
    const AutoScalingRequest::Action action, AttachInstancesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachInstancesRequest
 * class' copy constructor.
 */
AttachInstancesRequestPrivate::AttachInstancesRequestPrivate(
    const AttachInstancesRequestPrivate &other, AttachInstancesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
