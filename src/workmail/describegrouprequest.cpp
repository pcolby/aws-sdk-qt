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

#include "describegrouprequest.h"
#include "describegrouprequest_p.h"
#include "describegroupresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DescribeGroupRequest
 *
 * @brief  Implements WorkMail DescribeGroup requests.
 *
 * @see    WorkMailClient::describeGroup
 */

/**
 * @brief  Constructs a new DescribeGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGroupRequest::DescribeGroupRequest(const DescribeGroupRequest &other)
    : WorkMailRequest(new DescribeGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGroupRequest object.
 */
DescribeGroupRequest::DescribeGroupRequest()
    : WorkMailRequest(new DescribeGroupRequestPrivate(WorkMailRequest::DescribeGroupAction, this))
{

}

bool DescribeGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DescribeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGroupRequestPrivate
 *
 * @brief  Private implementation for DescribeGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DescribeGroupRequest instance.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const WorkMailRequest::Action action, DescribeGroupRequest * const q)
    : DescribeGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGroupRequest instance.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const DescribeGroupRequestPrivate &other, DescribeGroupRequest * const q)
    : DescribeGroupPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS
