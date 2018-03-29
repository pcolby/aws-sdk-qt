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

#include "setloadbalancerpoliciesforbackendserverrequest.h"
#include "setloadbalancerpoliciesforbackendserverrequest_p.h"
#include "setloadbalancerpoliciesforbackendserverresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerPoliciesForBackendServerRequest
 *
 * @brief  Implements ElasticLoadBalancing SetLoadBalancerPoliciesForBackendServer requests.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerPoliciesForBackendServer
 */

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLoadBalancerPoliciesForBackendServerRequest::SetLoadBalancerPoliciesForBackendServerRequest(const SetLoadBalancerPoliciesForBackendServerRequest &other)
    : ElasticLoadBalancingRequest(new SetLoadBalancerPoliciesForBackendServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerRequest object.
 */
SetLoadBalancerPoliciesForBackendServerRequest::SetLoadBalancerPoliciesForBackendServerRequest()
    : ElasticLoadBalancingRequest(new SetLoadBalancerPoliciesForBackendServerRequestPrivate(ElasticLoadBalancingRequest::SetLoadBalancerPoliciesForBackendServerAction, this))
{

}

bool SetLoadBalancerPoliciesForBackendServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLoadBalancerPoliciesForBackendServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLoadBalancerPoliciesForBackendServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * SetLoadBalancerPoliciesForBackendServerRequest::response(QNetworkReply * const reply) const
{
    return new SetLoadBalancerPoliciesForBackendServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLoadBalancerPoliciesForBackendServerRequestPrivate
 *
 * @brief  Private implementation for SetLoadBalancerPoliciesForBackendServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public SetLoadBalancerPoliciesForBackendServerRequest instance.
 */
SetLoadBalancerPoliciesForBackendServerRequestPrivate::SetLoadBalancerPoliciesForBackendServerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, SetLoadBalancerPoliciesForBackendServerRequest * const q)
    : SetLoadBalancerPoliciesForBackendServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLoadBalancerPoliciesForBackendServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLoadBalancerPoliciesForBackendServerRequest instance.
 */
SetLoadBalancerPoliciesForBackendServerRequestPrivate::SetLoadBalancerPoliciesForBackendServerRequestPrivate(
    const SetLoadBalancerPoliciesForBackendServerRequestPrivate &other, SetLoadBalancerPoliciesForBackendServerRequest * const q)
    : SetLoadBalancerPoliciesForBackendServerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
