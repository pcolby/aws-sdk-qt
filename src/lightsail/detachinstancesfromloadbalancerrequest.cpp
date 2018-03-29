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

#include "detachinstancesfromloadbalancerrequest.h"
#include "detachinstancesfromloadbalancerrequest_p.h"
#include "detachinstancesfromloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DetachInstancesFromLoadBalancerRequest
 *
 * @brief  Implements Lightsail DetachInstancesFromLoadBalancer requests.
 *
 * @see    LightsailClient::detachInstancesFromLoadBalancer
 */

/**
 * @brief  Constructs a new DetachInstancesFromLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachInstancesFromLoadBalancerRequest::DetachInstancesFromLoadBalancerRequest(const DetachInstancesFromLoadBalancerRequest &other)
    : LightsailRequest(new DetachInstancesFromLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachInstancesFromLoadBalancerRequest object.
 */
DetachInstancesFromLoadBalancerRequest::DetachInstancesFromLoadBalancerRequest()
    : LightsailRequest(new DetachInstancesFromLoadBalancerRequestPrivate(LightsailRequest::DetachInstancesFromLoadBalancerAction, this))
{

}

bool DetachInstancesFromLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachInstancesFromLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachInstancesFromLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DetachInstancesFromLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DetachInstancesFromLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachInstancesFromLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for DetachInstancesFromLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesFromLoadBalancerRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DetachInstancesFromLoadBalancerRequest instance.
 */
DetachInstancesFromLoadBalancerRequestPrivate::DetachInstancesFromLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, DetachInstancesFromLoadBalancerRequest * const q)
    : DetachInstancesFromLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesFromLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachInstancesFromLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachInstancesFromLoadBalancerRequest instance.
 */
DetachInstancesFromLoadBalancerRequestPrivate::DetachInstancesFromLoadBalancerRequestPrivate(
    const DetachInstancesFromLoadBalancerRequestPrivate &other, DetachInstancesFromLoadBalancerRequest * const q)
    : DetachInstancesFromLoadBalancerPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
