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

#include "describeclusterrequest.h"
#include "describeclusterrequest_p.h"
#include "describeclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  DescribeClusterRequest
 *
 * @brief  Implements Snowball DescribeCluster requests.
 *
 * @see    SnowballClient::describeCluster
 */

/**
 * @brief  Constructs a new DescribeClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterRequest::DescribeClusterRequest(const DescribeClusterRequest &other)
    : SnowballRequest(new DescribeClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterRequest object.
 */
DescribeClusterRequest::DescribeClusterRequest()
    : SnowballRequest(new DescribeClusterRequestPrivate(SnowballRequest::DescribeClusterAction, this))
{

}

bool DescribeClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * DescribeClusterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public DescribeClusterRequest instance.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const SnowballRequest::Action action, DescribeClusterRequest * const q)
    : DescribeClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterRequest instance.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const DescribeClusterRequestPrivate &other, DescribeClusterRequest * const q)
    : DescribeClusterPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
