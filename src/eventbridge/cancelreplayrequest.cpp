// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelreplayrequest.h"
#include "cancelreplayrequest_p.h"
#include "cancelreplayresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::CancelReplayRequest
 * \brief The CancelReplayRequest class provides an interface for EventBridge CancelReplay requests.
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
 * \sa EventBridgeClient::cancelReplay
 */

/*!
 * Constructs a copy of \a other.
 */
CancelReplayRequest::CancelReplayRequest(const CancelReplayRequest &other)
    : EventBridgeRequest(new CancelReplayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelReplayRequest object.
 */
CancelReplayRequest::CancelReplayRequest()
    : EventBridgeRequest(new CancelReplayRequestPrivate(EventBridgeRequest::CancelReplayAction, this))
{

}

/*!
 * \reimp
 */
bool CancelReplayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelReplayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelReplayRequest::response(QNetworkReply * const reply) const
{
    return new CancelReplayResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::CancelReplayRequestPrivate
 * \brief The CancelReplayRequestPrivate class provides private implementation for CancelReplayRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a CancelReplayRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
CancelReplayRequestPrivate::CancelReplayRequestPrivate(
    const EventBridgeRequest::Action action, CancelReplayRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelReplayRequest
 * class' copy constructor.
 */
CancelReplayRequestPrivate::CancelReplayRequestPrivate(
    const CancelReplayRequestPrivate &other, CancelReplayRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
