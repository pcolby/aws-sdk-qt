// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerulerequest.h"
#include "describerulerequest_p.h"
#include "describeruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DescribeRuleRequest
 * \brief The DescribeRuleRequest class provides an interface for CloudWatchEvents DescribeRule requests.
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
 * \sa CloudWatchEventsClient::describeRule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRuleRequest::DescribeRuleRequest(const DescribeRuleRequest &other)
    : CloudWatchEventsRequest(new DescribeRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRuleRequest object.
 */
DescribeRuleRequest::DescribeRuleRequest()
    : CloudWatchEventsRequest(new DescribeRuleRequestPrivate(CloudWatchEventsRequest::DescribeRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuleResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::DescribeRuleRequestPrivate
 * \brief The DescribeRuleRequestPrivate class provides private implementation for DescribeRuleRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DescribeRuleRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
DescribeRuleRequestPrivate::DescribeRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, DescribeRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuleRequest
 * class' copy constructor.
 */
DescribeRuleRequestPrivate::DescribeRuleRequestPrivate(
    const DescribeRuleRequestPrivate &other, DescribeRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
