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

#include "describeusersrequest.h"
#include "describeusersrequest_p.h"
#include "describeusersresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeUsersRequest
 *
 * @brief  Implements WorkDocs DescribeUsers requests.
 *
 * @see    WorkDocsClient::describeUsers
 */

/**
 * @brief  Constructs a new DescribeUsersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUsersRequest::DescribeUsersRequest(const DescribeUsersRequest &other)
    : WorkDocsRequest(new DescribeUsersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUsersRequest object.
 */
DescribeUsersRequest::DescribeUsersRequest()
    : WorkDocsRequest(new DescribeUsersRequestPrivate(WorkDocsRequest::DescribeUsersAction, this))
{

}

bool DescribeUsersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUsersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUsersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeUsersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUsersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUsersRequestPrivate
 *
 * @brief  Private implementation for DescribeUsersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUsersRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeUsersRequest instance.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const WorkDocsRequest::Action action, DescribeUsersRequest * const q)
    : DescribeUsersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUsersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUsersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUsersRequest instance.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const DescribeUsersRequestPrivate &other, DescribeUsersRequest * const q)
    : DescribeUsersPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
