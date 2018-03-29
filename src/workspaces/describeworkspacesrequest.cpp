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

#include "describeworkspacesrequest.h"
#include "describeworkspacesrequest_p.h"
#include "describeworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspacesRequest
 *
 * @brief  Implements WorkSpaces DescribeWorkspaces requests.
 *
 * @see    WorkSpacesClient::describeWorkspaces
 */

/**
 * @brief  Constructs a new DescribeWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkspacesRequest::DescribeWorkspacesRequest(const DescribeWorkspacesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkspacesRequest object.
 */
DescribeWorkspacesRequest::DescribeWorkspacesRequest()
    : WorkSpacesRequest(new DescribeWorkspacesRequestPrivate(WorkSpacesRequest::DescribeWorkspacesAction, this))
{

}

bool DescribeWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * DescribeWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkspacesRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public DescribeWorkspacesRequest instance.
 */
DescribeWorkspacesRequestPrivate::DescribeWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspacesRequest * const q)
    : DescribeWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkspacesRequest instance.
 */
DescribeWorkspacesRequestPrivate::DescribeWorkspacesRequestPrivate(
    const DescribeWorkspacesRequestPrivate &other, DescribeWorkspacesRequest * const q)
    : DescribeWorkspacesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS
