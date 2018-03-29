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

#include "updateloadbalancerattributerequest.h"
#include "updateloadbalancerattributerequest_p.h"
#include "updateloadbalancerattributeresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  UpdateLoadBalancerAttributeRequest
 *
 * @brief  Implements Lightsail UpdateLoadBalancerAttribute requests.
 *
 * @see    LightsailClient::updateLoadBalancerAttribute
 */

/**
 * @brief  Constructs a new UpdateLoadBalancerAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest(const UpdateLoadBalancerAttributeRequest &other)
    : LightsailRequest(new UpdateLoadBalancerAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateLoadBalancerAttributeRequest object.
 */
UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest()
    : LightsailRequest(new UpdateLoadBalancerAttributeRequestPrivate(LightsailRequest::UpdateLoadBalancerAttributeAction, this))
{

}

bool UpdateLoadBalancerAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateLoadBalancerAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateLoadBalancerAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * UpdateLoadBalancerAttributeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoadBalancerAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateLoadBalancerAttributeRequestPrivate
 *
 * @brief  Private implementation for UpdateLoadBalancerAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoadBalancerAttributeRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public UpdateLoadBalancerAttributeRequest instance.
 */
UpdateLoadBalancerAttributeRequestPrivate::UpdateLoadBalancerAttributeRequestPrivate(
    const LightsailRequest::Action action, UpdateLoadBalancerAttributeRequest * const q)
    : UpdateLoadBalancerAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoadBalancerAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoadBalancerAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateLoadBalancerAttributeRequest instance.
 */
UpdateLoadBalancerAttributeRequestPrivate::UpdateLoadBalancerAttributeRequestPrivate(
    const UpdateLoadBalancerAttributeRequestPrivate &other, UpdateLoadBalancerAttributeRequest * const q)
    : UpdateLoadBalancerAttributePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
