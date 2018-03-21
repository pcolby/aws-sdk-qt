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

#include "describevpcendpointserviceconfigurationsrequest.h"
#include "describevpcendpointserviceconfigurationsrequest_p.h"
#include "describevpcendpointserviceconfigurationsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServiceConfigurationsRequest
 *
 * @brief  Implements EC2 DescribeVpcEndpointServiceConfigurations requests.
 *
 * @see    EC2Client::describeVpcEndpointServiceConfigurations
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcEndpointServiceConfigurationsRequest::DescribeVpcEndpointServiceConfigurationsRequest(const DescribeVpcEndpointServiceConfigurationsRequest &other)
    : EC2Request(new DescribeVpcEndpointServiceConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsRequest object.
 */
DescribeVpcEndpointServiceConfigurationsRequest::DescribeVpcEndpointServiceConfigurationsRequest()
    : EC2Request(new DescribeVpcEndpointServiceConfigurationsRequestPrivate(EC2Request::DescribeVpcEndpointServiceConfigurationsAction, this))
{

}

bool DescribeVpcEndpointServiceConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcEndpointServiceConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcEndpointServiceConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcEndpointServiceConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointServiceConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServiceConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServiceConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcEndpointServiceConfigurationsRequest instance.
 */
DescribeVpcEndpointServiceConfigurationsRequestPrivate::DescribeVpcEndpointServiceConfigurationsRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointServiceConfigurationsRequest * const q)
    : DescribeVpcEndpointServiceConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointServiceConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcEndpointServiceConfigurationsRequest instance.
 */
DescribeVpcEndpointServiceConfigurationsRequestPrivate::DescribeVpcEndpointServiceConfigurationsRequestPrivate(
    const DescribeVpcEndpointServiceConfigurationsRequestPrivate &other, DescribeVpcEndpointServiceConfigurationsRequest * const q)
    : DescribeVpcEndpointServiceConfigurationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
