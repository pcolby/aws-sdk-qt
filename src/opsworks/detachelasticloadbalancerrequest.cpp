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

#include "detachelasticloadbalancerrequest.h"
#include "detachelasticloadbalancerrequest_p.h"
#include "detachelasticloadbalancerresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DetachElasticLoadBalancerRequest
 *
 * @brief  Implements OpsWorks DetachElasticLoadBalancer requests.
 *
 * @see    OpsWorksClient::detachElasticLoadBalancer
 */

/**
 * @brief  Constructs a new DetachElasticLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachElasticLoadBalancerResponse::DetachElasticLoadBalancerResponse(

/**
 * @brief  Constructs a new DetachElasticLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachElasticLoadBalancerRequest::DetachElasticLoadBalancerRequest(const DetachElasticLoadBalancerRequest &other)
    : OpsWorksRequest(new DetachElasticLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachElasticLoadBalancerRequest object.
 */
DetachElasticLoadBalancerRequest::DetachElasticLoadBalancerRequest()
    : OpsWorksRequest(new DetachElasticLoadBalancerRequestPrivate(OpsWorksRequest::DetachElasticLoadBalancerAction, this))
{

}

bool DetachElasticLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachElasticLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachElasticLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DetachElasticLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DetachElasticLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachElasticLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for DetachElasticLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachElasticLoadBalancerRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DetachElasticLoadBalancerRequest instance.
 */
DetachElasticLoadBalancerRequestPrivate::DetachElasticLoadBalancerRequestPrivate(
    const OpsWorksRequest::Action action, DetachElasticLoadBalancerRequest * const q)
    : DetachElasticLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachElasticLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachElasticLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachElasticLoadBalancerRequest instance.
 */
DetachElasticLoadBalancerRequestPrivate::DetachElasticLoadBalancerRequestPrivate(
    const DetachElasticLoadBalancerRequestPrivate &other, DetachElasticLoadBalancerRequest * const q)
    : DetachElasticLoadBalancerPrivate(other, q)
{

}
