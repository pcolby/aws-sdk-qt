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

#include "setsubnetsrequest.h"
#include "setsubnetsrequest_p.h"
#include "setsubnetsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetSubnetsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 SetSubnets requests.
 *
 * @see    ElasticLoadBalancingv2Client::setSubnets
 */

/**
 * @brief  Constructs a new SetSubnetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSubnetsResponse::SetSubnetsResponse(

/**
 * @brief  Constructs a new SetSubnetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetSubnetsRequest::SetSubnetsRequest(const SetSubnetsRequest &other)
    : ElasticLoadBalancingv2Request(new SetSubnetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetSubnetsRequest object.
 */
SetSubnetsRequest::SetSubnetsRequest()
    : ElasticLoadBalancingv2Request(new SetSubnetsRequestPrivate(ElasticLoadBalancingv2Request::SetSubnetsAction, this))
{

}

bool SetSubnetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetSubnetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetSubnetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * SetSubnetsRequest::response(QNetworkReply * const reply) const
{
    return new SetSubnetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetSubnetsRequestPrivate
 *
 * @brief  Private implementation for SetSubnetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSubnetsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public SetSubnetsRequest instance.
 */
SetSubnetsRequestPrivate::SetSubnetsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, SetSubnetsRequest * const q)
    : SetSubnetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetSubnetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetSubnetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetSubnetsRequest instance.
 */
SetSubnetsRequestPrivate::SetSubnetsRequestPrivate(
    const SetSubnetsRequestPrivate &other, SetSubnetsRequest * const q)
    : SetSubnetsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
