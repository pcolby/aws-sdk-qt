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

#include "describereserveddbinstancesofferingsrequest.h"
#include "describereserveddbinstancesofferingsrequest_p.h"
#include "describereserveddbinstancesofferingsresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeReservedDBInstancesOfferingsRequest
 *
 * @brief  Implements RDS DescribeReservedDBInstancesOfferings requests.
 *
 * @see    RDSClient::describeReservedDBInstancesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedDBInstancesOfferingsRequest::DescribeReservedDBInstancesOfferingsRequest(const DescribeReservedDBInstancesOfferingsRequest &other)
    : RDSRequest(new DescribeReservedDBInstancesOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsRequest object.
 */
DescribeReservedDBInstancesOfferingsRequest::DescribeReservedDBInstancesOfferingsRequest()
    : RDSRequest(new DescribeReservedDBInstancesOfferingsRequestPrivate(RDSRequest::DescribeReservedDBInstancesOfferingsAction, this))
{

}

bool DescribeReservedDBInstancesOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedDBInstancesOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedDBInstancesOfferingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedDBInstancesOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedDBInstancesOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedDBInstancesOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedDBInstancesOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeReservedDBInstancesOfferingsRequest instance.
 */
DescribeReservedDBInstancesOfferingsRequestPrivate::DescribeReservedDBInstancesOfferingsRequestPrivate(
    const RDSRequest::Action action, DescribeReservedDBInstancesOfferingsRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedDBInstancesOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedDBInstancesOfferingsRequest instance.
 */
DescribeReservedDBInstancesOfferingsRequestPrivate::DescribeReservedDBInstancesOfferingsRequestPrivate(
    const DescribeReservedDBInstancesOfferingsRequestPrivate &other, DescribeReservedDBInstancesOfferingsRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
