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

#include "describereservedcachenodesofferingsrequest.h"
#include "describereservedcachenodesofferingsrequest_p.h"
#include "describereservedcachenodesofferingsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesOfferingsRequest
 *
 * \brief The DescribeReservedCacheNodesOfferingsRequest class provides an interface for ElastiCache DescribeReservedCacheNodesOfferings requests.
 *
 * \ingroup ElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeReservedCacheNodesOfferings
 */

/*!
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest(const DescribeReservedCacheNodesOfferingsRequest &other)
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequest object.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest()
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(ElastiCacheRequest::DescribeReservedCacheNodesOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedCacheNodesOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeReservedCacheNodesOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedCacheNodesOfferingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedCacheNodesOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedCacheNodesOfferingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeReservedCacheNodesOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedCacheNodesOfferingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeReservedCacheNodesOfferingsRequest instance.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReservedCacheNodesOfferingsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedCacheNodesOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedCacheNodesOfferingsRequest instance.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const DescribeReservedCacheNodesOfferingsRequestPrivate &other, DescribeReservedCacheNodesOfferingsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
