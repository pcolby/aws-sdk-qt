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

#include "describecacheclustersrequest.h"
#include "describecacheclustersrequest_p.h"
#include "describecacheclustersresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheClustersRequest
 *
 * @brief  Implements ElastiCache DescribeCacheClusters requests.
 *
 * @see    ElastiCacheClient::describeCacheClusters
 */

/**
 * @brief  Constructs a new DescribeCacheClustersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheClustersResponse::DescribeCacheClustersResponse(

/**
 * @brief  Constructs a new DescribeCacheClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheClustersRequest::DescribeCacheClustersRequest(const DescribeCacheClustersRequest &other)
    : ElastiCacheRequest(new DescribeCacheClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheClustersRequest object.
 */
DescribeCacheClustersRequest::DescribeCacheClustersRequest()
    : ElastiCacheRequest(new DescribeCacheClustersRequestPrivate(ElastiCacheRequest::DescribeCacheClustersAction, this))
{

}

bool DescribeCacheClustersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheClustersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeCacheClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheClustersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheClustersRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheClustersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheClustersRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheClustersRequest instance.
 */
DescribeCacheClustersRequestPrivate::DescribeCacheClustersRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheClustersRequest * const q)
    : DescribeCacheClustersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheClustersRequest instance.
 */
DescribeCacheClustersRequestPrivate::DescribeCacheClustersRequestPrivate(
    const DescribeCacheClustersRequestPrivate &other, DescribeCacheClustersRequest * const q)
    : DescribeCacheClustersPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
