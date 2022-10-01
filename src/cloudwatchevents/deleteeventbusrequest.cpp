// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventbusrequest.h"
#include "deleteeventbusrequest_p.h"
#include "deleteeventbusresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DeleteEventBusRequest
 * \brief The DeleteEventBusRequest class provides an interface for CloudWatchEvents DeleteEventBus requests.
 *
 * \inmodule QtAwsCloudWatchEvents
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
 * \sa CloudWatchEventsClient::deleteEventBus
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventBusRequest::DeleteEventBusRequest(const DeleteEventBusRequest &other)
    : CloudWatchEventsRequest(new DeleteEventBusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventBusRequest object.
 */
DeleteEventBusRequest::DeleteEventBusRequest()
    : CloudWatchEventsRequest(new DeleteEventBusRequestPrivate(CloudWatchEventsRequest::DeleteEventBusAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventBusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventBusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventBusRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventBusResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::DeleteEventBusRequestPrivate
 * \brief The DeleteEventBusRequestPrivate class provides private implementation for DeleteEventBusRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DeleteEventBusRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
DeleteEventBusRequestPrivate::DeleteEventBusRequestPrivate(
    const CloudWatchEventsRequest::Action action, DeleteEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventBusRequest
 * class' copy constructor.
 */
DeleteEventBusRequestPrivate::DeleteEventBusRequestPrivate(
    const DeleteEventBusRequestPrivate &other, DeleteEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
