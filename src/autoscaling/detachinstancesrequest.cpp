// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachinstancesrequest.h"
#include "detachinstancesrequest_p.h"
#include "detachinstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachInstancesRequest
 * \brief The DetachInstancesRequest class provides an interface for AutoScaling DetachInstances requests.
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
 * \sa AutoScalingClient::detachInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DetachInstancesRequest::DetachInstancesRequest(const DetachInstancesRequest &other)
    : AutoScalingRequest(new DetachInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachInstancesRequest object.
 */
DetachInstancesRequest::DetachInstancesRequest()
    : AutoScalingRequest(new DetachInstancesRequestPrivate(AutoScalingRequest::DetachInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DetachInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DetachInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DetachInstancesRequestPrivate
 * \brief The DetachInstancesRequestPrivate class provides private implementation for DetachInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachInstancesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DetachInstancesRequestPrivate::DetachInstancesRequestPrivate(
    const AutoScalingRequest::Action action, DetachInstancesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachInstancesRequest
 * class' copy constructor.
 */
DetachInstancesRequestPrivate::DetachInstancesRequestPrivate(
    const DetachInstancesRequestPrivate &other, DetachInstancesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
