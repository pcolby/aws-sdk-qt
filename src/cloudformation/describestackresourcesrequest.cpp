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

#include "describestackresourcesrequest.h"
#include "describestackresourcesrequest_p.h"
#include "describestackresourcesresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackResourcesRequest
 *
 * @brief  Implements CloudFormation DescribeStackResources requests.
 *
 * @see    CloudFormationClient::describeStackResources
 */

/**
 * @brief  Constructs a new DescribeStackResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackResourcesRequest::DescribeStackResourcesRequest(const DescribeStackResourcesRequest &other)
    : CloudFormationRequest(new DescribeStackResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackResourcesRequest object.
 */
DescribeStackResourcesRequest::DescribeStackResourcesRequest()
    : CloudFormationRequest(new DescribeStackResourcesRequestPrivate(CloudFormationRequest::DescribeStackResourcesAction, this))
{

}

bool DescribeStackResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeStackResourcesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackResourcesRequestPrivate
 *
 * @brief  Private implementation for DescribeStackResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourcesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackResourcesRequest instance.
 */
DescribeStackResourcesRequestPrivate::DescribeStackResourcesRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackResourcesRequest * const q)
    : DescribeStackResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackResourcesRequest instance.
 */
DescribeStackResourcesRequestPrivate::DescribeStackResourcesRequestPrivate(
    const DescribeStackResourcesRequestPrivate &other, DescribeStackResourcesRequest * const q)
    : DescribeStackResourcesPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
