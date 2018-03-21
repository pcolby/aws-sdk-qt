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

#include "updatenfsfilesharerequest.h"
#include "updatenfsfilesharerequest_p.h"
#include "updatenfsfileshareresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateNFSFileShareRequest
 *
 * @brief  Implements StorageGateway UpdateNFSFileShare requests.
 *
 * @see    StorageGatewayClient::updateNFSFileShare
 */

/**
 * @brief  Constructs a new UpdateNFSFileShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNFSFileShareRequest::UpdateNFSFileShareRequest(const UpdateNFSFileShareRequest &other)
    : StorageGatewayRequest(new UpdateNFSFileShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNFSFileShareRequest object.
 */
UpdateNFSFileShareRequest::UpdateNFSFileShareRequest()
    : StorageGatewayRequest(new UpdateNFSFileShareRequestPrivate(StorageGatewayRequest::UpdateNFSFileShareAction, this))
{

}

bool UpdateNFSFileShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNFSFileShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNFSFileShareResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateNFSFileShareRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNFSFileShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNFSFileShareRequestPrivate
 *
 * @brief  Private implementation for UpdateNFSFileShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNFSFileShareRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateNFSFileShareRequest instance.
 */
UpdateNFSFileShareRequestPrivate::UpdateNFSFileShareRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateNFSFileShareRequest * const q)
    : UpdateNFSFileSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNFSFileShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNFSFileShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNFSFileShareRequest instance.
 */
UpdateNFSFileShareRequestPrivate::UpdateNFSFileShareRequestPrivate(
    const UpdateNFSFileShareRequestPrivate &other, UpdateNFSFileShareRequest * const q)
    : UpdateNFSFileSharePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
