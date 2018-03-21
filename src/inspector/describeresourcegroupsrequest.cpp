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

#include "describeresourcegroupsrequest.h"
#include "describeresourcegroupsrequest_p.h"
#include "describeresourcegroupsresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeResourceGroupsRequest
 *
 * @brief  Implements Inspector DescribeResourceGroups requests.
 *
 * @see    InspectorClient::describeResourceGroups
 */

/**
 * @brief  Constructs a new DescribeResourceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeResourceGroupsRequest::DescribeResourceGroupsRequest(const DescribeResourceGroupsRequest &other)
    : InspectorRequest(new DescribeResourceGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeResourceGroupsRequest object.
 */
DescribeResourceGroupsRequest::DescribeResourceGroupsRequest()
    : InspectorRequest(new DescribeResourceGroupsRequestPrivate(InspectorRequest::DescribeResourceGroupsAction, this))
{

}

bool DescribeResourceGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeResourceGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeResourceGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DescribeResourceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeResourceGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeResourceGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceGroupsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeResourceGroupsRequest instance.
 */
DescribeResourceGroupsRequestPrivate::DescribeResourceGroupsRequestPrivate(
    const InspectorRequest::Action action, DescribeResourceGroupsRequest * const q)
    : DescribeResourceGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeResourceGroupsRequest instance.
 */
DescribeResourceGroupsRequestPrivate::DescribeResourceGroupsRequestPrivate(
    const DescribeResourceGroupsRequestPrivate &other, DescribeResourceGroupsRequest * const q)
    : DescribeResourceGroupsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
