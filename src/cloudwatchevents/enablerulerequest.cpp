/*
    Copyright 2013-2021 Paul Colby

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

#include "enablerulerequest.h"
#include "enablerulerequest_p.h"
#include "enableruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::EnableRuleRequest
 * \brief The EnableRuleRequest class provides an interface for CloudWatchEvents EnableRule requests.
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
 * \sa CloudWatchEventsClient::enableRule
 */

/*!
 * Constructs a copy of \a other.
 */
EnableRuleRequest::EnableRuleRequest(const EnableRuleRequest &other)
    : CloudWatchEventsRequest(new EnableRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableRuleRequest object.
 */
EnableRuleRequest::EnableRuleRequest()
    : CloudWatchEventsRequest(new EnableRuleRequestPrivate(CloudWatchEventsRequest::EnableRuleAction, this))
{

}

/*!
 * \reimp
 */
bool EnableRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableRuleRequest::response(QNetworkReply * const reply) const
{
    return new EnableRuleResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::EnableRuleRequestPrivate
 * \brief The EnableRuleRequestPrivate class provides private implementation for EnableRuleRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a EnableRuleRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
EnableRuleRequestPrivate::EnableRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, EnableRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableRuleRequest
 * class' copy constructor.
 */
EnableRuleRequestPrivate::EnableRuleRequestPrivate(
    const EnableRuleRequestPrivate &other, EnableRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
