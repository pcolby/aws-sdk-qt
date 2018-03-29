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

#include "describeobjectsrequest.h"
#include "describeobjectsrequest_p.h"
#include "describeobjectsresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  DescribeObjectsRequest
 *
 * @brief  Implements DataPipeline DescribeObjects requests.
 *
 * @see    DataPipelineClient::describeObjects
 */

/**
 * @brief  Constructs a new DescribeObjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeObjectsRequest::DescribeObjectsRequest(const DescribeObjectsRequest &other)
    : DataPipelineRequest(new DescribeObjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeObjectsRequest object.
 */
DescribeObjectsRequest::DescribeObjectsRequest()
    : DataPipelineRequest(new DescribeObjectsRequestPrivate(DataPipelineRequest::DescribeObjectsAction, this))
{

}

bool DescribeObjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeObjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeObjectsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * DescribeObjectsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeObjectsRequestPrivate
 *
 * @brief  Private implementation for DescribeObjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectsRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public DescribeObjectsRequest instance.
 */
DescribeObjectsRequestPrivate::DescribeObjectsRequestPrivate(
    const DataPipelineRequest::Action action, DescribeObjectsRequest * const q)
    : DescribeObjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeObjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeObjectsRequest instance.
 */
DescribeObjectsRequestPrivate::DescribeObjectsRequestPrivate(
    const DescribeObjectsRequestPrivate &other, DescribeObjectsRequest * const q)
    : DescribeObjectsPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS
