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

#include "deleteobjectrequest.h"
#include "deleteobjectrequest_p.h"
#include "deleteobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DeleteObjectRequest
 *
 * @brief  Implements CloudDirectory DeleteObject requests.
 *
 * @see    CloudDirectoryClient::deleteObject
 */

/**
 * @brief  Constructs a new DeleteObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteObjectRequest::DeleteObjectRequest(const DeleteObjectRequest &other)
    : CloudDirectoryRequest(new DeleteObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteObjectRequest object.
 */
DeleteObjectRequest::DeleteObjectRequest()
    : CloudDirectoryRequest(new DeleteObjectRequestPrivate(CloudDirectoryRequest::DeleteObjectAction, this))
{

}

bool DeleteObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DeleteObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteObjectRequestPrivate
 *
 * @brief  Private implementation for DeleteObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DeleteObjectRequest instance.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteObjectRequest * const q)
    : DeleteObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteObjectRequest instance.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const DeleteObjectRequestPrivate &other, DeleteObjectRequest * const q)
    : DeleteObjectPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
