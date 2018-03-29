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

#include "setloadbalancerpoliciesoflistenerrequest.h"
#include "setloadbalancerpoliciesoflistenerrequest_p.h"
#include "setloadbalancerpoliciesoflistenerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerPoliciesOfListenerRequest
 *
 * @brief  Implements ElasticLoadBalancing SetLoadBalancerPoliciesOfListener requests.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerPoliciesOfListener
 */

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLoadBalancerPoliciesOfListenerRequest::SetLoadBalancerPoliciesOfListenerRequest(const SetLoadBalancerPoliciesOfListenerRequest &other)
    : ElasticLoadBalancingRequest(new SetLoadBalancerPoliciesOfListenerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerRequest object.
 */
SetLoadBalancerPoliciesOfListenerRequest::SetLoadBalancerPoliciesOfListenerRequest()
    : ElasticLoadBalancingRequest(new SetLoadBalancerPoliciesOfListenerRequestPrivate(ElasticLoadBalancingRequest::SetLoadBalancerPoliciesOfListenerAction, this))
{

}

bool SetLoadBalancerPoliciesOfListenerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLoadBalancerPoliciesOfListenerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLoadBalancerPoliciesOfListenerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * SetLoadBalancerPoliciesOfListenerRequest::response(QNetworkReply * const reply) const
{
    return new SetLoadBalancerPoliciesOfListenerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLoadBalancerPoliciesOfListenerRequestPrivate
 *
 * @brief  Private implementation for SetLoadBalancerPoliciesOfListenerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public SetLoadBalancerPoliciesOfListenerRequest instance.
 */
SetLoadBalancerPoliciesOfListenerRequestPrivate::SetLoadBalancerPoliciesOfListenerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, SetLoadBalancerPoliciesOfListenerRequest * const q)
    : SetLoadBalancerPoliciesOfListenerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLoadBalancerPoliciesOfListenerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLoadBalancerPoliciesOfListenerRequest instance.
 */
SetLoadBalancerPoliciesOfListenerRequestPrivate::SetLoadBalancerPoliciesOfListenerRequestPrivate(
    const SetLoadBalancerPoliciesOfListenerRequestPrivate &other, SetLoadBalancerPoliciesOfListenerRequest * const q)
    : SetLoadBalancerPoliciesOfListenerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
