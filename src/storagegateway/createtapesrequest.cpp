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

#include "createtapesrequest.h"
#include "createtapesrequest_p.h"
#include "createtapesresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateTapesRequest
 *
 * @brief  Implements StorageGateway CreateTapes requests.
 *
 * @see    StorageGatewayClient::createTapes
 */

/**
 * @brief  Constructs a new CreateTapesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTapesRequest::CreateTapesRequest(const CreateTapesRequest &other)
    : StorageGatewayRequest(new CreateTapesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTapesRequest object.
 */
CreateTapesRequest::CreateTapesRequest()
    : StorageGatewayRequest(new CreateTapesRequestPrivate(StorageGatewayRequest::CreateTapesAction, this))
{

}

bool CreateTapesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTapesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTapesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTapesRequest::response(QNetworkReply * const reply) const
{
    return new CreateTapesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTapesRequestPrivate
 *
 * @brief  Private implementation for CreateTapesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateTapesRequest instance.
 */
CreateTapesRequestPrivate::CreateTapesRequestPrivate(
    const StorageGatewayRequest::Action action, CreateTapesRequest * const q)
    : CreateTapesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTapesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTapesRequest instance.
 */
CreateTapesRequestPrivate::CreateTapesRequestPrivate(
    const CreateTapesRequestPrivate &other, CreateTapesRequest * const q)
    : CreateTapesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
