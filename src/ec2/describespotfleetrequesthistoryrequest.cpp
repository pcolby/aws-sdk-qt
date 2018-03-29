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

#include "describespotfleetrequesthistoryrequest.h"
#include "describespotfleetrequesthistoryrequest_p.h"
#include "describespotfleetrequesthistoryresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSpotFleetRequestHistoryRequest
 *
 * @brief  Implements EC2 DescribeSpotFleetRequestHistory requests.
 *
 * @see    EC2Client::describeSpotFleetRequestHistory
 */

/**
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotFleetRequestHistoryRequest::DescribeSpotFleetRequestHistoryRequest(const DescribeSpotFleetRequestHistoryRequest &other)
    : EC2Request(new DescribeSpotFleetRequestHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryRequest object.
 */
DescribeSpotFleetRequestHistoryRequest::DescribeSpotFleetRequestHistoryRequest()
    : EC2Request(new DescribeSpotFleetRequestHistoryRequestPrivate(EC2Request::DescribeSpotFleetRequestHistoryAction, this))
{

}

bool DescribeSpotFleetRequestHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotFleetRequestHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotFleetRequestHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSpotFleetRequestHistoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotFleetRequestHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotFleetRequestHistoryRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotFleetRequestHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotFleetRequestHistoryRequest instance.
 */
DescribeSpotFleetRequestHistoryRequestPrivate::DescribeSpotFleetRequestHistoryRequestPrivate(
    const EC2Request::Action action, DescribeSpotFleetRequestHistoryRequest * const q)
    : DescribeSpotFleetRequestHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotFleetRequestHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotFleetRequestHistoryRequest instance.
 */
DescribeSpotFleetRequestHistoryRequestPrivate::DescribeSpotFleetRequestHistoryRequestPrivate(
    const DescribeSpotFleetRequestHistoryRequestPrivate &other, DescribeSpotFleetRequestHistoryRequest * const q)
    : DescribeSpotFleetRequestHistoryPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
