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

#include "sqsgetqueueurlrequest.h"
#include "sqsgetqueueurlrequest_p.h"
#include "sqsgetqueueurlresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsGetQueueUrlRequest
 *
 * @brief  Implements SQS GetQueueUrl requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueUrl.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest.
 *
 * @todo
 */
/*SqsGetQueueUrlRequest::SqsGetQueueUrlRequest(
    ...
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(SqsRequest::GetQueueUrlAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsGetQueueUrlRequest::SqsGetQueueUrlRequest(const SqsGetQueueUrlRequest &other)
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest object.
 */
SqsGetQueueUrlRequest::SqsGetQueueUrlRequest()
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(SqsRequest::GetQueueUrlAction, this))
{

}

bool SqsGetQueueUrlRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsGetQueueUrlResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsGetQueueUrlResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsGetQueueUrlRequest::response(QNetworkReply * const reply) const
{
    return new SqsGetQueueUrlResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsGetQueueUrlRequestPrivate
 *
 * @brief  Private implementation for SqsGetQueueUrlRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueUrlResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsGetQueueUrlRequest instance.
 */
SqsGetQueueUrlRequestPrivate::SqsGetQueueUrlRequestPrivate(
    const SqsRequest::Action action, SqsGetQueueUrlRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueUrlResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsGetQueueUrlResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsGetQueueUrlRequest instance.
 */
SqsGetQueueUrlRequestPrivate::SqsGetQueueUrlRequestPrivate(
    const SqsGetQueueUrlRequestPrivate &other, SqsGetQueueUrlRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
