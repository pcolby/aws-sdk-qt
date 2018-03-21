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

#include "setipaddresstyperequest.h"
#include "setipaddresstyperequest_p.h"
#include "setipaddresstyperesponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetIpAddressTypeRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 SetIpAddressType requests.
 *
 * @see    ElasticLoadBalancingv2Client::setIpAddressType
 */

/**
 * @brief  Constructs a new SetIpAddressTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIpAddressTypeResponse::SetIpAddressTypeResponse(

/**
 * @brief  Constructs a new SetIpAddressTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIpAddressTypeRequest::SetIpAddressTypeRequest(const SetIpAddressTypeRequest &other)
    : ElasticLoadBalancingv2Request(new SetIpAddressTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIpAddressTypeRequest object.
 */
SetIpAddressTypeRequest::SetIpAddressTypeRequest()
    : ElasticLoadBalancingv2Request(new SetIpAddressTypeRequestPrivate(ElasticLoadBalancingv2Request::SetIpAddressTypeAction, this))
{

}

bool SetIpAddressTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIpAddressTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIpAddressTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * SetIpAddressTypeRequest::response(QNetworkReply * const reply) const
{
    return new SetIpAddressTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIpAddressTypeRequestPrivate
 *
 * @brief  Private implementation for SetIpAddressTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIpAddressTypeRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public SetIpAddressTypeRequest instance.
 */
SetIpAddressTypeRequestPrivate::SetIpAddressTypeRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, SetIpAddressTypeRequest * const q)
    : SetIpAddressTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIpAddressTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIpAddressTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIpAddressTypeRequest instance.
 */
SetIpAddressTypeRequestPrivate::SetIpAddressTypeRequestPrivate(
    const SetIpAddressTypeRequestPrivate &other, SetIpAddressTypeRequest * const q)
    : SetIpAddressTypePrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
