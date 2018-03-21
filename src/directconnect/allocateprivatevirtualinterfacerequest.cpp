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

#include "allocateprivatevirtualinterfacerequest.h"
#include "allocateprivatevirtualinterfacerequest_p.h"
#include "allocateprivatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  AllocatePrivateVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect AllocatePrivateVirtualInterface requests.
 *
 * @see    DirectConnectClient::allocatePrivateVirtualInterface
 */

/**
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocatePrivateVirtualInterfaceResponse::AllocatePrivateVirtualInterfaceResponse(

/**
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocatePrivateVirtualInterfaceRequest::AllocatePrivateVirtualInterfaceRequest(const AllocatePrivateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new AllocatePrivateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceRequest object.
 */
AllocatePrivateVirtualInterfaceRequest::AllocatePrivateVirtualInterfaceRequest()
    : DirectConnectRequest(new AllocatePrivateVirtualInterfaceRequestPrivate(DirectConnectRequest::AllocatePrivateVirtualInterfaceAction, this))
{

}

bool AllocatePrivateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocatePrivateVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocatePrivateVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * AllocatePrivateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AllocatePrivateVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocatePrivateVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for AllocatePrivateVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AllocatePrivateVirtualInterfaceRequest instance.
 */
AllocatePrivateVirtualInterfaceRequestPrivate::AllocatePrivateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, AllocatePrivateVirtualInterfaceRequest * const q)
    : AllocatePrivateVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePrivateVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocatePrivateVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocatePrivateVirtualInterfaceRequest instance.
 */
AllocatePrivateVirtualInterfaceRequestPrivate::AllocatePrivateVirtualInterfaceRequestPrivate(
    const AllocatePrivateVirtualInterfaceRequestPrivate &other, AllocatePrivateVirtualInterfaceRequest * const q)
    : AllocatePrivateVirtualInterfacePrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
