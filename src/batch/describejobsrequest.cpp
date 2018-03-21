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

#include "describejobsrequest.h"
#include "describejobsrequest_p.h"
#include "describejobsresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  DescribeJobsRequest
 *
 * @brief  Implements Batch DescribeJobs requests.
 *
 * @see    BatchClient::describeJobs
 */

/**
 * @brief  Constructs a new DescribeJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobsRequest::DescribeJobsRequest(const DescribeJobsRequest &other)
    : BatchRequest(new DescribeJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobsRequest object.
 */
DescribeJobsRequest::DescribeJobsRequest()
    : BatchRequest(new DescribeJobsRequestPrivate(BatchRequest::DescribeJobsAction, this))
{

}

bool DescribeJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * DescribeJobsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobsRequestPrivate
 *
 * @brief  Private implementation for DescribeJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobsRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DescribeJobsRequest instance.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const BatchRequest::Action action, DescribeJobsRequest * const q)
    : DescribeJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobsRequest instance.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const DescribeJobsRequestPrivate &other, DescribeJobsRequest * const q)
    : DescribeJobsPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
