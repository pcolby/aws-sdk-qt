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

#include "getloadbalancersrequest.h"
#include "getloadbalancersrequest_p.h"
#include "getloadbalancersresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancersRequest
 *
 * @brief  Implements Lightsail GetLoadBalancers requests.
 *
 * @see    LightsailClient::getLoadBalancers
 */

/**
 * @brief  Constructs a new GetLoadBalancersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoadBalancersRequest::GetLoadBalancersRequest(const GetLoadBalancersRequest &other)
    : LightsailRequest(new GetLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoadBalancersRequest object.
 */
GetLoadBalancersRequest::GetLoadBalancersRequest()
    : LightsailRequest(new GetLoadBalancersRequestPrivate(LightsailRequest::GetLoadBalancersAction, this))
{

}

bool GetLoadBalancersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoadBalancersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoadBalancersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new GetLoadBalancersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoadBalancersRequestPrivate
 *
 * @brief  Private implementation for GetLoadBalancersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancersRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetLoadBalancersRequest instance.
 */
GetLoadBalancersRequestPrivate::GetLoadBalancersRequestPrivate(
    const LightsailRequest::Action action, GetLoadBalancersRequest * const q)
    : GetLoadBalancersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoadBalancersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoadBalancersRequest instance.
 */
GetLoadBalancersRequestPrivate::GetLoadBalancersRequestPrivate(
    const GetLoadBalancersRequestPrivate &other, GetLoadBalancersRequest * const q)
    : GetLoadBalancersPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
