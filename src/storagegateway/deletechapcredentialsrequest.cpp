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

#include "deletechapcredentialsrequest.h"
#include "deletechapcredentialsrequest_p.h"
#include "deletechapcredentialsresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteChapCredentialsRequest
 *
 * @brief  Implements StorageGateway DeleteChapCredentials requests.
 *
 * @see    StorageGatewayClient::deleteChapCredentials
 */

/**
 * @brief  Constructs a new DeleteChapCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteChapCredentialsResponse::DeleteChapCredentialsResponse(

/**
 * @brief  Constructs a new DeleteChapCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteChapCredentialsRequest::DeleteChapCredentialsRequest(const DeleteChapCredentialsRequest &other)
    : StorageGatewayRequest(new DeleteChapCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteChapCredentialsRequest object.
 */
DeleteChapCredentialsRequest::DeleteChapCredentialsRequest()
    : StorageGatewayRequest(new DeleteChapCredentialsRequestPrivate(StorageGatewayRequest::DeleteChapCredentialsAction, this))
{

}

bool DeleteChapCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteChapCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteChapCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteChapCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChapCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteChapCredentialsRequestPrivate
 *
 * @brief  Private implementation for DeleteChapCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChapCredentialsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteChapCredentialsRequest instance.
 */
DeleteChapCredentialsRequestPrivate::DeleteChapCredentialsRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteChapCredentialsRequest * const q)
    : DeleteChapCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChapCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteChapCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteChapCredentialsRequest instance.
 */
DeleteChapCredentialsRequestPrivate::DeleteChapCredentialsRequestPrivate(
    const DeleteChapCredentialsRequestPrivate &other, DeleteChapCredentialsRequest * const q)
    : DeleteChapCredentialsPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
