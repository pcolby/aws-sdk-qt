/*
    Copyright 2013-2018 Paul Colby

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

#include "getqueueattributesrequest.h"
#include "getqueueattributesrequest_p.h"
#include "getqueueattributesresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  GetQueueAttributesRequest
 *
 * @brief  Implements SQS GetQueueAttributes requests.
 *
 * @see    SQSClient::getQueueAttributes
 */

/**
 * @brief  Constructs a new GetQueueAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueueAttributesResponse::GetQueueAttributesResponse(

/**
 * @brief  Constructs a new GetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueueAttributesRequest::GetQueueAttributesRequest(const GetQueueAttributesRequest &other)
    : SQSRequest(new GetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueueAttributesRequest object.
 */
GetQueueAttributesRequest::GetQueueAttributesRequest()
    : SQSRequest(new GetQueueAttributesRequestPrivate(SQSRequest::GetQueueAttributesAction, this))
{

}

bool GetQueueAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * GetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for GetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueAttributesRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public GetQueueAttributesRequest instance.
 */
GetQueueAttributesRequestPrivate::GetQueueAttributesRequestPrivate(
    const SQSRequest::Action action, GetQueueAttributesRequest * const q)
    : GetQueueAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueueAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueueAttributesRequest instance.
 */
GetQueueAttributesRequestPrivate::GetQueueAttributesRequestPrivate(
    const GetQueueAttributesRequestPrivate &other, GetQueueAttributesRequest * const q)
    : GetQueueAttributesPrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
