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

#include "confirmprivatevirtualinterfacerequest.h"
#include "confirmprivatevirtualinterfacerequest_p.h"
#include "confirmprivatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  ConfirmPrivateVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect ConfirmPrivateVirtualInterface requests.
 *
 * @see    DirectConnectClient::confirmPrivateVirtualInterface
 */

/**
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmPrivateVirtualInterfaceRequest::ConfirmPrivateVirtualInterfaceRequest(const ConfirmPrivateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new ConfirmPrivateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceRequest object.
 */
ConfirmPrivateVirtualInterfaceRequest::ConfirmPrivateVirtualInterfaceRequest()
    : DirectConnectRequest(new ConfirmPrivateVirtualInterfaceRequestPrivate(DirectConnectRequest::ConfirmPrivateVirtualInterfaceAction, this))
{

}

bool ConfirmPrivateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmPrivateVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmPrivateVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * ConfirmPrivateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmPrivateVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmPrivateVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for ConfirmPrivateVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public ConfirmPrivateVirtualInterfaceRequest instance.
 */
ConfirmPrivateVirtualInterfaceRequestPrivate::ConfirmPrivateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmPrivateVirtualInterfaceRequest * const q)
    : ConfirmPrivateVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmPrivateVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmPrivateVirtualInterfaceRequest instance.
 */
ConfirmPrivateVirtualInterfaceRequestPrivate::ConfirmPrivateVirtualInterfaceRequestPrivate(
    const ConfirmPrivateVirtualInterfaceRequestPrivate &other, ConfirmPrivateVirtualInterfaceRequest * const q)
    : ConfirmPrivateVirtualInterfacePrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
