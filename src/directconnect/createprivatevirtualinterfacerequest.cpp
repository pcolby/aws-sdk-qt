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

#include "createprivatevirtualinterfacerequest.h"
#include "createprivatevirtualinterfacerequest_p.h"
#include "createprivatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreatePrivateVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect CreatePrivateVirtualInterface requests.
 *
 * @see    DirectConnectClient::createPrivateVirtualInterface
 */

/**
 * @brief  Constructs a new CreatePrivateVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePrivateVirtualInterfaceResponse::CreatePrivateVirtualInterfaceResponse(

/**
 * @brief  Constructs a new CreatePrivateVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePrivateVirtualInterfaceRequest::CreatePrivateVirtualInterfaceRequest(const CreatePrivateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new CreatePrivateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePrivateVirtualInterfaceRequest object.
 */
CreatePrivateVirtualInterfaceRequest::CreatePrivateVirtualInterfaceRequest()
    : DirectConnectRequest(new CreatePrivateVirtualInterfaceRequestPrivate(DirectConnectRequest::CreatePrivateVirtualInterfaceAction, this))
{

}

bool CreatePrivateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePrivateVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePrivateVirtualInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreatePrivateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePrivateVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePrivateVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for CreatePrivateVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePrivateVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreatePrivateVirtualInterfaceRequest instance.
 */
CreatePrivateVirtualInterfaceRequestPrivate::CreatePrivateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, CreatePrivateVirtualInterfaceRequest * const q)
    : CreatePrivateVirtualInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePrivateVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePrivateVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePrivateVirtualInterfaceRequest instance.
 */
CreatePrivateVirtualInterfaceRequestPrivate::CreatePrivateVirtualInterfaceRequestPrivate(
    const CreatePrivateVirtualInterfaceRequestPrivate &other, CreatePrivateVirtualInterfaceRequest * const q)
    : CreatePrivateVirtualInterfacePrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
