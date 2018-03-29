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

#include "setstackpolicyrequest.h"
#include "setstackpolicyrequest_p.h"
#include "setstackpolicyresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  SetStackPolicyRequest
 *
 * @brief  Implements CloudFormation SetStackPolicy requests.
 *
 * @see    CloudFormationClient::setStackPolicy
 */

/**
 * @brief  Constructs a new SetStackPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetStackPolicyRequest::SetStackPolicyRequest(const SetStackPolicyRequest &other)
    : CloudFormationRequest(new SetStackPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetStackPolicyRequest object.
 */
SetStackPolicyRequest::SetStackPolicyRequest()
    : CloudFormationRequest(new SetStackPolicyRequestPrivate(CloudFormationRequest::SetStackPolicyAction, this))
{

}

bool SetStackPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetStackPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetStackPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * SetStackPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SetStackPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetStackPolicyRequestPrivate
 *
 * @brief  Private implementation for SetStackPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetStackPolicyRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public SetStackPolicyRequest instance.
 */
SetStackPolicyRequestPrivate::SetStackPolicyRequestPrivate(
    const CloudFormationRequest::Action action, SetStackPolicyRequest * const q)
    : SetStackPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetStackPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetStackPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetStackPolicyRequest instance.
 */
SetStackPolicyRequestPrivate::SetStackPolicyRequestPrivate(
    const SetStackPolicyRequestPrivate &other, SetStackPolicyRequest * const q)
    : SetStackPolicyPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
