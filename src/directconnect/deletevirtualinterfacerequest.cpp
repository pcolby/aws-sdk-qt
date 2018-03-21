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

#include "deletevirtualinterfacerequest.h"
#include "deletevirtualinterfacerequest_p.h"
#include "deletevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DeleteVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect DeleteVirtualInterface requests.
 *
 * @see    DirectConnectClient::deleteVirtualInterface
 */

/**
 * @brief  Constructs a new DeleteVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVirtualInterfaceResponse::DeleteVirtualInterfaceResponse(

/**
 * @brief  Constructs a new DeleteVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVirtualInterfaceRequest::DeleteVirtualInterfaceRequest(const DeleteVirtualInterfaceRequest &other)
    : DirectConnectRequest(new DeleteVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVirtualInterfaceRequest object.
 */
DeleteVirtualInterfaceRequest::DeleteVirtualInterfaceRequest()
    : DirectConnectRequest(new DeleteVirtualInterfaceRequestPrivate(DirectConnectRequest::DeleteVirtualInterfaceAction, this))
{

}

bool DeleteVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DeleteVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for DeleteVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteVirtualInterfaceRequest instance.
 */
DeleteVirtualInterfaceRequestPrivate::DeleteVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, DeleteVirtualInterfaceRequest * const q)
    : DeleteVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVirtualInterfaceRequest instance.
 */
DeleteVirtualInterfaceRequestPrivate::DeleteVirtualInterfaceRequestPrivate(
    const DeleteVirtualInterfaceRequestPrivate &other, DeleteVirtualInterfaceRequest * const q)
    : DeleteVirtualInterfacePrivate(other, q)
{

}
