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

#include "describeeventbusrequest.h"
#include "describeeventbusrequest_p.h"
#include "describeeventbusresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DescribeEventBusRequest
 * \brief The DescribeEventBusRequest class provides an interface for CloudWatchEvents DescribeEventBus requests.
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
 * \sa CloudWatchEventsClient::describeEventBus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventBusRequest::DescribeEventBusRequest(const DescribeEventBusRequest &other)
    : CloudWatchEventsRequest(new DescribeEventBusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventBusRequest object.
 */
DescribeEventBusRequest::DescribeEventBusRequest()
    : CloudWatchEventsRequest(new DescribeEventBusRequestPrivate(CloudWatchEventsRequest::DescribeEventBusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventBusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventBusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventBusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventBusResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::DescribeEventBusRequestPrivate
 * \brief The DescribeEventBusRequestPrivate class provides private implementation for DescribeEventBusRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DescribeEventBusRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
DescribeEventBusRequestPrivate::DescribeEventBusRequestPrivate(
    const CloudWatchEventsRequest::Action action, DescribeEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventBusRequest
 * class' copy constructor.
 */
DescribeEventBusRequestPrivate::DescribeEventBusRequestPrivate(
    const DescribeEventBusRequestPrivate &other, DescribeEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
