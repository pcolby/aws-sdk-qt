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

#include "getloadbalancermetricdatarequest.h"
#include "getloadbalancermetricdatarequest_p.h"
#include "getloadbalancermetricdataresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetLoadBalancerMetricDataRequest
 *
 * @brief  Implements Lightsail GetLoadBalancerMetricData requests.
 *
 * @see    LightsailClient::getLoadBalancerMetricData
 */

/**
 * @brief  Constructs a new GetLoadBalancerMetricDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoadBalancerMetricDataRequest::GetLoadBalancerMetricDataRequest(const GetLoadBalancerMetricDataRequest &other)
    : LightsailRequest(new GetLoadBalancerMetricDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoadBalancerMetricDataRequest object.
 */
GetLoadBalancerMetricDataRequest::GetLoadBalancerMetricDataRequest()
    : LightsailRequest(new GetLoadBalancerMetricDataRequestPrivate(LightsailRequest::GetLoadBalancerMetricDataAction, this))
{

}

bool GetLoadBalancerMetricDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoadBalancerMetricDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoadBalancerMetricDataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetLoadBalancerMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new GetLoadBalancerMetricDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoadBalancerMetricDataRequestPrivate
 *
 * @brief  Private implementation for GetLoadBalancerMetricDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerMetricDataRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetLoadBalancerMetricDataRequest instance.
 */
GetLoadBalancerMetricDataRequestPrivate::GetLoadBalancerMetricDataRequestPrivate(
    const LightsailRequest::Action action, GetLoadBalancerMetricDataRequest * const q)
    : GetLoadBalancerMetricDataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerMetricDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoadBalancerMetricDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoadBalancerMetricDataRequest instance.
 */
GetLoadBalancerMetricDataRequestPrivate::GetLoadBalancerMetricDataRequestPrivate(
    const GetLoadBalancerMetricDataRequestPrivate &other, GetLoadBalancerMetricDataRequest * const q)
    : GetLoadBalancerMetricDataPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
