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

#include "updatechapcredentialsrequest.h"
#include "updatechapcredentialsrequest_p.h"
#include "updatechapcredentialsresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateChapCredentialsRequest
 *
 * @brief  Implements StorageGateway UpdateChapCredentials requests.
 *
 * @see    StorageGatewayClient::updateChapCredentials
 */

/**
 * @brief  Constructs a new UpdateChapCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateChapCredentialsRequest::UpdateChapCredentialsRequest(const UpdateChapCredentialsRequest &other)
    : StorageGatewayRequest(new UpdateChapCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateChapCredentialsRequest object.
 */
UpdateChapCredentialsRequest::UpdateChapCredentialsRequest()
    : StorageGatewayRequest(new UpdateChapCredentialsRequestPrivate(StorageGatewayRequest::UpdateChapCredentialsAction, this))
{

}

bool UpdateChapCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateChapCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateChapCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateChapCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChapCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateChapCredentialsRequestPrivate
 *
 * @brief  Private implementation for UpdateChapCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChapCredentialsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateChapCredentialsRequest instance.
 */
UpdateChapCredentialsRequestPrivate::UpdateChapCredentialsRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateChapCredentialsRequest * const q)
    : UpdateChapCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChapCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateChapCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateChapCredentialsRequest instance.
 */
UpdateChapCredentialsRequestPrivate::UpdateChapCredentialsRequestPrivate(
    const UpdateChapCredentialsRequestPrivate &other, UpdateChapCredentialsRequest * const q)
    : UpdateChapCredentialsPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
