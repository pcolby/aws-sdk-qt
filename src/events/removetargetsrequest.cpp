/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "removetargetsrequest.h"
#include "removetargetsrequest_p.h"
#include "removetargetsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::RemoveTargetsRequest
 * \brief The RemoveTargetsRequest class provides an interface for CloudWatchEvents RemoveTargets requests.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 *
 * \sa CloudWatchEventsClient::removeTargets
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTargetsRequest::RemoveTargetsRequest(const RemoveTargetsRequest &other)
    : CloudWatchEventsRequest(new RemoveTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTargetsRequest object.
 */
RemoveTargetsRequest::RemoveTargetsRequest()
    : CloudWatchEventsRequest(new RemoveTargetsRequestPrivate(CloudWatchEventsRequest::RemoveTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTargetsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::RemoveTargetsRequestPrivate
 * \brief The RemoveTargetsRequestPrivate class provides private implementation for RemoveTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 *
 * Constructs a RemoveTargetsRequestPrivate object for CloudWatchEvents \a action with,
 * public implementation \a q.
 */
RemoveTargetsRequestPrivate::RemoveTargetsRequestPrivate(
    const CloudWatchEventsRequest::Action action, RemoveTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTargetsRequest
 * class' copy constructor.
 */
RemoveTargetsRequestPrivate::RemoveTargetsRequestPrivate(
    const RemoveTargetsRequestPrivate &other, RemoveTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
