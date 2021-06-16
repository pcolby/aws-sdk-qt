/*
    Copyright 2013-2021 Paul Colby

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

#include "putscalingpolicyrequest.h"
#include "putscalingpolicyrequest_p.h"
#include "putscalingpolicyresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::PutScalingPolicyRequest
 * \brief The PutScalingPolicyRequest class provides an interface for ApplicationAutoScaling PutScalingPolicy requests.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon ECS
 * 
 *  service> </li> <li>
 * 
 *  Amazon EC2 Spot Fleet
 * 
 *  request> </li> <li>
 * 
 *  Amazon EMR
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon AppStream 2.0
 * 
 *  fleet> </li> <li>
 * 
 *  Amazon DynamoDB tables and global secondary indexes throughput
 * 
 *  capacit> </li> <li>
 * 
 *  Amazon Aurora
 * 
 *  Replica> </li> <li>
 * 
 *  Amazon SageMaker endpoint
 * 
 *  variant> </li> <li>
 * 
 *  Custom resources provided by your own applications or
 * 
 *  service> </li> <li>
 * 
 *  Amazon Comprehend document classification and entity recognizer
 * 
 *  endpoint> </li> <li>
 * 
 *  AWS Lambda function provisioned
 * 
 *  concurrenc> </li> <li>
 * 
 *  Amazon Keyspaces (for Apache Cassandra)
 * 
 *  table> </li> <li>
 * 
 *  Amazon Managed Streaming for Apache Kafka broker
 * 
 *  storag> </li> </ul>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Application Auto Scaling service API includes three key sets of actions:
 * 
 *  </p <ul> <li>
 * 
 *  Register and manage scalable targets - Register AWS or custom resources as scalable targets (a resource that Application
 *  Auto Scaling can scale), set minimum and maximum capacity limits, and retrieve information on existing scalable
 * 
 *  targets> </li> <li>
 * 
 *  Configure and manage automatic scaling - Define scaling policies to dynamically scale your resources in response to
 *  CloudWatch alarms, schedule one-time or recurring scaling actions, and retrieve your recent scaling activity
 * 
 *  history> </li> <li>
 * 
 *  Suspend and resume scaling - Temporarily suspend and later resume automatic scaling by calling the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
 *  API action for any Application Auto Scaling scalable target. You can suspend and resume (individually or in combination)
 *  scale-out activities that are triggered by a scaling policy, scale-in activities that are triggered by a scaling policy,
 *  and scheduled
 * 
 *  scaling> </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, including information about granting IAM users required permissions for
 *  Application Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 *
 * \sa ApplicationAutoScalingClient::putScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest(const PutScalingPolicyRequest &other)
    : ApplicationAutoScalingRequest(new PutScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutScalingPolicyRequest object.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest()
    : ApplicationAutoScalingRequest(new PutScalingPolicyRequestPrivate(ApplicationAutoScalingRequest::PutScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationAutoScaling::PutScalingPolicyRequestPrivate
 * \brief The PutScalingPolicyRequestPrivate class provides private implementation for PutScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a PutScalingPolicyRequestPrivate object for ApplicationAutoScaling \a action,
 * with public implementation \a q.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, PutScalingPolicyRequest * const q)
    : ApplicationAutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutScalingPolicyRequest
 * class' copy constructor.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const PutScalingPolicyRequestPrivate &other, PutScalingPolicyRequest * const q)
    : ApplicationAutoScalingRequestPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
