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

#include "associatevirtualinterfacerequest.h"
#include "associatevirtualinterfacerequest_p.h"
#include "associatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AssociateVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect AssociateVirtualInterface requests.
 *
 * @see    DirectConnectClient::associateVirtualInterface
 */

/**
 * @brief  Constructs a new AssociateVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateVirtualInterfaceRequest::AssociateVirtualInterfaceRequest(const AssociateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new AssociateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateVirtualInterfaceRequest object.
 */
AssociateVirtualInterfaceRequest::AssociateVirtualInterfaceRequest()
    : DirectConnectRequest(new AssociateVirtualInterfaceRequestPrivate(DirectConnectRequest::AssociateVirtualInterfaceAction, this))
{

}

bool AssociateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateVirtualInterfaceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for AssociateVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AssociateVirtualInterfaceRequest instance.
 */
AssociateVirtualInterfaceRequestPrivate::AssociateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, AssociateVirtualInterfaceRequest * const q)
    : AssociateVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateVirtualInterfaceRequest instance.
 */
AssociateVirtualInterfaceRequestPrivate::AssociateVirtualInterfaceRequestPrivate(
    const AssociateVirtualInterfaceRequestPrivate &other, AssociateVirtualInterfaceRequest * const q)
    : AssociateVirtualInterfacePrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
