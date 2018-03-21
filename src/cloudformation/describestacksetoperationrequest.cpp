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

#include "describestacksetoperationrequest.h"
#include "describestacksetoperationrequest_p.h"
#include "describestacksetoperationresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackSetOperationRequest
 *
 * @brief  Implements CloudFormation DescribeStackSetOperation requests.
 *
 * @see    CloudFormationClient::describeStackSetOperation
 */

/**
 * @brief  Constructs a new DescribeStackSetOperationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackSetOperationRequest::DescribeStackSetOperationRequest(const DescribeStackSetOperationRequest &other)
    : CloudFormationRequest(new DescribeStackSetOperationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackSetOperationRequest object.
 */
DescribeStackSetOperationRequest::DescribeStackSetOperationRequest()
    : CloudFormationRequest(new DescribeStackSetOperationRequestPrivate(CloudFormationRequest::DescribeStackSetOperationAction, this))
{

}

bool DescribeStackSetOperationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackSetOperationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackSetOperationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeStackSetOperationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackSetOperationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackSetOperationRequestPrivate
 *
 * @brief  Private implementation for DescribeStackSetOperationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetOperationRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackSetOperationRequest instance.
 */
DescribeStackSetOperationRequestPrivate::DescribeStackSetOperationRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackSetOperationRequest * const q)
    : DescribeStackSetOperationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetOperationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackSetOperationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackSetOperationRequest instance.
 */
DescribeStackSetOperationRequestPrivate::DescribeStackSetOperationRequestPrivate(
    const DescribeStackSetOperationRequestPrivate &other, DescribeStackSetOperationRequest * const q)
    : DescribeStackSetOperationPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
