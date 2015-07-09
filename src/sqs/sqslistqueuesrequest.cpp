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

#include "sqslistqueuesrequest.h"
#include "sqslistqueuesrequest_p.h"
#include "sqslistqueuesresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsListQueuesRequest
 *
 * @brief  Implements SQS ListQueues requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListQueues.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsListQueuesRequest.
 *
 * @todo
 */
/*SqsListQueuesRequest::SqsListQueuesRequest(
    ...
    : SqsRequest(new SqsListQueuesRequestPrivate(SqsRequest::ListQueuesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsListQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsListQueuesRequest::SqsListQueuesRequest(const SqsListQueuesRequest &other)
    : SqsRequest(new SqsListQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsListQueuesRequest object.
 */
SqsListQueuesRequest::SqsListQueuesRequest()
    : SqsRequest(new SqsListQueuesRequestPrivate(SqsRequest::ListQueuesAction, this))
{

}

bool SqsListQueuesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsListQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsListQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsListQueuesRequest::response(QNetworkReply * const reply) const
{
    return new SqsListQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsListQueuesRequestPrivate
 *
 * @brief  Private implementation for SqsListQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListQueuesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsListQueuesRequest instance.
 */
SqsListQueuesRequestPrivate::SqsListQueuesRequestPrivate(
    const SqsRequest::Action action, SqsListQueuesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsListQueuesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsListQueuesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsListQueuesRequest instance.
 */
SqsListQueuesRequestPrivate::SqsListQueuesRequestPrivate(
    const SqsListQueuesRequestPrivate &other, SqsListQueuesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
