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

#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsrequest_p.h"
#include "describesubnetgroupsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  DescribeSubnetGroupsRequest
 *
 * @brief  Implements DAX DescribeSubnetGroups requests.
 *
 * @see    DAXClient::describeSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeSubnetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest(const DescribeSubnetGroupsRequest &other)
    : DAXRequest(new DescribeSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSubnetGroupsRequest object.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest()
    : DAXRequest(new DescribeSubnetGroupsRequestPrivate(DAXRequest::DescribeSubnetGroupsAction, this))
{

}

bool DescribeSubnetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSubnetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSubnetGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubnetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSubnetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeSubnetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetGroupsRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DescribeSubnetGroupsRequest instance.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DAXRequest::Action action, DescribeSubnetGroupsRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubnetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSubnetGroupsRequest instance.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DescribeSubnetGroupsRequestPrivate &other, DescribeSubnetGroupsRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
