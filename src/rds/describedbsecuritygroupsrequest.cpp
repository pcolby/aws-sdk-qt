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

#include "describedbsecuritygroupsrequest.h"
#include "describedbsecuritygroupsrequest_p.h"
#include "describedbsecuritygroupsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBSecurityGroupsRequest
 *
 * @brief  Implements RDS DescribeDBSecurityGroups requests.
 *
 * @see    RDSClient::describeDBSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeDBSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBSecurityGroupsResponse::DescribeDBSecurityGroupsResponse(

/**
 * @brief  Constructs a new DescribeDBSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBSecurityGroupsRequest::DescribeDBSecurityGroupsRequest(const DescribeDBSecurityGroupsRequest &other)
    : RDSRequest(new DescribeDBSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBSecurityGroupsRequest object.
 */
DescribeDBSecurityGroupsRequest::DescribeDBSecurityGroupsRequest()
    : RDSRequest(new DescribeDBSecurityGroupsRequestPrivate(RDSRequest::DescribeDBSecurityGroupsAction, this))
{

}

bool DescribeDBSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeDBSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSecurityGroupsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBSecurityGroupsRequest instance.
 */
DescribeDBSecurityGroupsRequestPrivate::DescribeDBSecurityGroupsRequestPrivate(
    const RDSRequest::Action action, DescribeDBSecurityGroupsRequest * const q)
    : DescribeDBSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBSecurityGroupsRequest instance.
 */
DescribeDBSecurityGroupsRequestPrivate::DescribeDBSecurityGroupsRequestPrivate(
    const DescribeDBSecurityGroupsRequestPrivate &other, DescribeDBSecurityGroupsRequest * const q)
    : DescribeDBSecurityGroupsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
