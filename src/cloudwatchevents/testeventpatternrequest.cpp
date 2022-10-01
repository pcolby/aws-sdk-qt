// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testeventpatternrequest.h"
#include "testeventpatternrequest_p.h"
#include "testeventpatternresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::TestEventPatternRequest
 * \brief The TestEventPatternRequest class provides an interface for CloudWatchEvents TestEventPattern requests.
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
 * \sa CloudWatchEventsClient::testEventPattern
 */

/*!
 * Constructs a copy of \a other.
 */
TestEventPatternRequest::TestEventPatternRequest(const TestEventPatternRequest &other)
    : CloudWatchEventsRequest(new TestEventPatternRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestEventPatternRequest object.
 */
TestEventPatternRequest::TestEventPatternRequest()
    : CloudWatchEventsRequest(new TestEventPatternRequestPrivate(CloudWatchEventsRequest::TestEventPatternAction, this))
{

}

/*!
 * \reimp
 */
bool TestEventPatternRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestEventPatternResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestEventPatternRequest::response(QNetworkReply * const reply) const
{
    return new TestEventPatternResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::TestEventPatternRequestPrivate
 * \brief The TestEventPatternRequestPrivate class provides private implementation for TestEventPatternRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a TestEventPatternRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
TestEventPatternRequestPrivate::TestEventPatternRequestPrivate(
    const CloudWatchEventsRequest::Action action, TestEventPatternRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestEventPatternRequest
 * class' copy constructor.
 */
TestEventPatternRequestPrivate::TestEventPatternRequestPrivate(
    const TestEventPatternRequestPrivate &other, TestEventPatternRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
