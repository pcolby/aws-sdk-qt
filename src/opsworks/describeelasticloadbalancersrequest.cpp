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

#include "describeelasticloadbalancersrequest.h"
#include "describeelasticloadbalancersrequest_p.h"
#include "describeelasticloadbalancersresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeElasticLoadBalancersRequest
 *
 * @brief  Implements OpsWorks DescribeElasticLoadBalancers requests.
 *
 * @see    OpsWorksClient::describeElasticLoadBalancers
 */

/**
 * @brief  Constructs a new DescribeElasticLoadBalancersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticLoadBalancersRequest::DescribeElasticLoadBalancersRequest(const DescribeElasticLoadBalancersRequest &other)
    : OpsWorksRequest(new DescribeElasticLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticLoadBalancersRequest object.
 */
DescribeElasticLoadBalancersRequest::DescribeElasticLoadBalancersRequest()
    : OpsWorksRequest(new DescribeElasticLoadBalancersRequestPrivate(OpsWorksRequest::DescribeElasticLoadBalancersAction, this))
{

}

bool DescribeElasticLoadBalancersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticLoadBalancersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticLoadBalancersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeElasticLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticLoadBalancersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticLoadBalancersRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticLoadBalancersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticLoadBalancersRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeElasticLoadBalancersRequest instance.
 */
DescribeElasticLoadBalancersRequestPrivate::DescribeElasticLoadBalancersRequestPrivate(
    const OpsWorksRequest::Action action, DescribeElasticLoadBalancersRequest * const q)
    : DescribeElasticLoadBalancersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticLoadBalancersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticLoadBalancersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticLoadBalancersRequest instance.
 */
DescribeElasticLoadBalancersRequestPrivate::DescribeElasticLoadBalancersRequestPrivate(
    const DescribeElasticLoadBalancersRequestPrivate &other, DescribeElasticLoadBalancersRequest * const q)
    : DescribeElasticLoadBalancersPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
