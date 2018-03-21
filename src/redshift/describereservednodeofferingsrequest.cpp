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

#include "describereservednodeofferingsrequest.h"
#include "describereservednodeofferingsrequest_p.h"
#include "describereservednodeofferingsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeReservedNodeOfferingsRequest
 *
 * @brief  Implements Redshift DescribeReservedNodeOfferings requests.
 *
 * @see    RedshiftClient::describeReservedNodeOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedNodeOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedNodeOfferingsRequest::DescribeReservedNodeOfferingsRequest(const DescribeReservedNodeOfferingsRequest &other)
    : RedshiftRequest(new DescribeReservedNodeOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedNodeOfferingsRequest object.
 */
DescribeReservedNodeOfferingsRequest::DescribeReservedNodeOfferingsRequest()
    : RedshiftRequest(new DescribeReservedNodeOfferingsRequestPrivate(RedshiftRequest::DescribeReservedNodeOfferingsAction, this))
{

}

bool DescribeReservedNodeOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedNodeOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedNodeOfferingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeReservedNodeOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedNodeOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedNodeOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedNodeOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodeOfferingsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeReservedNodeOfferingsRequest instance.
 */
DescribeReservedNodeOfferingsRequestPrivate::DescribeReservedNodeOfferingsRequestPrivate(
    const RedshiftRequest::Action action, DescribeReservedNodeOfferingsRequest * const q)
    : DescribeReservedNodeOfferingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodeOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedNodeOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedNodeOfferingsRequest instance.
 */
DescribeReservedNodeOfferingsRequestPrivate::DescribeReservedNodeOfferingsRequestPrivate(
    const DescribeReservedNodeOfferingsRequestPrivate &other, DescribeReservedNodeOfferingsRequest * const q)
    : DescribeReservedNodeOfferingsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
