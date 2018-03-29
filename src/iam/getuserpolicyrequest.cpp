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

#include "getuserpolicyrequest.h"
#include "getuserpolicyrequest_p.h"
#include "getuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetUserPolicyRequest
 *
 * @brief  Implements IAM GetUserPolicy requests.
 *
 * @see    IAMClient::getUserPolicy
 */

/**
 * @brief  Constructs a new GetUserPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserPolicyRequest::GetUserPolicyRequest(const GetUserPolicyRequest &other)
    : IAMRequest(new GetUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserPolicyRequest object.
 */
GetUserPolicyRequest::GetUserPolicyRequest()
    : IAMRequest(new GetUserPolicyRequestPrivate(IAMRequest::GetUserPolicyAction, this))
{

}

bool GetUserPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetUserPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserPolicyRequestPrivate
 *
 * @brief  Private implementation for GetUserPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetUserPolicyRequest instance.
 */
GetUserPolicyRequestPrivate::GetUserPolicyRequestPrivate(
    const IAMRequest::Action action, GetUserPolicyRequest * const q)
    : GetUserPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserPolicyRequest instance.
 */
GetUserPolicyRequestPrivate::GetUserPolicyRequestPrivate(
    const GetUserPolicyRequestPrivate &other, GetUserPolicyRequest * const q)
    : GetUserPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
