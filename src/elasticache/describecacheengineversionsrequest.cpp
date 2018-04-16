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

#include "describecacheengineversionsrequest.h"
#include "describecacheengineversionsrequest_p.h"
#include "describecacheengineversionsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheEngineVersionsRequest
 *
 * \brief The DescribeCacheEngineVersionsRequest class encapsulates ElastiCache DescribeCacheEngineVersions requests.
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
 * \sa ElastiCacheClient::describeCacheEngineVersions
 */

/*!
 * @brief  Constructs a new DescribeCacheEngineVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheEngineVersionsRequest::DescribeCacheEngineVersionsRequest(const DescribeCacheEngineVersionsRequest &other)
    : ElastiCacheRequest(new DescribeCacheEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeCacheEngineVersionsRequest object.
 */
DescribeCacheEngineVersionsRequest::DescribeCacheEngineVersionsRequest()
    : ElastiCacheRequest(new DescribeCacheEngineVersionsRequestPrivate(ElastiCacheRequest::DescribeCacheEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeCacheEngineVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheEngineVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheEngineVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeCacheEngineVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheEngineVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCacheEngineVersionsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheEngineVersionsRequest instance.
 */
DescribeCacheEngineVersionsRequestPrivate::DescribeCacheEngineVersionsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheEngineVersionsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCacheEngineVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheEngineVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheEngineVersionsRequest instance.
 */
DescribeCacheEngineVersionsRequestPrivate::DescribeCacheEngineVersionsRequestPrivate(
    const DescribeCacheEngineVersionsRequestPrivate &other, DescribeCacheEngineVersionsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
