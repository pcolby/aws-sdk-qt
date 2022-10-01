// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpartnereventsourceaccountsrequest.h"
#include "listpartnereventsourceaccountsrequest_p.h"
#include "listpartnereventsourceaccountsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourceAccountsRequest
 * \brief The ListPartnerEventSourceAccountsRequest class provides an interface for CloudWatchEvents ListPartnerEventSourceAccounts requests.
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
 * \sa CloudWatchEventsClient::listPartnerEventSourceAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListPartnerEventSourceAccountsRequest::ListPartnerEventSourceAccountsRequest(const ListPartnerEventSourceAccountsRequest &other)
    : CloudWatchEventsRequest(new ListPartnerEventSourceAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPartnerEventSourceAccountsRequest object.
 */
ListPartnerEventSourceAccountsRequest::ListPartnerEventSourceAccountsRequest()
    : CloudWatchEventsRequest(new ListPartnerEventSourceAccountsRequestPrivate(CloudWatchEventsRequest::ListPartnerEventSourceAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPartnerEventSourceAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPartnerEventSourceAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPartnerEventSourceAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListPartnerEventSourceAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourceAccountsRequestPrivate
 * \brief The ListPartnerEventSourceAccountsRequestPrivate class provides private implementation for ListPartnerEventSourceAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListPartnerEventSourceAccountsRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
ListPartnerEventSourceAccountsRequestPrivate::ListPartnerEventSourceAccountsRequestPrivate(
    const CloudWatchEventsRequest::Action action, ListPartnerEventSourceAccountsRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPartnerEventSourceAccountsRequest
 * class' copy constructor.
 */
ListPartnerEventSourceAccountsRequestPrivate::ListPartnerEventSourceAccountsRequestPrivate(
    const ListPartnerEventSourceAccountsRequestPrivate &other, ListPartnerEventSourceAccountsRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
