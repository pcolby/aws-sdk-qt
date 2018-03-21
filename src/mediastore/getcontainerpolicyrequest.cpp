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

#include "getcontainerpolicyrequest.h"
#include "getcontainerpolicyrequest_p.h"
#include "getcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace AWS {
namespace MediaStore {

/**
 * @class  GetContainerPolicyRequest
 *
 * @brief  Implements MediaStore GetContainerPolicy requests.
 *
 * @see    MediaStoreClient::getContainerPolicy
 */

/**
 * @brief  Constructs a new GetContainerPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest(const GetContainerPolicyRequest &other)
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetContainerPolicyRequest object.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest()
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(MediaStoreRequest::GetContainerPolicyAction, this))
{

}

bool GetContainerPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetContainerPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContainerPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
AwsAbstractResponse * GetContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetContainerPolicyRequestPrivate
 *
 * @brief  Private implementation for GetContainerPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContainerPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public GetContainerPolicyRequest instance.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetContainerPolicyRequest * const q)
    : GetContainerPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetContainerPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContainerPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContainerPolicyRequest instance.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const GetContainerPolicyRequestPrivate &other, GetContainerPolicyRequest * const q)
    : GetContainerPolicyPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace AWS
