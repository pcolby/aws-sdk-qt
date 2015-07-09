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

#include "sqssetqueueattributesrequest.h"
#include "sqssetqueueattributesrequest_p.h"
#include "sqssetqueueattributesresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsSetQueueAttributesRequest
 *
 * @brief  Implements SQS SetQueueAttributes requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SetQueueAttributes.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest.
 *
 * @todo
 */
/*SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest(
    ...
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(SqsRequest::SetQueueAttributesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest(const SqsSetQueueAttributesRequest &other)
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest object.
 */
SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest()
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(SqsRequest::SetQueueAttributesAction, this))
{

}

bool SqsSetQueueAttributesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsSetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsSetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsSetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SqsSetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsSetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for SqsSetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSetQueueAttributesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsSetQueueAttributesRequest instance.
 */
SqsSetQueueAttributesRequestPrivate::SqsSetQueueAttributesRequestPrivate(
    const SqsRequest::Action action, SqsSetQueueAttributesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsSetQueueAttributesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsSetQueueAttributesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsSetQueueAttributesRequest instance.
 */
SqsSetQueueAttributesRequestPrivate::SqsSetQueueAttributesRequestPrivate(
    const SqsSetQueueAttributesRequestPrivate &other, SqsSetQueueAttributesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
