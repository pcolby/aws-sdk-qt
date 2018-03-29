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

#include "setruleprioritiesrequest.h"
#include "setruleprioritiesrequest_p.h"
#include "setruleprioritiesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetRulePrioritiesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 SetRulePriorities requests.
 *
 * @see    ElasticLoadBalancingv2Client::setRulePriorities
 */

/**
 * @brief  Constructs a new SetRulePrioritiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetRulePrioritiesRequest::SetRulePrioritiesRequest(const SetRulePrioritiesRequest &other)
    : ElasticLoadBalancingv2Request(new SetRulePrioritiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetRulePrioritiesRequest object.
 */
SetRulePrioritiesRequest::SetRulePrioritiesRequest()
    : ElasticLoadBalancingv2Request(new SetRulePrioritiesRequestPrivate(ElasticLoadBalancingv2Request::SetRulePrioritiesAction, this))
{

}

bool SetRulePrioritiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetRulePrioritiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetRulePrioritiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * SetRulePrioritiesRequest::response(QNetworkReply * const reply) const
{
    return new SetRulePrioritiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetRulePrioritiesRequestPrivate
 *
 * @brief  Private implementation for SetRulePrioritiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetRulePrioritiesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public SetRulePrioritiesRequest instance.
 */
SetRulePrioritiesRequestPrivate::SetRulePrioritiesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, SetRulePrioritiesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetRulePrioritiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetRulePrioritiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetRulePrioritiesRequest instance.
 */
SetRulePrioritiesRequestPrivate::SetRulePrioritiesRequestPrivate(
    const SetRulePrioritiesRequestPrivate &other, SetRulePrioritiesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
