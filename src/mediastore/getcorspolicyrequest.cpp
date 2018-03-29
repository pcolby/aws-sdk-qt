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

#include "getcorspolicyrequest.h"
#include "getcorspolicyrequest_p.h"
#include "getcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/**
 * @class  GetCorsPolicyRequest
 *
 * @brief  Implements MediaStore GetCorsPolicy requests.
 *
 * @see    MediaStoreClient::getCorsPolicy
 */

/**
 * @brief  Constructs a new GetCorsPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest(const GetCorsPolicyRequest &other)
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCorsPolicyRequest object.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest()
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(MediaStoreRequest::GetCorsPolicyAction, this))
{

}

bool GetCorsPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCorsPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCorsPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
AwsAbstractResponse * GetCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetCorsPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCorsPolicyRequestPrivate
 *
 * @brief  Private implementation for GetCorsPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCorsPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public GetCorsPolicyRequest instance.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetCorsPolicyRequest * const q)
    : GetCorsPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCorsPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCorsPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCorsPolicyRequest instance.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const GetCorsPolicyRequestPrivate &other, GetCorsPolicyRequest * const q)
    : GetCorsPolicyPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
