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

#include "setqueueattributesrequest.h"
#include "setqueueattributesrequest_p.h"
#include "setqueueattributesresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  SetQueueAttributesRequest
 *
 * @brief  Implements SQS SetQueueAttributes requests.
 *
 * @see    SQSClient::setQueueAttributes
 */

/**
 * @brief  Constructs a new SetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetQueueAttributesRequest::SetQueueAttributesRequest(const SetQueueAttributesRequest &other)
    : SQSRequest(new SetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetQueueAttributesRequest object.
 */
SetQueueAttributesRequest::SetQueueAttributesRequest()
    : SQSRequest(new SetQueueAttributesRequestPrivate(SQSRequest::SetQueueAttributesAction, this))
{

}

bool SetQueueAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * SetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for SetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetQueueAttributesRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SetQueueAttributesRequest instance.
 */
SetQueueAttributesRequestPrivate::SetQueueAttributesRequestPrivate(
    const SQSRequest::Action action, SetQueueAttributesRequest * const q)
    : SetQueueAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetQueueAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetQueueAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetQueueAttributesRequest instance.
 */
SetQueueAttributesRequestPrivate::SetQueueAttributesRequestPrivate(
    const SetQueueAttributesRequestPrivate &other, SetQueueAttributesRequest * const q)
    : SetQueueAttributesPrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
