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

#include "describehostreservationofferingsrequest.h"
#include "describehostreservationofferingsrequest_p.h"
#include "describehostreservationofferingsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeHostReservationOfferingsRequest
 *
 * @brief  Implements EC2 DescribeHostReservationOfferings requests.
 *
 * @see    EC2Client::describeHostReservationOfferings
 */

/**
 * @brief  Constructs a new DescribeHostReservationOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHostReservationOfferingsRequest::DescribeHostReservationOfferingsRequest(const DescribeHostReservationOfferingsRequest &other)
    : EC2Request(new DescribeHostReservationOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHostReservationOfferingsRequest object.
 */
DescribeHostReservationOfferingsRequest::DescribeHostReservationOfferingsRequest()
    : EC2Request(new DescribeHostReservationOfferingsRequestPrivate(EC2Request::DescribeHostReservationOfferingsAction, this))
{

}

bool DescribeHostReservationOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHostReservationOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHostReservationOfferingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeHostReservationOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostReservationOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHostReservationOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeHostReservationOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationOfferingsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeHostReservationOfferingsRequest instance.
 */
DescribeHostReservationOfferingsRequestPrivate::DescribeHostReservationOfferingsRequestPrivate(
    const EC2Request::Action action, DescribeHostReservationOfferingsRequest * const q)
    : DescribeHostReservationOfferingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostReservationOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHostReservationOfferingsRequest instance.
 */
DescribeHostReservationOfferingsRequestPrivate::DescribeHostReservationOfferingsRequestPrivate(
    const DescribeHostReservationOfferingsRequestPrivate &other, DescribeHostReservationOfferingsRequest * const q)
    : DescribeHostReservationOfferingsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
