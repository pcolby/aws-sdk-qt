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

#include "confirmpublicvirtualinterfacerequest.h"
#include "confirmpublicvirtualinterfacerequest_p.h"
#include "confirmpublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  ConfirmPublicVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect ConfirmPublicVirtualInterface requests.
 *
 * @see    DirectConnectClient::confirmPublicVirtualInterface
 */

/**
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmPublicVirtualInterfaceResponse::ConfirmPublicVirtualInterfaceResponse(

/**
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmPublicVirtualInterfaceRequest::ConfirmPublicVirtualInterfaceRequest(const ConfirmPublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new ConfirmPublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceRequest object.
 */
ConfirmPublicVirtualInterfaceRequest::ConfirmPublicVirtualInterfaceRequest()
    : DirectConnectRequest(new ConfirmPublicVirtualInterfaceRequestPrivate(DirectConnectRequest::ConfirmPublicVirtualInterfaceAction, this))
{

}

bool ConfirmPublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmPublicVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmPublicVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * ConfirmPublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmPublicVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmPublicVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for ConfirmPublicVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public ConfirmPublicVirtualInterfaceRequest instance.
 */
ConfirmPublicVirtualInterfaceRequestPrivate::ConfirmPublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmPublicVirtualInterfaceRequest * const q)
    : ConfirmPublicVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPublicVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmPublicVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmPublicVirtualInterfaceRequest instance.
 */
ConfirmPublicVirtualInterfaceRequestPrivate::ConfirmPublicVirtualInterfaceRequestPrivate(
    const ConfirmPublicVirtualInterfaceRequestPrivate &other, ConfirmPublicVirtualInterfaceRequest * const q)
    : ConfirmPublicVirtualInterfacePrivate(other, q)
{

}
