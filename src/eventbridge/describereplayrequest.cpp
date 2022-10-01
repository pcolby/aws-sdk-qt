// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplayrequest.h"
#include "describereplayrequest_p.h"
#include "describereplayresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DescribeReplayRequest
 * \brief The DescribeReplayRequest class provides an interface for EventBridge DescribeReplay requests.
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
 * \sa EventBridgeClient::describeReplay
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplayRequest::DescribeReplayRequest(const DescribeReplayRequest &other)
    : EventBridgeRequest(new DescribeReplayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplayRequest object.
 */
DescribeReplayRequest::DescribeReplayRequest()
    : EventBridgeRequest(new DescribeReplayRequestPrivate(EventBridgeRequest::DescribeReplayAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplayRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplayResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::DescribeReplayRequestPrivate
 * \brief The DescribeReplayRequestPrivate class provides private implementation for DescribeReplayRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DescribeReplayRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
DescribeReplayRequestPrivate::DescribeReplayRequestPrivate(
    const EventBridgeRequest::Action action, DescribeReplayRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplayRequest
 * class' copy constructor.
 */
DescribeReplayRequestPrivate::DescribeReplayRequestPrivate(
    const DescribeReplayRequestPrivate &other, DescribeReplayRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
