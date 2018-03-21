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

#include "getgrouppolicyrequest.h"
#include "getgrouppolicyrequest_p.h"
#include "getgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetGroupPolicyRequest
 *
 * @brief  Implements IAM GetGroupPolicy requests.
 *
 * @see    IAMClient::getGroupPolicy
 */

/**
 * @brief  Constructs a new GetGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupPolicyResponse::GetGroupPolicyResponse(

/**
 * @brief  Constructs a new GetGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupPolicyRequest::GetGroupPolicyRequest(const GetGroupPolicyRequest &other)
    : IAMRequest(new GetGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupPolicyRequest object.
 */
GetGroupPolicyRequest::GetGroupPolicyRequest()
    : IAMRequest(new GetGroupPolicyRequestPrivate(IAMRequest::GetGroupPolicyAction, this))
{

}

bool GetGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for GetGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetGroupPolicyRequest instance.
 */
GetGroupPolicyRequestPrivate::GetGroupPolicyRequestPrivate(
    const IAMRequest::Action action, GetGroupPolicyRequest * const q)
    : GetGroupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupPolicyRequest instance.
 */
GetGroupPolicyRequestPrivate::GetGroupPolicyRequestPrivate(
    const GetGroupPolicyRequestPrivate &other, GetGroupPolicyRequest * const q)
    : GetGroupPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
