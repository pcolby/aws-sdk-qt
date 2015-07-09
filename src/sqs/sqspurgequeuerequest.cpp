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

#include "sqspurgequeuerequest.h"
#include "sqspurgequeuerequest_p.h"
#include "sqspurgequeueresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsPurgeQueueRequest
 *
 * @brief  Implements SQS PurgeQueue requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_PurgeQueue.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsPurgeQueueRequest.
 *
 * @todo
 */
/*SqsPurgeQueueRequest::SqsPurgeQueueRequest(
    ...
    : SqsRequest(new SqsPurgeQueueRequestPrivate(SqsRequest::PurgeQueueAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsPurgeQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsPurgeQueueRequest::SqsPurgeQueueRequest(const SqsPurgeQueueRequest &other)
    : SqsRequest(new SqsPurgeQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsPurgeQueueRequest object.
 */
SqsPurgeQueueRequest::SqsPurgeQueueRequest()
    : SqsRequest(new SqsPurgeQueueRequestPrivate(SqsRequest::PurgeQueueAction, this))
{

}

bool SqsPurgeQueueRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsPurgeQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsPurgeQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsPurgeQueueRequest::response(QNetworkReply * const reply) const
{
    return new SqsPurgeQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsPurgeQueueRequestPrivate
 *
 * @brief  Private implementation for SqsPurgeQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsPurgeQueueResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsPurgeQueueRequest instance.
 */
SqsPurgeQueueRequestPrivate::SqsPurgeQueueRequestPrivate(
    const SqsRequest::Action action, SqsPurgeQueueRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsPurgeQueueResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsPurgeQueueResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsPurgeQueueRequest instance.
 */
SqsPurgeQueueRequestPrivate::SqsPurgeQueueRequestPrivate(
    const SqsPurgeQueueRequestPrivate &other, SqsPurgeQueueRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
