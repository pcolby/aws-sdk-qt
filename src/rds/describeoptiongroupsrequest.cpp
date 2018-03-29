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

#include "describeoptiongroupsrequest.h"
#include "describeoptiongroupsrequest_p.h"
#include "describeoptiongroupsresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeOptionGroupsRequest
 *
 * @brief  Implements RDS DescribeOptionGroups requests.
 *
 * @see    RDSClient::describeOptionGroups
 */

/**
 * @brief  Constructs a new DescribeOptionGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOptionGroupsRequest::DescribeOptionGroupsRequest(const DescribeOptionGroupsRequest &other)
    : RDSRequest(new DescribeOptionGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOptionGroupsRequest object.
 */
DescribeOptionGroupsRequest::DescribeOptionGroupsRequest()
    : RDSRequest(new DescribeOptionGroupsRequestPrivate(RDSRequest::DescribeOptionGroupsAction, this))
{

}

bool DescribeOptionGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOptionGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOptionGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOptionGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOptionGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOptionGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeOptionGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeOptionGroupsRequest instance.
 */
DescribeOptionGroupsRequestPrivate::DescribeOptionGroupsRequestPrivate(
    const RDSRequest::Action action, DescribeOptionGroupsRequest * const q)
    : DescribeOptionGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOptionGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOptionGroupsRequest instance.
 */
DescribeOptionGroupsRequestPrivate::DescribeOptionGroupsRequestPrivate(
    const DescribeOptionGroupsRequestPrivate &other, DescribeOptionGroupsRequest * const q)
    : DescribeOptionGroupsPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
