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

#include "disableavailabilityzonesforloadbalancerrequest.h"
#include "disableavailabilityzonesforloadbalancerrequest_p.h"
#include "disableavailabilityzonesforloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DisableAvailabilityZonesForLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancing DisableAvailabilityZonesForLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingClient::disableAvailabilityZonesForLoadBalancer
 */

/**
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableAvailabilityZonesForLoadBalancerResponse::DisableAvailabilityZonesForLoadBalancerResponse(

/**
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableAvailabilityZonesForLoadBalancerRequest::DisableAvailabilityZonesForLoadBalancerRequest(const DisableAvailabilityZonesForLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new DisableAvailabilityZonesForLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerRequest object.
 */
DisableAvailabilityZonesForLoadBalancerRequest::DisableAvailabilityZonesForLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new DisableAvailabilityZonesForLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::DisableAvailabilityZonesForLoadBalancerAction, this))
{

}

bool DisableAvailabilityZonesForLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableAvailabilityZonesForLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableAvailabilityZonesForLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DisableAvailabilityZonesForLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DisableAvailabilityZonesForLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableAvailabilityZonesForLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for DisableAvailabilityZonesForLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DisableAvailabilityZonesForLoadBalancerRequest instance.
 */
DisableAvailabilityZonesForLoadBalancerRequestPrivate::DisableAvailabilityZonesForLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DisableAvailabilityZonesForLoadBalancerRequest * const q)
    : DisableAvailabilityZonesForLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableAvailabilityZonesForLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableAvailabilityZonesForLoadBalancerRequest instance.
 */
DisableAvailabilityZonesForLoadBalancerRequestPrivate::DisableAvailabilityZonesForLoadBalancerRequestPrivate(
    const DisableAvailabilityZonesForLoadBalancerRequestPrivate &other, DisableAvailabilityZonesForLoadBalancerRequest * const q)
    : DisableAvailabilityZonesForLoadBalancerPrivate(other, q)
{

}
