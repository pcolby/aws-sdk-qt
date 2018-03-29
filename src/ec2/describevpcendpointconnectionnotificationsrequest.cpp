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

#include "describevpcendpointconnectionnotificationsrequest.h"
#include "describevpcendpointconnectionnotificationsrequest_p.h"
#include "describevpcendpointconnectionnotificationsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointConnectionNotificationsRequest
 *
 * @brief  Implements EC2 DescribeVpcEndpointConnectionNotifications requests.
 *
 * @see    EC2Client::describeVpcEndpointConnectionNotifications
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointConnectionNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcEndpointConnectionNotificationsRequest::DescribeVpcEndpointConnectionNotificationsRequest(const DescribeVpcEndpointConnectionNotificationsRequest &other)
    : EC2Request(new DescribeVpcEndpointConnectionNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcEndpointConnectionNotificationsRequest object.
 */
DescribeVpcEndpointConnectionNotificationsRequest::DescribeVpcEndpointConnectionNotificationsRequest()
    : EC2Request(new DescribeVpcEndpointConnectionNotificationsRequestPrivate(EC2Request::DescribeVpcEndpointConnectionNotificationsAction, this))
{

}

bool DescribeVpcEndpointConnectionNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcEndpointConnectionNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcEndpointConnectionNotificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcEndpointConnectionNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointConnectionNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointConnectionNotificationsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointConnectionNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointConnectionNotificationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcEndpointConnectionNotificationsRequest instance.
 */
DescribeVpcEndpointConnectionNotificationsRequestPrivate::DescribeVpcEndpointConnectionNotificationsRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointConnectionNotificationsRequest * const q)
    : DescribeVpcEndpointConnectionNotificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointConnectionNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointConnectionNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcEndpointConnectionNotificationsRequest instance.
 */
DescribeVpcEndpointConnectionNotificationsRequestPrivate::DescribeVpcEndpointConnectionNotificationsRequestPrivate(
    const DescribeVpcEndpointConnectionNotificationsRequestPrivate &other, DescribeVpcEndpointConnectionNotificationsRequest * const q)
    : DescribeVpcEndpointConnectionNotificationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
