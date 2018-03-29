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

#include "deletefilesharerequest.h"
#include "deletefilesharerequest_p.h"
#include "deletefileshareresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteFileShareRequest
 *
 * @brief  Implements StorageGateway DeleteFileShare requests.
 *
 * @see    StorageGatewayClient::deleteFileShare
 */

/**
 * @brief  Constructs a new DeleteFileShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFileShareRequest::DeleteFileShareRequest(const DeleteFileShareRequest &other)
    : StorageGatewayRequest(new DeleteFileShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFileShareRequest object.
 */
DeleteFileShareRequest::DeleteFileShareRequest()
    : StorageGatewayRequest(new DeleteFileShareRequestPrivate(StorageGatewayRequest::DeleteFileShareAction, this))
{

}

bool DeleteFileShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFileShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFileShareResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFileShareRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFileShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFileShareRequestPrivate
 *
 * @brief  Private implementation for DeleteFileShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileShareRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteFileShareRequest instance.
 */
DeleteFileShareRequestPrivate::DeleteFileShareRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteFileShareRequest * const q)
    : DeleteFileSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFileShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFileShareRequest instance.
 */
DeleteFileShareRequestPrivate::DeleteFileShareRequestPrivate(
    const DeleteFileShareRequestPrivate &other, DeleteFileShareRequest * const q)
    : DeleteFileSharePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
