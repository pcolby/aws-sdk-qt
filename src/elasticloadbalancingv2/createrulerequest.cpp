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

#include "createrulerequest.h"
#include "createrulerequest_p.h"
#include "createruleresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateRuleRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 CreateRule requests.
 *
 * @see    ElasticLoadBalancingv2Client::createRule
 */

/**
 * @brief  Constructs a new CreateRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRuleRequest::CreateRuleRequest(const CreateRuleRequest &other)
    : ElasticLoadBalancingv2Request(new CreateRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRuleRequest object.
 */
CreateRuleRequest::CreateRuleRequest()
    : ElasticLoadBalancingv2Request(new CreateRuleRequestPrivate(ElasticLoadBalancingv2Request::CreateRuleAction, this))
{

}

bool CreateRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * CreateRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRuleRequestPrivate
 *
 * @brief  Private implementation for CreateRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public CreateRuleRequest instance.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, CreateRuleRequest * const q)
    : CreateRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRuleRequest instance.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const CreateRuleRequestPrivate &other, CreateRuleRequest * const q)
    : CreateRulePrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
