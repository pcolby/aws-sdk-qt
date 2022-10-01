// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectionsrequest.h"
#include "listconnectionsrequest_p.h"
#include "listconnectionsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListConnectionsRequest
 * \brief The ListConnectionsRequest class provides an interface for CloudWatchEvents ListConnections requests.
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
 * \sa CloudWatchEventsClient::listConnections
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectionsRequest::ListConnectionsRequest(const ListConnectionsRequest &other)
    : CloudWatchEventsRequest(new ListConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectionsRequest object.
 */
ListConnectionsRequest::ListConnectionsRequest()
    : CloudWatchEventsRequest(new ListConnectionsRequestPrivate(CloudWatchEventsRequest::ListConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::ListConnectionsRequestPrivate
 * \brief The ListConnectionsRequestPrivate class provides private implementation for ListConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListConnectionsRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
ListConnectionsRequestPrivate::ListConnectionsRequestPrivate(
    const CloudWatchEventsRequest::Action action, ListConnectionsRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectionsRequest
 * class' copy constructor.
 */
ListConnectionsRequestPrivate::ListConnectionsRequestPrivate(
    const ListConnectionsRequestPrivate &other, ListConnectionsRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
