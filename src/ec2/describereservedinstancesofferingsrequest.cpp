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

#include "describereservedinstancesofferingsrequest.h"
#include "describereservedinstancesofferingsrequest_p.h"
#include "describereservedinstancesofferingsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesOfferingsRequest
 *
 * @brief  Implements EC2 DescribeReservedInstancesOfferings requests.
 *
 * @see    EC2Client::describeReservedInstancesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedInstancesOfferingsRequest::DescribeReservedInstancesOfferingsRequest(const DescribeReservedInstancesOfferingsRequest &other)
    : EC2Request(new DescribeReservedInstancesOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedInstancesOfferingsRequest object.
 */
DescribeReservedInstancesOfferingsRequest::DescribeReservedInstancesOfferingsRequest()
    : EC2Request(new DescribeReservedInstancesOfferingsRequestPrivate(EC2Request::DescribeReservedInstancesOfferingsAction, this))
{

}

bool DescribeReservedInstancesOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedInstancesOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedInstancesOfferingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeReservedInstancesOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesOfferingsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeReservedInstancesOfferingsRequest instance.
 */
DescribeReservedInstancesOfferingsRequestPrivate::DescribeReservedInstancesOfferingsRequestPrivate(
    const EC2Request::Action action, DescribeReservedInstancesOfferingsRequest * const q)
    : DescribeReservedInstancesOfferingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedInstancesOfferingsRequest instance.
 */
DescribeReservedInstancesOfferingsRequestPrivate::DescribeReservedInstancesOfferingsRequestPrivate(
    const DescribeReservedInstancesOfferingsRequestPrivate &other, DescribeReservedInstancesOfferingsRequest * const q)
    : DescribeReservedInstancesOfferingsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
