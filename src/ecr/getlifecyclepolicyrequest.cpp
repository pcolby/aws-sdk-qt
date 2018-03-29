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

#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyrequest_p.h"
#include "getlifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  GetLifecyclePolicyRequest
 *
 * @brief  Implements ECR GetLifecyclePolicy requests.
 *
 * @see    ECRClient::getLifecyclePolicy
 */

/**
 * @brief  Constructs a new GetLifecyclePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest(const GetLifecyclePolicyRequest &other)
    : ECRRequest(new GetLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLifecyclePolicyRequest object.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest()
    : ECRRequest(new GetLifecyclePolicyRequestPrivate(ECRRequest::GetLifecyclePolicyAction, this))
{

}

bool GetLifecyclePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLifecyclePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLifecyclePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * GetLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLifecyclePolicyRequestPrivate
 *
 * @brief  Private implementation for GetLifecyclePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public GetLifecyclePolicyRequest instance.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const ECRRequest::Action action, GetLifecyclePolicyRequest * const q)
    : GetLifecyclePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLifecyclePolicyRequest instance.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const GetLifecyclePolicyRequestPrivate &other, GetLifecyclePolicyRequest * const q)
    : GetLifecyclePolicyPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
