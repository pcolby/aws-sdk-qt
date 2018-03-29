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

#include "deletecontainerpolicyrequest.h"
#include "deletecontainerpolicyrequest_p.h"
#include "deletecontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/**
 * @class  DeleteContainerPolicyRequest
 *
 * @brief  Implements MediaStore DeleteContainerPolicy requests.
 *
 * @see    MediaStoreClient::deleteContainerPolicy
 */

/**
 * @brief  Constructs a new DeleteContainerPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteContainerPolicyRequest::DeleteContainerPolicyRequest(const DeleteContainerPolicyRequest &other)
    : MediaStoreRequest(new DeleteContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteContainerPolicyRequest object.
 */
DeleteContainerPolicyRequest::DeleteContainerPolicyRequest()
    : MediaStoreRequest(new DeleteContainerPolicyRequestPrivate(MediaStoreRequest::DeleteContainerPolicyAction, this))
{

}

bool DeleteContainerPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteContainerPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteContainerPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContainerPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteContainerPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteContainerPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public DeleteContainerPolicyRequest instance.
 */
DeleteContainerPolicyRequestPrivate::DeleteContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteContainerPolicyRequest * const q)
    : DeleteContainerPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteContainerPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteContainerPolicyRequest instance.
 */
DeleteContainerPolicyRequestPrivate::DeleteContainerPolicyRequestPrivate(
    const DeleteContainerPolicyRequestPrivate &other, DeleteContainerPolicyRequest * const q)
    : DeleteContainerPolicyPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
