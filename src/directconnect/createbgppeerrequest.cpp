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

#include "createbgppeerrequest.h"
#include "createbgppeerrequest_p.h"
#include "createbgppeerresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  CreateBGPPeerRequest
 *
 * @brief  Implements DirectConnect CreateBGPPeer requests.
 *
 * @see    DirectConnectClient::createBGPPeer
 */

/**
 * @brief  Constructs a new CreateBGPPeerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBGPPeerRequest::CreateBGPPeerRequest(const CreateBGPPeerRequest &other)
    : DirectConnectRequest(new CreateBGPPeerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBGPPeerRequest object.
 */
CreateBGPPeerRequest::CreateBGPPeerRequest()
    : DirectConnectRequest(new CreateBGPPeerRequestPrivate(DirectConnectRequest::CreateBGPPeerAction, this))
{

}

bool CreateBGPPeerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBGPPeerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBGPPeerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateBGPPeerRequest::response(QNetworkReply * const reply) const
{
    return new CreateBGPPeerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBGPPeerRequestPrivate
 *
 * @brief  Private implementation for CreateBGPPeerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBGPPeerRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateBGPPeerRequest instance.
 */
CreateBGPPeerRequestPrivate::CreateBGPPeerRequestPrivate(
    const DirectConnectRequest::Action action, CreateBGPPeerRequest * const q)
    : CreateBGPPeerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBGPPeerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBGPPeerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBGPPeerRequest instance.
 */
CreateBGPPeerRequestPrivate::CreateBGPPeerRequestPrivate(
    const CreateBGPPeerRequestPrivate &other, CreateBGPPeerRequest * const q)
    : CreateBGPPeerPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
