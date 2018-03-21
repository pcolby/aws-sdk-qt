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

#include "deleterulerequest.h"
#include "deleterulerequest_p.h"
#include "deleteruleresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteRuleRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DeleteRule requests.
 *
 * @see    ElasticLoadBalancingv2Client::deleteRule
 */

/**
 * @brief  Constructs a new DeleteRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRuleResponse::DeleteRuleResponse(

/**
 * @brief  Constructs a new DeleteRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRuleRequest::DeleteRuleRequest(const DeleteRuleRequest &other)
    : ElasticLoadBalancingv2Request(new DeleteRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRuleRequest object.
 */
DeleteRuleRequest::DeleteRuleRequest()
    : ElasticLoadBalancingv2Request(new DeleteRuleRequestPrivate(ElasticLoadBalancingv2Request::DeleteRuleAction, this))
{

}

bool DeleteRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DeleteRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DeleteRuleRequest instance.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DeleteRuleRequest * const q)
    : DeleteRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRuleRequest instance.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const DeleteRuleRequestPrivate &other, DeleteRuleRequest * const q)
    : DeleteRulePrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
