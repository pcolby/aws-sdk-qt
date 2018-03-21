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

#include "createpublicvirtualinterfacerequest.h"
#include "createpublicvirtualinterfacerequest_p.h"
#include "createpublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreatePublicVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect CreatePublicVirtualInterface requests.
 *
 * @see    DirectConnectClient::createPublicVirtualInterface
 */

/**
 * @brief  Constructs a new CreatePublicVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest(const CreatePublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePublicVirtualInterfaceRequest object.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest()
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(DirectConnectRequest::CreatePublicVirtualInterfaceAction, this))
{

}

bool CreatePublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePublicVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePublicVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreatePublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePublicVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for CreatePublicVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreatePublicVirtualInterfaceRequest instance.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, CreatePublicVirtualInterfaceRequest * const q)
    : CreatePublicVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePublicVirtualInterfaceRequest instance.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const CreatePublicVirtualInterfaceRequestPrivate &other, CreatePublicVirtualInterfaceRequest * const q)
    : CreatePublicVirtualInterfacePrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
