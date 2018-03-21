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

#include "describereserveddbinstancesofferingsrequest.h"
#include "describereserveddbinstancesofferingsrequest_p.h"
#include "describereserveddbinstancesofferingsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeReservedDBInstancesOfferingsRequest
 *
 * @brief  Implements RDS DescribeReservedDBInstancesOfferings requests.
 *
 * @see    RDSClient::describeReservedDBInstancesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedDBInstancesOfferingsResponse::DescribeReservedDBInstancesOfferingsResponse(

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
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeReservedDBInstancesOfferingsRequest::response(QNetworkReply * const reply) const
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
    : DescribeReservedDBInstancesOfferingsPrivate(action, q)
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
    : DescribeReservedDBInstancesOfferingsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
