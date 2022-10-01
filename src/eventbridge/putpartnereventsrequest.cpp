// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpartnereventsrequest.h"
#include "putpartnereventsrequest_p.h"
#include "putpartnereventsresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::PutPartnerEventsRequest
 * \brief The PutPartnerEventsRequest class provides an interface for EventBridge PutPartnerEvents requests.
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
 * \sa EventBridgeClient::putPartnerEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutPartnerEventsRequest::PutPartnerEventsRequest(const PutPartnerEventsRequest &other)
    : EventBridgeRequest(new PutPartnerEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPartnerEventsRequest object.
 */
PutPartnerEventsRequest::PutPartnerEventsRequest()
    : EventBridgeRequest(new PutPartnerEventsRequestPrivate(EventBridgeRequest::PutPartnerEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutPartnerEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPartnerEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPartnerEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutPartnerEventsResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::PutPartnerEventsRequestPrivate
 * \brief The PutPartnerEventsRequestPrivate class provides private implementation for PutPartnerEventsRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a PutPartnerEventsRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
PutPartnerEventsRequestPrivate::PutPartnerEventsRequestPrivate(
    const EventBridgeRequest::Action action, PutPartnerEventsRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPartnerEventsRequest
 * class' copy constructor.
 */
PutPartnerEventsRequestPrivate::PutPartnerEventsRequestPrivate(
    const PutPartnerEventsRequestPrivate &other, PutPartnerEventsRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
