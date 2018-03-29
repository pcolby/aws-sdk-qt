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

#include "modifyrulerequest.h"
#include "modifyrulerequest_p.h"
#include "modifyruleresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyRuleRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 ModifyRule requests.
 *
 * @see    ElasticLoadBalancingv2Client::modifyRule
 */

/**
 * @brief  Constructs a new ModifyRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyRuleRequest::ModifyRuleRequest(const ModifyRuleRequest &other)
    : ElasticLoadBalancingv2Request(new ModifyRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyRuleRequest object.
 */
ModifyRuleRequest::ModifyRuleRequest()
    : ElasticLoadBalancingv2Request(new ModifyRuleRequestPrivate(ElasticLoadBalancingv2Request::ModifyRuleAction, this))
{

}

bool ModifyRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyRuleRequest::response(QNetworkReply * const reply) const
{
    return new ModifyRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyRuleRequestPrivate
 *
 * @brief  Private implementation for ModifyRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyRuleRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public ModifyRuleRequest instance.
 */
ModifyRuleRequestPrivate::ModifyRuleRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, ModifyRuleRequest * const q)
    : ModifyRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyRuleRequest instance.
 */
ModifyRuleRequestPrivate::ModifyRuleRequestPrivate(
    const ModifyRuleRequestPrivate &other, ModifyRuleRequest * const q)
    : ModifyRulePrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
