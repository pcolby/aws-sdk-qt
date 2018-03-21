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

#include "deletecorspolicyrequest.h"
#include "deletecorspolicyrequest_p.h"
#include "deletecorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace AWS {
namespace MediaStore {

/**
 * @class  DeleteCorsPolicyRequest
 *
 * @brief  Implements MediaStore DeleteCorsPolicy requests.
 *
 * @see    MediaStoreClient::deleteCorsPolicy
 */

/**
 * @brief  Constructs a new DeleteCorsPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest(const DeleteCorsPolicyRequest &other)
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCorsPolicyRequest object.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest()
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(MediaStoreRequest::DeleteCorsPolicyAction, this))
{

}

bool DeleteCorsPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCorsPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCorsPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
AwsAbstractResponse * DeleteCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCorsPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCorsPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteCorsPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCorsPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public DeleteCorsPolicyRequest instance.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteCorsPolicyRequest * const q)
    : DeleteCorsPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCorsPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCorsPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCorsPolicyRequest instance.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const DeleteCorsPolicyRequestPrivate &other, DeleteCorsPolicyRequest * const q)
    : DeleteCorsPolicyPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace AWS
