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

#include "describeenginedefaultparametersrequest.h"
#include "describeenginedefaultparametersrequest_p.h"
#include "describeenginedefaultparametersresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeEngineDefaultParametersRequest
 *
 * @brief  Implements ElastiCache DescribeEngineDefaultParameters requests.
 *
 * @see    ElastiCacheClient::describeEngineDefaultParameters
 */

/**
 * @brief  Constructs a new DescribeEngineDefaultParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEngineDefaultParametersResponse::DescribeEngineDefaultParametersResponse(

/**
 * @brief  Constructs a new DescribeEngineDefaultParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEngineDefaultParametersRequest::DescribeEngineDefaultParametersRequest(const DescribeEngineDefaultParametersRequest &other)
    : ElastiCacheRequest(new DescribeEngineDefaultParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEngineDefaultParametersRequest object.
 */
DescribeEngineDefaultParametersRequest::DescribeEngineDefaultParametersRequest()
    : ElastiCacheRequest(new DescribeEngineDefaultParametersRequestPrivate(ElastiCacheRequest::DescribeEngineDefaultParametersAction, this))
{

}

bool DescribeEngineDefaultParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEngineDefaultParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEngineDefaultParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeEngineDefaultParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngineDefaultParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEngineDefaultParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeEngineDefaultParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultParametersRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeEngineDefaultParametersRequest instance.
 */
DescribeEngineDefaultParametersRequestPrivate::DescribeEngineDefaultParametersRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeEngineDefaultParametersRequest * const q)
    : DescribeEngineDefaultParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngineDefaultParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEngineDefaultParametersRequest instance.
 */
DescribeEngineDefaultParametersRequestPrivate::DescribeEngineDefaultParametersRequestPrivate(
    const DescribeEngineDefaultParametersRequestPrivate &other, DescribeEngineDefaultParametersRequest * const q)
    : DescribeEngineDefaultParametersPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
