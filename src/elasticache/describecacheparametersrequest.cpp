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

#include "describecacheparametersrequest.h"
#include "describecacheparametersrequest_p.h"
#include "describecacheparametersresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheParametersRequest
 *
 * @brief  Implements ElastiCache DescribeCacheParameters requests.
 *
 * @see    ElastiCacheClient::describeCacheParameters
 */

/**
 * @brief  Constructs a new DescribeCacheParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheParametersResponse::DescribeCacheParametersResponse(

/**
 * @brief  Constructs a new DescribeCacheParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheParametersRequest::DescribeCacheParametersRequest(const DescribeCacheParametersRequest &other)
    : ElastiCacheRequest(new DescribeCacheParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheParametersRequest object.
 */
DescribeCacheParametersRequest::DescribeCacheParametersRequest()
    : ElastiCacheRequest(new DescribeCacheParametersRequestPrivate(ElastiCacheRequest::DescribeCacheParametersAction, this))
{

}

bool DescribeCacheParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeCacheParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParametersRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheParametersRequest instance.
 */
DescribeCacheParametersRequestPrivate::DescribeCacheParametersRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheParametersRequest * const q)
    : DescribeCacheParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheParametersRequest instance.
 */
DescribeCacheParametersRequestPrivate::DescribeCacheParametersRequestPrivate(
    const DescribeCacheParametersRequestPrivate &other, DescribeCacheParametersRequest * const q)
    : DescribeCacheParametersPrivate(other, q)
{

}
