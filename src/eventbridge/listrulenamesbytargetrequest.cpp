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

#include "listrulenamesbytargetrequest.h"
#include "listrulenamesbytargetrequest_p.h"
#include "listrulenamesbytargetresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ListRuleNamesByTargetRequest
 * \brief The ListRuleNamesByTargetRequest class provides an interface for EventBridge ListRuleNamesByTarget requests.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
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
 * \sa EventBridgeClient::listRuleNamesByTarget
 */

/*!
 * Constructs a copy of \a other.
 */
ListRuleNamesByTargetRequest::ListRuleNamesByTargetRequest(const ListRuleNamesByTargetRequest &other)
    : EventBridgeRequest(new ListRuleNamesByTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRuleNamesByTargetRequest object.
 */
ListRuleNamesByTargetRequest::ListRuleNamesByTargetRequest()
    : EventBridgeRequest(new ListRuleNamesByTargetRequestPrivate(EventBridgeRequest::ListRuleNamesByTargetAction, this))
{

}

/*!
 * \reimp
 */
bool ListRuleNamesByTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRuleNamesByTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRuleNamesByTargetRequest::response(QNetworkReply * const reply) const
{
    return new ListRuleNamesByTargetResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::ListRuleNamesByTargetRequestPrivate
 * \brief The ListRuleNamesByTargetRequestPrivate class provides private implementation for ListRuleNamesByTargetRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ListRuleNamesByTargetRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
ListRuleNamesByTargetRequestPrivate::ListRuleNamesByTargetRequestPrivate(
    const EventBridgeRequest::Action action, ListRuleNamesByTargetRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRuleNamesByTargetRequest
 * class' copy constructor.
 */
ListRuleNamesByTargetRequestPrivate::ListRuleNamesByTargetRequestPrivate(
    const ListRuleNamesByTargetRequestPrivate &other, ListRuleNamesByTargetRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
