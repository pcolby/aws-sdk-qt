// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapidestinationrequest.h"
#include "describeapidestinationrequest_p.h"
#include "describeapidestinationresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DescribeApiDestinationRequest
 * \brief The DescribeApiDestinationRequest class provides an interface for EventBridge DescribeApiDestination requests.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your Amazon Web Services resources. When your resources
 *  change state, they automatically send events to an event stream. You can create rules that match selected events in the
 *  stream and route them to targets to take action. You can also use rules to take action on a predetermined schedule. For
 *  example, you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance enters
 *  the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential security
 *  or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon EventBridge User
 *
 * \sa EventBridgeClient::describeApiDestination
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApiDestinationRequest::DescribeApiDestinationRequest(const DescribeApiDestinationRequest &other)
    : EventBridgeRequest(new DescribeApiDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApiDestinationRequest object.
 */
DescribeApiDestinationRequest::DescribeApiDestinationRequest()
    : EventBridgeRequest(new DescribeApiDestinationRequestPrivate(EventBridgeRequest::DescribeApiDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApiDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApiDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApiDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApiDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::DescribeApiDestinationRequestPrivate
 * \brief The DescribeApiDestinationRequestPrivate class provides private implementation for DescribeApiDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DescribeApiDestinationRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
DescribeApiDestinationRequestPrivate::DescribeApiDestinationRequestPrivate(
    const EventBridgeRequest::Action action, DescribeApiDestinationRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApiDestinationRequest
 * class' copy constructor.
 */
DescribeApiDestinationRequestPrivate::DescribeApiDestinationRequestPrivate(
    const DescribeApiDestinationRequestPrivate &other, DescribeApiDestinationRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
