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

#include "describeenvironmentmembershipsrequest.h"
#include "describeenvironmentmembershipsrequest_p.h"
#include "describeenvironmentmembershipsresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  DescribeEnvironmentMembershipsRequest
 *
 * @brief  Implements Cloud9 DescribeEnvironmentMemberships requests.
 *
 * @see    Cloud9Client::describeEnvironmentMemberships
 */

/**
 * @brief  Constructs a new DescribeEnvironmentMembershipsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentMembershipsRequest::DescribeEnvironmentMembershipsRequest(const DescribeEnvironmentMembershipsRequest &other)
    : Cloud9Request(new DescribeEnvironmentMembershipsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentMembershipsRequest object.
 */
DescribeEnvironmentMembershipsRequest::DescribeEnvironmentMembershipsRequest()
    : Cloud9Request(new DescribeEnvironmentMembershipsRequestPrivate(Cloud9Request::DescribeEnvironmentMembershipsAction, this))
{

}

bool DescribeEnvironmentMembershipsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentMembershipsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentMembershipsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * DescribeEnvironmentMembershipsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentMembershipsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentMembershipsRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentMembershipsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentMembershipsRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentMembershipsRequest instance.
 */
DescribeEnvironmentMembershipsRequestPrivate::DescribeEnvironmentMembershipsRequestPrivate(
    const Cloud9Request::Action action, DescribeEnvironmentMembershipsRequest * const q)
    : DescribeEnvironmentMembershipsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentMembershipsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentMembershipsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentMembershipsRequest instance.
 */
DescribeEnvironmentMembershipsRequestPrivate::DescribeEnvironmentMembershipsRequestPrivate(
    const DescribeEnvironmentMembershipsRequestPrivate &other, DescribeEnvironmentMembershipsRequest * const q)
    : DescribeEnvironmentMembershipsPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
