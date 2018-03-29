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

#include "createfilesystemrequest.h"
#include "createfilesystemrequest_p.h"
#include "createfilesystemresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/**
 * @class  CreateFileSystemRequest
 *
 * @brief  Implements EFS CreateFileSystem requests.
 *
 * @see    EFSClient::createFileSystem
 */

/**
 * @brief  Constructs a new CreateFileSystemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFileSystemRequest::CreateFileSystemRequest(const CreateFileSystemRequest &other)
    : EFSRequest(new CreateFileSystemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFileSystemRequest object.
 */
CreateFileSystemRequest::CreateFileSystemRequest()
    : EFSRequest(new CreateFileSystemRequestPrivate(EFSRequest::CreateFileSystemAction, this))
{

}

bool CreateFileSystemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFileSystemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFileSystemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EFSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new CreateFileSystemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFileSystemRequestPrivate
 *
 * @brief  Private implementation for CreateFileSystemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFileSystemRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public CreateFileSystemRequest instance.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const EFSRequest::Action action, CreateFileSystemRequest * const q)
    : CreateFileSystemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFileSystemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFileSystemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFileSystemRequest instance.
 */
CreateFileSystemRequestPrivate::CreateFileSystemRequestPrivate(
    const CreateFileSystemRequestPrivate &other, CreateFileSystemRequest * const q)
    : CreateFileSystemPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
