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

#include "deletefilesystemrequest.h"
#include "deletefilesystemrequest_p.h"
#include "deletefilesystemresponse.h"
#include "efsrequest_p.h"

namespace AWS {
namespace EFS {

/**
 * @class  DeleteFileSystemRequest
 *
 * @brief  Implements EFS DeleteFileSystem requests.
 *
 * @see    EFSClient::deleteFileSystem
 */

/**
 * @brief  Constructs a new DeleteFileSystemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest(const DeleteFileSystemRequest &other)
    : EFSRequest(new DeleteFileSystemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFileSystemRequest object.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest()
    : EFSRequest(new DeleteFileSystemRequestPrivate(EFSRequest::DeleteFileSystemAction, this))
{

}

bool DeleteFileSystemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFileSystemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFileSystemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EFSClient::send
 */
AwsAbstractResponse * DeleteFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFileSystemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFileSystemRequestPrivate
 *
 * @brief  Private implementation for DeleteFileSystemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileSystemRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public DeleteFileSystemRequest instance.
 */
DeleteFileSystemRequestPrivate::DeleteFileSystemRequestPrivate(
    const EFSRequest::Action action, DeleteFileSystemRequest * const q)
    : DeleteFileSystemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileSystemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFileSystemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFileSystemRequest instance.
 */
DeleteFileSystemRequestPrivate::DeleteFileSystemRequestPrivate(
    const DeleteFileSystemRequestPrivate &other, DeleteFileSystemRequest * const q)
    : DeleteFileSystemPrivate(other, q)
{

}

} // namespace EFS
} // namespace AWS
