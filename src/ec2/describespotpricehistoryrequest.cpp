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

#include "describespotpricehistoryrequest.h"
#include "describespotpricehistoryrequest_p.h"
#include "describespotpricehistoryresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotPriceHistoryRequest
 *
 * @brief  Implements EC2 DescribeSpotPriceHistory requests.
 *
 * @see    EC2Client::describeSpotPriceHistory
 */

/**
 * @brief  Constructs a new DescribeSpotPriceHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest(const DescribeSpotPriceHistoryRequest &other)
    : EC2Request(new DescribeSpotPriceHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotPriceHistoryRequest object.
 */
DescribeSpotPriceHistoryRequest::DescribeSpotPriceHistoryRequest()
    : EC2Request(new DescribeSpotPriceHistoryRequestPrivate(EC2Request::DescribeSpotPriceHistoryAction, this))
{

}

bool DescribeSpotPriceHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotPriceHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotPriceHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSpotPriceHistoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotPriceHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotPriceHistoryRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotPriceHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotPriceHistoryRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotPriceHistoryRequest instance.
 */
DescribeSpotPriceHistoryRequestPrivate::DescribeSpotPriceHistoryRequestPrivate(
    const EC2Request::Action action, DescribeSpotPriceHistoryRequest * const q)
    : DescribeSpotPriceHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotPriceHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotPriceHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotPriceHistoryRequest instance.
 */
DescribeSpotPriceHistoryRequestPrivate::DescribeSpotPriceHistoryRequestPrivate(
    const DescribeSpotPriceHistoryRequestPrivate &other, DescribeSpotPriceHistoryRequest * const q)
    : DescribeSpotPriceHistoryPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
