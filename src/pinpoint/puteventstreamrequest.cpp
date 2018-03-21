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

#include "puteventstreamrequest.h"
#include "puteventstreamrequest_p.h"
#include "puteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  PutEventStreamRequest
 *
 * @brief  Implements Pinpoint PutEventStream requests.
 *
 * @see    PinpointClient::putEventStream
 */

/**
 * @brief  Constructs a new PutEventStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventStreamResponse::PutEventStreamResponse(

/**
 * @brief  Constructs a new PutEventStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutEventStreamRequest::PutEventStreamRequest(const PutEventStreamRequest &other)
    : PinpointRequest(new PutEventStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutEventStreamRequest object.
 */
PutEventStreamRequest::PutEventStreamRequest()
    : PinpointRequest(new PutEventStreamRequestPrivate(PinpointRequest::PutEventStreamAction, this))
{

}

bool PutEventStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutEventStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutEventStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * PutEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new PutEventStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutEventStreamRequestPrivate
 *
 * @brief  Private implementation for PutEventStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventStreamRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public PutEventStreamRequest instance.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PinpointRequest::Action action, PutEventStreamRequest * const q)
    : PutEventStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutEventStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutEventStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutEventStreamRequest instance.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PutEventStreamRequestPrivate &other, PutEventStreamRequest * const q)
    : PutEventStreamPrivate(other, q)
{

}
