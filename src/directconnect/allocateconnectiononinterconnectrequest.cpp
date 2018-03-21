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

#include "allocateconnectiononinterconnectrequest.h"
#include "allocateconnectiononinterconnectrequest_p.h"
#include "allocateconnectiononinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  AllocateConnectionOnInterconnectRequest
 *
 * @brief  Implements DirectConnect AllocateConnectionOnInterconnect requests.
 *
 * @see    DirectConnectClient::allocateConnectionOnInterconnect
 */

/**
 * @brief  Constructs a new AllocateConnectionOnInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateConnectionOnInterconnectResponse::AllocateConnectionOnInterconnectResponse(

/**
 * @brief  Constructs a new AllocateConnectionOnInterconnectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocateConnectionOnInterconnectRequest::AllocateConnectionOnInterconnectRequest(const AllocateConnectionOnInterconnectRequest &other)
    : DirectConnectRequest(new AllocateConnectionOnInterconnectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocateConnectionOnInterconnectRequest object.
 */
AllocateConnectionOnInterconnectRequest::AllocateConnectionOnInterconnectRequest()
    : DirectConnectRequest(new AllocateConnectionOnInterconnectRequestPrivate(DirectConnectRequest::AllocateConnectionOnInterconnectAction, this))
{

}

bool AllocateConnectionOnInterconnectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocateConnectionOnInterconnectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocateConnectionOnInterconnectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * AllocateConnectionOnInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new AllocateConnectionOnInterconnectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocateConnectionOnInterconnectRequestPrivate
 *
 * @brief  Private implementation for AllocateConnectionOnInterconnectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateConnectionOnInterconnectRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AllocateConnectionOnInterconnectRequest instance.
 */
AllocateConnectionOnInterconnectRequestPrivate::AllocateConnectionOnInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, AllocateConnectionOnInterconnectRequest * const q)
    : AllocateConnectionOnInterconnectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocateConnectionOnInterconnectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocateConnectionOnInterconnectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocateConnectionOnInterconnectRequest instance.
 */
AllocateConnectionOnInterconnectRequestPrivate::AllocateConnectionOnInterconnectRequestPrivate(
    const AllocateConnectionOnInterconnectRequestPrivate &other, AllocateConnectionOnInterconnectRequest * const q)
    : AllocateConnectionOnInterconnectPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
