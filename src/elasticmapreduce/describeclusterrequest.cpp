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

#include "describeclusterrequest.h"
#include "describeclusterrequest_p.h"
#include "describeclusterresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  DescribeClusterRequest
 *
 * @brief  Implements EMR DescribeCluster requests.
 *
 * @see    EMRClient::describeCluster
 */

/**
 * @brief  Constructs a new DescribeClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterRequest::DescribeClusterRequest(const DescribeClusterRequest &other)
    : EMRRequest(new DescribeClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterRequest object.
 */
DescribeClusterRequest::DescribeClusterRequest()
    : EMRRequest(new DescribeClusterRequestPrivate(EMRRequest::DescribeClusterAction, this))
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
 * @see  EMRClient::send
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
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public DescribeClusterRequest instance.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const EMRRequest::Action action, DescribeClusterRequest * const q)
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

} // namespace EMR
} // namespace AWS
