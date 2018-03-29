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

#include "enableavailabilityzonesforloadbalancerrequest.h"
#include "enableavailabilityzonesforloadbalancerrequest_p.h"
#include "enableavailabilityzonesforloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  EnableAvailabilityZonesForLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer
 */

/**
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableAvailabilityZonesForLoadBalancerRequest::EnableAvailabilityZonesForLoadBalancerRequest(const EnableAvailabilityZonesForLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new EnableAvailabilityZonesForLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerRequest object.
 */
EnableAvailabilityZonesForLoadBalancerRequest::EnableAvailabilityZonesForLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new EnableAvailabilityZonesForLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::EnableAvailabilityZonesForLoadBalancerAction, this))
{

}

bool EnableAvailabilityZonesForLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableAvailabilityZonesForLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableAvailabilityZonesForLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * EnableAvailabilityZonesForLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new EnableAvailabilityZonesForLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableAvailabilityZonesForLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for EnableAvailabilityZonesForLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public EnableAvailabilityZonesForLoadBalancerRequest instance.
 */
EnableAvailabilityZonesForLoadBalancerRequestPrivate::EnableAvailabilityZonesForLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, EnableAvailabilityZonesForLoadBalancerRequest * const q)
    : EnableAvailabilityZonesForLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableAvailabilityZonesForLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableAvailabilityZonesForLoadBalancerRequest instance.
 */
EnableAvailabilityZonesForLoadBalancerRequestPrivate::EnableAvailabilityZonesForLoadBalancerRequestPrivate(
    const EnableAvailabilityZonesForLoadBalancerRequestPrivate &other, EnableAvailabilityZonesForLoadBalancerRequest * const q)
    : EnableAvailabilityZonesForLoadBalancerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
