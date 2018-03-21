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

#include "describespotfleetrequestsrequest.h"
#include "describespotfleetrequestsrequest_p.h"
#include "describespotfleetrequestsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotFleetRequestsRequest
 *
 * @brief  Implements EC2 DescribeSpotFleetRequests requests.
 *
 * @see    EC2Client::describeSpotFleetRequests
 */

/**
 * @brief  Constructs a new DescribeSpotFleetRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotFleetRequestsRequest::DescribeSpotFleetRequestsRequest(const DescribeSpotFleetRequestsRequest &other)
    : EC2Request(new DescribeSpotFleetRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotFleetRequestsRequest object.
 */
DescribeSpotFleetRequestsRequest::DescribeSpotFleetRequestsRequest()
    : EC2Request(new DescribeSpotFleetRequestsRequestPrivate(EC2Request::DescribeSpotFleetRequestsAction, this))
{

}

bool DescribeSpotFleetRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotFleetRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotFleetRequestsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSpotFleetRequestsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotFleetRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotFleetRequestsRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotFleetRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetRequestsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotFleetRequestsRequest instance.
 */
DescribeSpotFleetRequestsRequestPrivate::DescribeSpotFleetRequestsRequestPrivate(
    const EC2Request::Action action, DescribeSpotFleetRequestsRequest * const q)
    : DescribeSpotFleetRequestsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotFleetRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotFleetRequestsRequest instance.
 */
DescribeSpotFleetRequestsRequestPrivate::DescribeSpotFleetRequestsRequestPrivate(
    const DescribeSpotFleetRequestsRequestPrivate &other, DescribeSpotFleetRequestsRequest * const q)
    : DescribeSpotFleetRequestsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
