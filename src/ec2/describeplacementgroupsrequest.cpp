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

#include "describeplacementgroupsrequest.h"
#include "describeplacementgroupsrequest_p.h"
#include "describeplacementgroupsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribePlacementGroupsRequest
 *
 * @brief  Implements EC2 DescribePlacementGroups requests.
 *
 * @see    EC2Client::describePlacementGroups
 */

/**
 * @brief  Constructs a new DescribePlacementGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePlacementGroupsRequest::DescribePlacementGroupsRequest(const DescribePlacementGroupsRequest &other)
    : EC2Request(new DescribePlacementGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePlacementGroupsRequest object.
 */
DescribePlacementGroupsRequest::DescribePlacementGroupsRequest()
    : EC2Request(new DescribePlacementGroupsRequestPrivate(EC2Request::DescribePlacementGroupsAction, this))
{

}

bool DescribePlacementGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePlacementGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePlacementGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribePlacementGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlacementGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePlacementGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribePlacementGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlacementGroupsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribePlacementGroupsRequest instance.
 */
DescribePlacementGroupsRequestPrivate::DescribePlacementGroupsRequestPrivate(
    const EC2Request::Action action, DescribePlacementGroupsRequest * const q)
    : DescribePlacementGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlacementGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePlacementGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePlacementGroupsRequest instance.
 */
DescribePlacementGroupsRequestPrivate::DescribePlacementGroupsRequestPrivate(
    const DescribePlacementGroupsRequestPrivate &other, DescribePlacementGroupsRequest * const q)
    : DescribePlacementGroupsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
