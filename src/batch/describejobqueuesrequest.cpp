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

#include "describejobqueuesrequest.h"
#include "describejobqueuesrequest_p.h"
#include "describejobqueuesresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  DescribeJobQueuesRequest
 *
 * @brief  Implements Batch DescribeJobQueues requests.
 *
 * @see    BatchClient::describeJobQueues
 */

/**
 * @brief  Constructs a new DescribeJobQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobQueuesResponse::DescribeJobQueuesResponse(

/**
 * @brief  Constructs a new DescribeJobQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest(const DescribeJobQueuesRequest &other)
    : BatchRequest(new DescribeJobQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobQueuesRequest object.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest()
    : BatchRequest(new DescribeJobQueuesRequestPrivate(BatchRequest::DescribeJobQueuesAction, this))
{

}

bool DescribeJobQueuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * DescribeJobQueuesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobQueuesRequestPrivate
 *
 * @brief  Private implementation for DescribeJobQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobQueuesRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DescribeJobQueuesRequest instance.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const BatchRequest::Action action, DescribeJobQueuesRequest * const q)
    : DescribeJobQueuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobQueuesRequest instance.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const DescribeJobQueuesRequestPrivate &other, DescribeJobQueuesRequest * const q)
    : DescribeJobQueuesPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
