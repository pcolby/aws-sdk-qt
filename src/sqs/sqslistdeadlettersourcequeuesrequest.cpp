/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqslistdeadlettersourcequeuesrequest.h"
#include "sqslistdeadlettersourcequeuesrequest_p.h"
#include "sqslistdeadlettersourcequeuesresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsListDeadLetterSourceQueuesRequest
 *
 * @brief  Implements SQS ListDeadLetterSourceQueues requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListDeadLetterSourceQueues.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest.
 *
 * @todo
 */
/*SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest(
    ...
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(SqsRequest::ListDeadLetterSourceQueuesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest(const SqsListDeadLetterSourceQueuesRequest &other)
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest object.
 */
SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest()
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(SqsRequest::ListDeadLetterSourceQueuesAction, this))
{

}

bool SqsListDeadLetterSourceQueuesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsListDeadLetterSourceQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsListDeadLetterSourceQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsListDeadLetterSourceQueuesRequest::response(QNetworkReply * const reply) const
{
    return new SqsListDeadLetterSourceQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsListDeadLetterSourceQueuesRequestPrivate
 *
 * @brief  Private implementation for SqsListDeadLetterSourceQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsListDeadLetterSourceQueuesRequest instance.
 */
SqsListDeadLetterSourceQueuesRequestPrivate::SqsListDeadLetterSourceQueuesRequestPrivate(
    const SqsRequest::Action action, SqsListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsListDeadLetterSourceQueuesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsListDeadLetterSourceQueuesRequest instance.
 */
SqsListDeadLetterSourceQueuesRequestPrivate::SqsListDeadLetterSourceQueuesRequestPrivate(
    const SqsListDeadLetterSourceQueuesRequestPrivate &other, SqsListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
