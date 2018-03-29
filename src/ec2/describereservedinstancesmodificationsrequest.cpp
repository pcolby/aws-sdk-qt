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

#include "describereservedinstancesmodificationsrequest.h"
#include "describereservedinstancesmodificationsrequest_p.h"
#include "describereservedinstancesmodificationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesModificationsRequest
 *
 * @brief  Implements EC2 DescribeReservedInstancesModifications requests.
 *
 * @see    EC2Client::describeReservedInstancesModifications
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesModificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedInstancesModificationsRequest::DescribeReservedInstancesModificationsRequest(const DescribeReservedInstancesModificationsRequest &other)
    : EC2Request(new DescribeReservedInstancesModificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedInstancesModificationsRequest object.
 */
DescribeReservedInstancesModificationsRequest::DescribeReservedInstancesModificationsRequest()
    : EC2Request(new DescribeReservedInstancesModificationsRequestPrivate(EC2Request::DescribeReservedInstancesModificationsAction, this))
{

}

bool DescribeReservedInstancesModificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedInstancesModificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedInstancesModificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeReservedInstancesModificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesModificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesModificationsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesModificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesModificationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeReservedInstancesModificationsRequest instance.
 */
DescribeReservedInstancesModificationsRequestPrivate::DescribeReservedInstancesModificationsRequestPrivate(
    const EC2Request::Action action, DescribeReservedInstancesModificationsRequest * const q)
    : DescribeReservedInstancesModificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesModificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesModificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedInstancesModificationsRequest instance.
 */
DescribeReservedInstancesModificationsRequestPrivate::DescribeReservedInstancesModificationsRequestPrivate(
    const DescribeReservedInstancesModificationsRequestPrivate &other, DescribeReservedInstancesModificationsRequest * const q)
    : DescribeReservedInstancesModificationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
