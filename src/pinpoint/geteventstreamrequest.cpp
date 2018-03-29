/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "geteventstreamrequest.h"
#include "geteventstreamrequest_p.h"
#include "geteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetEventStreamRequest
 *
 * @brief  Implements Pinpoint GetEventStream requests.
 *
 * @see    PinpointClient::getEventStream
 */

/**
 * @brief  Constructs a new GetEventStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEventStreamRequest::GetEventStreamRequest(const GetEventStreamRequest &other)
    : PinpointRequest(new GetEventStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEventStreamRequest object.
 */
GetEventStreamRequest::GetEventStreamRequest()
    : PinpointRequest(new GetEventStreamRequestPrivate(PinpointRequest::GetEventStreamAction, this))
{

}

bool GetEventStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEventStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEventStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetEventStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEventStreamRequestPrivate
 *
 * @brief  Private implementation for GetEventStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventStreamRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetEventStreamRequest instance.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const PinpointRequest::Action action, GetEventStreamRequest * const q)
    : GetEventStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEventStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEventStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEventStreamRequest instance.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const GetEventStreamRequestPrivate &other, GetEventStreamRequest * const q)
    : GetEventStreamPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
