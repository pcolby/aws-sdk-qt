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

#include "simulatecustompolicyrequest.h"
#include "simulatecustompolicyrequest_p.h"
#include "simulatecustompolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  SimulateCustomPolicyRequest
 *
 * @brief  Implements IAM SimulateCustomPolicy requests.
 *
 * @see    IAMClient::simulateCustomPolicy
 */

/**
 * @brief  Constructs a new SimulateCustomPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SimulateCustomPolicyRequest::SimulateCustomPolicyRequest(const SimulateCustomPolicyRequest &other)
    : IAMRequest(new SimulateCustomPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SimulateCustomPolicyRequest object.
 */
SimulateCustomPolicyRequest::SimulateCustomPolicyRequest()
    : IAMRequest(new SimulateCustomPolicyRequestPrivate(IAMRequest::SimulateCustomPolicyAction, this))
{

}

bool SimulateCustomPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SimulateCustomPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SimulateCustomPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * SimulateCustomPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SimulateCustomPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SimulateCustomPolicyRequestPrivate
 *
 * @brief  Private implementation for SimulateCustomPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SimulateCustomPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public SimulateCustomPolicyRequest instance.
 */
SimulateCustomPolicyRequestPrivate::SimulateCustomPolicyRequestPrivate(
    const IAMRequest::Action action, SimulateCustomPolicyRequest * const q)
    : SimulateCustomPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SimulateCustomPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SimulateCustomPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SimulateCustomPolicyRequest instance.
 */
SimulateCustomPolicyRequestPrivate::SimulateCustomPolicyRequestPrivate(
    const SimulateCustomPolicyRequestPrivate &other, SimulateCustomPolicyRequest * const q)
    : SimulateCustomPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
