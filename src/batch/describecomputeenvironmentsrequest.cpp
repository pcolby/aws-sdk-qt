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

#include "describecomputeenvironmentsrequest.h"
#include "describecomputeenvironmentsrequest_p.h"
#include "describecomputeenvironmentsresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/**
 * @class  DescribeComputeEnvironmentsRequest
 *
 * @brief  Implements Batch DescribeComputeEnvironments requests.
 *
 * @see    BatchClient::describeComputeEnvironments
 */

/**
 * @brief  Constructs a new DescribeComputeEnvironmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest(const DescribeComputeEnvironmentsRequest &other)
    : BatchRequest(new DescribeComputeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeComputeEnvironmentsRequest object.
 */
DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest()
    : BatchRequest(new DescribeComputeEnvironmentsRequestPrivate(BatchRequest::DescribeComputeEnvironmentsAction, this))
{

}

bool DescribeComputeEnvironmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeComputeEnvironmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeComputeEnvironmentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeComputeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComputeEnvironmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeComputeEnvironmentsRequestPrivate
 *
 * @brief  Private implementation for DescribeComputeEnvironmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComputeEnvironmentsRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DescribeComputeEnvironmentsRequest instance.
 */
DescribeComputeEnvironmentsRequestPrivate::DescribeComputeEnvironmentsRequestPrivate(
    const BatchRequest::Action action, DescribeComputeEnvironmentsRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComputeEnvironmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeComputeEnvironmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeComputeEnvironmentsRequest instance.
 */
DescribeComputeEnvironmentsRequestPrivate::DescribeComputeEnvironmentsRequestPrivate(
    const DescribeComputeEnvironmentsRequestPrivate &other, DescribeComputeEnvironmentsRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
