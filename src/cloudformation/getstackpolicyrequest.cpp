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

#include "getstackpolicyrequest.h"
#include "getstackpolicyrequest_p.h"
#include "getstackpolicyresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  GetStackPolicyRequest
 *
 * @brief  Implements CloudFormation GetStackPolicy requests.
 *
 * @see    CloudFormationClient::getStackPolicy
 */

/**
 * @brief  Constructs a new GetStackPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStackPolicyResponse::GetStackPolicyResponse(

/**
 * @brief  Constructs a new GetStackPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStackPolicyRequest::GetStackPolicyRequest(const GetStackPolicyRequest &other)
    : CloudFormationRequest(new GetStackPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStackPolicyRequest object.
 */
GetStackPolicyRequest::GetStackPolicyRequest()
    : CloudFormationRequest(new GetStackPolicyRequestPrivate(CloudFormationRequest::GetStackPolicyAction, this))
{

}

bool GetStackPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStackPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStackPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * GetStackPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetStackPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStackPolicyRequestPrivate
 *
 * @brief  Private implementation for GetStackPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStackPolicyRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public GetStackPolicyRequest instance.
 */
GetStackPolicyRequestPrivate::GetStackPolicyRequestPrivate(
    const CloudFormationRequest::Action action, GetStackPolicyRequest * const q)
    : GetStackPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStackPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStackPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStackPolicyRequest instance.
 */
GetStackPolicyRequestPrivate::GetStackPolicyRequestPrivate(
    const GetStackPolicyRequestPrivate &other, GetStackPolicyRequest * const q)
    : GetStackPolicyPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
