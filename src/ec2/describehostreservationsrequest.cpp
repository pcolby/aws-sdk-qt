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

#include "describehostreservationsrequest.h"
#include "describehostreservationsrequest_p.h"
#include "describehostreservationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeHostReservationsRequest
 *
 * @brief  Implements EC2 DescribeHostReservations requests.
 *
 * @see    EC2Client::describeHostReservations
 */

/**
 * @brief  Constructs a new DescribeHostReservationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHostReservationsRequest::DescribeHostReservationsRequest(const DescribeHostReservationsRequest &other)
    : EC2Request(new DescribeHostReservationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHostReservationsRequest object.
 */
DescribeHostReservationsRequest::DescribeHostReservationsRequest()
    : EC2Request(new DescribeHostReservationsRequestPrivate(EC2Request::DescribeHostReservationsAction, this))
{

}

bool DescribeHostReservationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHostReservationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHostReservationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHostReservationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostReservationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHostReservationsRequestPrivate
 *
 * @brief  Private implementation for DescribeHostReservationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeHostReservationsRequest instance.
 */
DescribeHostReservationsRequestPrivate::DescribeHostReservationsRequestPrivate(
    const EC2Request::Action action, DescribeHostReservationsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostReservationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHostReservationsRequest instance.
 */
DescribeHostReservationsRequestPrivate::DescribeHostReservationsRequestPrivate(
    const DescribeHostReservationsRequestPrivate &other, DescribeHostReservationsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
