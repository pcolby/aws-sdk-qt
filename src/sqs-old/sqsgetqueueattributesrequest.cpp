/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsgetqueueattributesrequest.h"
#include "sqsgetqueueattributesrequest_p.h"
#include "sqsgetqueueattributesresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsGetQueueAttributesRequest
 *
 * @brief  Implements SQS GetQueueAttributes requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueAttributes.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest.
 *
 * @todo
 */
/*SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest(
    ...
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(SqsRequest::GetQueueAttributesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest(const SqsGetQueueAttributesRequest &other)
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest object.
 */
SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest()
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(SqsRequest::GetQueueAttributesAction, this))
{

}

bool SqsGetQueueAttributesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsGetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsGetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsGetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SqsGetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsGetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for SqsGetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueAttributesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsGetQueueAttributesRequest instance.
 */
SqsGetQueueAttributesRequestPrivate::SqsGetQueueAttributesRequestPrivate(
    const SqsRequest::Action action, SqsGetQueueAttributesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueAttributesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsGetQueueAttributesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsGetQueueAttributesRequest instance.
 */
SqsGetQueueAttributesRequestPrivate::SqsGetQueueAttributesRequestPrivate(
    const SqsGetQueueAttributesRequestPrivate &other, SqsGetQueueAttributesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
