// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapidestinationsrequest.h"
#include "listapidestinationsrequest_p.h"
#include "listapidestinationsresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ListApiDestinationsRequest
 * \brief The ListApiDestinationsRequest class provides an interface for EventBridge ListApiDestinations requests.
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
 * \sa EventBridgeClient::listApiDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
ListApiDestinationsRequest::ListApiDestinationsRequest(const ListApiDestinationsRequest &other)
    : EventBridgeRequest(new ListApiDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApiDestinationsRequest object.
 */
ListApiDestinationsRequest::ListApiDestinationsRequest()
    : EventBridgeRequest(new ListApiDestinationsRequestPrivate(EventBridgeRequest::ListApiDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApiDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApiDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApiDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApiDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::ListApiDestinationsRequestPrivate
 * \brief The ListApiDestinationsRequestPrivate class provides private implementation for ListApiDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ListApiDestinationsRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
ListApiDestinationsRequestPrivate::ListApiDestinationsRequestPrivate(
    const EventBridgeRequest::Action action, ListApiDestinationsRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApiDestinationsRequest
 * class' copy constructor.
 */
ListApiDestinationsRequestPrivate::ListApiDestinationsRequestPrivate(
    const ListApiDestinationsRequestPrivate &other, ListApiDestinationsRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
