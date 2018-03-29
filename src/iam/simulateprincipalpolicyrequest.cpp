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

#include "simulateprincipalpolicyrequest.h"
#include "simulateprincipalpolicyrequest_p.h"
#include "simulateprincipalpolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  SimulatePrincipalPolicyRequest
 *
 * @brief  Implements IAM SimulatePrincipalPolicy requests.
 *
 * @see    IAMClient::simulatePrincipalPolicy
 */

/**
 * @brief  Constructs a new SimulatePrincipalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SimulatePrincipalPolicyRequest::SimulatePrincipalPolicyRequest(const SimulatePrincipalPolicyRequest &other)
    : IAMRequest(new SimulatePrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SimulatePrincipalPolicyRequest object.
 */
SimulatePrincipalPolicyRequest::SimulatePrincipalPolicyRequest()
    : IAMRequest(new SimulatePrincipalPolicyRequestPrivate(IAMRequest::SimulatePrincipalPolicyAction, this))
{

}

bool SimulatePrincipalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SimulatePrincipalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SimulatePrincipalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * SimulatePrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SimulatePrincipalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SimulatePrincipalPolicyRequestPrivate
 *
 * @brief  Private implementation for SimulatePrincipalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SimulatePrincipalPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public SimulatePrincipalPolicyRequest instance.
 */
SimulatePrincipalPolicyRequestPrivate::SimulatePrincipalPolicyRequestPrivate(
    const IAMRequest::Action action, SimulatePrincipalPolicyRequest * const q)
    : SimulatePrincipalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SimulatePrincipalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SimulatePrincipalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SimulatePrincipalPolicyRequest instance.
 */
SimulatePrincipalPolicyRequestPrivate::SimulatePrincipalPolicyRequestPrivate(
    const SimulatePrincipalPolicyRequestPrivate &other, SimulatePrincipalPolicyRequest * const q)
    : SimulatePrincipalPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
