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

#include "attachinstancestoloadbalancerrequest.h"
#include "attachinstancestoloadbalancerrequest_p.h"
#include "attachinstancestoloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  AttachInstancesToLoadBalancerRequest
 *
 * @brief  Implements Lightsail AttachInstancesToLoadBalancer requests.
 *
 * @see    LightsailClient::attachInstancesToLoadBalancer
 */

/**
 * @brief  Constructs a new AttachInstancesToLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachInstancesToLoadBalancerRequest::AttachInstancesToLoadBalancerRequest(const AttachInstancesToLoadBalancerRequest &other)
    : LightsailRequest(new AttachInstancesToLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachInstancesToLoadBalancerRequest object.
 */
AttachInstancesToLoadBalancerRequest::AttachInstancesToLoadBalancerRequest()
    : LightsailRequest(new AttachInstancesToLoadBalancerRequestPrivate(LightsailRequest::AttachInstancesToLoadBalancerAction, this))
{

}

bool AttachInstancesToLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachInstancesToLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachInstancesToLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * AttachInstancesToLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new AttachInstancesToLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachInstancesToLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for AttachInstancesToLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesToLoadBalancerRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public AttachInstancesToLoadBalancerRequest instance.
 */
AttachInstancesToLoadBalancerRequestPrivate::AttachInstancesToLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, AttachInstancesToLoadBalancerRequest * const q)
    : AttachInstancesToLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesToLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachInstancesToLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachInstancesToLoadBalancerRequest instance.
 */
AttachInstancesToLoadBalancerRequestPrivate::AttachInstancesToLoadBalancerRequestPrivate(
    const AttachInstancesToLoadBalancerRequestPrivate &other, AttachInstancesToLoadBalancerRequest * const q)
    : AttachInstancesToLoadBalancerPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
