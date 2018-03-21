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

#include "describespotinstancerequestsrequest.h"
#include "describespotinstancerequestsrequest_p.h"
#include "describespotinstancerequestsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotInstanceRequestsRequest
 *
 * @brief  Implements EC2 DescribeSpotInstanceRequests requests.
 *
 * @see    EC2Client::describeSpotInstanceRequests
 */

/**
 * @brief  Constructs a new DescribeSpotInstanceRequestsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSpotInstanceRequestsResponse::DescribeSpotInstanceRequestsResponse(

/**
 * @brief  Constructs a new DescribeSpotInstanceRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotInstanceRequestsRequest::DescribeSpotInstanceRequestsRequest(const DescribeSpotInstanceRequestsRequest &other)
    : EC2Request(new DescribeSpotInstanceRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotInstanceRequestsRequest object.
 */
DescribeSpotInstanceRequestsRequest::DescribeSpotInstanceRequestsRequest()
    : EC2Request(new DescribeSpotInstanceRequestsRequestPrivate(EC2Request::DescribeSpotInstanceRequestsAction, this))
{

}

bool DescribeSpotInstanceRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotInstanceRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotInstanceRequestsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSpotInstanceRequestsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotInstanceRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotInstanceRequestsRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotInstanceRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotInstanceRequestsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotInstanceRequestsRequest instance.
 */
DescribeSpotInstanceRequestsRequestPrivate::DescribeSpotInstanceRequestsRequestPrivate(
    const EC2Request::Action action, DescribeSpotInstanceRequestsRequest * const q)
    : DescribeSpotInstanceRequestsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotInstanceRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotInstanceRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotInstanceRequestsRequest instance.
 */
DescribeSpotInstanceRequestsRequestPrivate::DescribeSpotInstanceRequestsRequestPrivate(
    const DescribeSpotInstanceRequestsRequestPrivate &other, DescribeSpotInstanceRequestsRequest * const q)
    : DescribeSpotInstanceRequestsPrivate(other, q)
{

}
