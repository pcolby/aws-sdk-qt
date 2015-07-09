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

#include "sqsdeletemessagerequest.h"
#include "sqsdeletemessagerequest_p.h"
#include "sqsdeletemessageresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsDeleteMessageRequest
 *
 * @brief  Implements SQS DeleteMessage requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteMessage.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsDeleteMessageRequest.
 *
 * @todo
 */
/*SqsDeleteMessageRequest::SqsDeleteMessageRequest(
    ...
    : SqsRequest(new SqsDeleteMessageRequestPrivate(SqsRequest::DeleteMessageAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsDeleteMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsDeleteMessageRequest::SqsDeleteMessageRequest(const SqsDeleteMessageRequest &other)
    : SqsRequest(new SqsDeleteMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsDeleteMessageRequest object.
 */
SqsDeleteMessageRequest::SqsDeleteMessageRequest()
    : SqsRequest(new SqsDeleteMessageRequestPrivate(SqsRequest::DeleteMessageAction, this))
{

}

bool SqsDeleteMessageRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsDeleteMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsDeleteMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsDeleteMessageRequest::response(QNetworkReply * const reply) const
{
    return new SqsDeleteMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsDeleteMessageRequestPrivate
 *
 * @brief  Private implementation for SqsDeleteMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsDeleteMessageRequest instance.
 */
SqsDeleteMessageRequestPrivate::SqsDeleteMessageRequestPrivate(
    const SqsRequest::Action action, SqsDeleteMessageRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsDeleteMessageResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsDeleteMessageRequest instance.
 */
SqsDeleteMessageRequestPrivate::SqsDeleteMessageRequestPrivate(
    const SqsDeleteMessageRequestPrivate &other, SqsDeleteMessageRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
