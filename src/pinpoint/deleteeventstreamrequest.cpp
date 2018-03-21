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

#include "deleteeventstreamrequest.h"
#include "deleteeventstreamrequest_p.h"
#include "deleteeventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteEventStreamRequest
 *
 * @brief  Implements Pinpoint DeleteEventStream requests.
 *
 * @see    PinpointClient::deleteEventStream
 */

/**
 * @brief  Constructs a new DeleteEventStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEventStreamResponse::DeleteEventStreamResponse(

/**
 * @brief  Constructs a new DeleteEventStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest(const DeleteEventStreamRequest &other)
    : PinpointRequest(new DeleteEventStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEventStreamRequest object.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest()
    : PinpointRequest(new DeleteEventStreamRequestPrivate(PinpointRequest::DeleteEventStreamAction, this))
{

}

bool DeleteEventStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEventStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEventStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEventStreamRequestPrivate
 *
 * @brief  Private implementation for DeleteEventStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventStreamRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteEventStreamRequest instance.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const PinpointRequest::Action action, DeleteEventStreamRequest * const q)
    : DeleteEventStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEventStreamRequest instance.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const DeleteEventStreamRequestPrivate &other, DeleteEventStreamRequest * const q)
    : DeleteEventStreamPrivate(other, q)
{

}
