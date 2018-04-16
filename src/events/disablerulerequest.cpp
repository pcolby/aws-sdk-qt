/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disablerulerequest.h"
#include "disablerulerequest_p.h"
#include "disableruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DisableRuleRequest
 *
 * \brief The DisableRuleRequest class provides an interface for CloudWatchEvents DisableRule requests.
 *
 * \ingroup CloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 *
 * \sa CloudWatchEventsClient::disableRule
 */

/*!
 * @brief  Constructs a new DisableRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableRuleRequest::DisableRuleRequest(const DisableRuleRequest &other)
    : CloudWatchEventsRequest(new DisableRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisableRuleRequest object.
 */
DisableRuleRequest::DisableRuleRequest()
    : CloudWatchEventsRequest(new DisableRuleRequestPrivate(CloudWatchEventsRequest::DisableRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DisableRuleRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DisableRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableRuleRequest::response(QNetworkReply * const reply) const
{
    return new DisableRuleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisableRuleRequestPrivate
 *
 * @brief  Private implementation for DisableRuleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisableRuleRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public DisableRuleRequest instance.
 */
DisableRuleRequestPrivate::DisableRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, DisableRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisableRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableRuleRequest instance.
 */
DisableRuleRequestPrivate::DisableRuleRequestPrivate(
    const DisableRuleRequestPrivate &other, DisableRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
