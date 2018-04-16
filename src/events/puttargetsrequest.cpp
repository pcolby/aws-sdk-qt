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

#include "puttargetsrequest.h"
#include "puttargetsrequest_p.h"
#include "puttargetsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::PutTargetsRequest
 *
 * \brief The PutTargetsRequest class provides an interface for CloudWatchEvents PutTargets requests.
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
 * \sa CloudWatchEventsClient::putTargets
 */

/*!
 * @brief  Constructs a new PutTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutTargetsRequest::PutTargetsRequest(const PutTargetsRequest &other)
    : CloudWatchEventsRequest(new PutTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutTargetsRequest object.
 */
PutTargetsRequest::PutTargetsRequest()
    : CloudWatchEventsRequest(new PutTargetsRequestPrivate(CloudWatchEventsRequest::PutTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool PutTargetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutTargetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutTargetsRequest::response(QNetworkReply * const reply) const
{
    return new PutTargetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutTargetsRequestPrivate
 *
 * @brief  Private implementation for PutTargetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutTargetsRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public PutTargetsRequest instance.
 */
PutTargetsRequestPrivate::PutTargetsRequestPrivate(
    const CloudWatchEventsRequest::Action action, PutTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutTargetsRequest instance.
 */
PutTargetsRequestPrivate::PutTargetsRequestPrivate(
    const PutTargetsRequestPrivate &other, PutTargetsRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
