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

#include "setsecuritygroupsrequest.h"
#include "setsecuritygroupsrequest_p.h"
#include "setsecuritygroupsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetSecurityGroupsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 SetSecurityGroups requests.
 *
 * @see    ElasticLoadBalancingv2Client::setSecurityGroups
 */

/**
 * @brief  Constructs a new SetSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSecurityGroupsResponse::SetSecurityGroupsResponse(

/**
 * @brief  Constructs a new SetSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetSecurityGroupsRequest::SetSecurityGroupsRequest(const SetSecurityGroupsRequest &other)
    : ElasticLoadBalancingv2Request(new SetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetSecurityGroupsRequest object.
 */
SetSecurityGroupsRequest::SetSecurityGroupsRequest()
    : ElasticLoadBalancingv2Request(new SetSecurityGroupsRequestPrivate(ElasticLoadBalancingv2Request::SetSecurityGroupsAction, this))
{

}

bool SetSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * SetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new SetSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for SetSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSecurityGroupsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public SetSecurityGroupsRequest instance.
 */
SetSecurityGroupsRequestPrivate::SetSecurityGroupsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, SetSecurityGroupsRequest * const q)
    : SetSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetSecurityGroupsRequest instance.
 */
SetSecurityGroupsRequestPrivate::SetSecurityGroupsRequestPrivate(
    const SetSecurityGroupsRequestPrivate &other, SetSecurityGroupsRequest * const q)
    : SetSecurityGroupsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
