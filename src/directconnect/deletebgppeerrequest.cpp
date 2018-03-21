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

#include "deletebgppeerrequest.h"
#include "deletebgppeerrequest_p.h"
#include "deletebgppeerresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DeleteBGPPeerRequest
 *
 * @brief  Implements DirectConnect DeleteBGPPeer requests.
 *
 * @see    DirectConnectClient::deleteBGPPeer
 */

/**
 * @brief  Constructs a new DeleteBGPPeerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBGPPeerRequest::DeleteBGPPeerRequest(const DeleteBGPPeerRequest &other)
    : DirectConnectRequest(new DeleteBGPPeerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBGPPeerRequest object.
 */
DeleteBGPPeerRequest::DeleteBGPPeerRequest()
    : DirectConnectRequest(new DeleteBGPPeerRequestPrivate(DirectConnectRequest::DeleteBGPPeerAction, this))
{

}

bool DeleteBGPPeerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBGPPeerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBGPPeerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DeleteBGPPeerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBGPPeerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBGPPeerRequestPrivate
 *
 * @brief  Private implementation for DeleteBGPPeerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBGPPeerRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteBGPPeerRequest instance.
 */
DeleteBGPPeerRequestPrivate::DeleteBGPPeerRequestPrivate(
    const DirectConnectRequest::Action action, DeleteBGPPeerRequest * const q)
    : DeleteBGPPeerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBGPPeerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBGPPeerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBGPPeerRequest instance.
 */
DeleteBGPPeerRequestPrivate::DeleteBGPPeerRequestPrivate(
    const DeleteBGPPeerRequestPrivate &other, DeleteBGPPeerRequest * const q)
    : DeleteBGPPeerPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
