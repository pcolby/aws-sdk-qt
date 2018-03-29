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

#include "deletecontainerrequest.h"
#include "deletecontainerrequest_p.h"
#include "deletecontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/**
 * @class  DeleteContainerRequest
 *
 * @brief  Implements MediaStore DeleteContainer requests.
 *
 * @see    MediaStoreClient::deleteContainer
 */

/**
 * @brief  Constructs a new DeleteContainerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteContainerRequest::DeleteContainerRequest(const DeleteContainerRequest &other)
    : MediaStoreRequest(new DeleteContainerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteContainerRequest object.
 */
DeleteContainerRequest::DeleteContainerRequest()
    : MediaStoreRequest(new DeleteContainerRequestPrivate(MediaStoreRequest::DeleteContainerAction, this))
{

}

bool DeleteContainerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteContainerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteContainerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContainerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContainerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteContainerRequestPrivate
 *
 * @brief  Private implementation for DeleteContainerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public DeleteContainerRequest instance.
 */
DeleteContainerRequestPrivate::DeleteContainerRequestPrivate(
    const MediaStoreRequest::Action action, DeleteContainerRequest * const q)
    : DeleteContainerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteContainerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteContainerRequest instance.
 */
DeleteContainerRequestPrivate::DeleteContainerRequestPrivate(
    const DeleteContainerRequestPrivate &other, DeleteContainerRequest * const q)
    : DeleteContainerPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
