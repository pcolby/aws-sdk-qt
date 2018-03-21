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

#include "describestacksetrequest.h"
#include "describestacksetrequest_p.h"
#include "describestacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackSetRequest
 *
 * @brief  Implements CloudFormation DescribeStackSet requests.
 *
 * @see    CloudFormationClient::describeStackSet
 */

/**
 * @brief  Constructs a new DescribeStackSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackSetRequest::DescribeStackSetRequest(const DescribeStackSetRequest &other)
    : CloudFormationRequest(new DescribeStackSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackSetRequest object.
 */
DescribeStackSetRequest::DescribeStackSetRequest()
    : CloudFormationRequest(new DescribeStackSetRequestPrivate(CloudFormationRequest::DescribeStackSetAction, this))
{

}

bool DescribeStackSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeStackSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackSetRequestPrivate
 *
 * @brief  Private implementation for DescribeStackSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackSetRequest instance.
 */
DescribeStackSetRequestPrivate::DescribeStackSetRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackSetRequest * const q)
    : DescribeStackSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackSetRequest instance.
 */
DescribeStackSetRequestPrivate::DescribeStackSetRequestPrivate(
    const DescribeStackSetRequestPrivate &other, DescribeStackSetRequest * const q)
    : DescribeStackSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
