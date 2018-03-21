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

#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesrequest_p.h"
#include "describeworkspacedirectoriesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspaceDirectoriesRequest
 *
 * @brief  Implements WorkSpaces DescribeWorkspaceDirectories requests.
 *
 * @see    WorkSpacesClient::describeWorkspaceDirectories
 */

/**
 * @brief  Constructs a new DescribeWorkspaceDirectoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspaceDirectoriesResponse::DescribeWorkspaceDirectoriesResponse(

/**
 * @brief  Constructs a new DescribeWorkspaceDirectoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest(const DescribeWorkspaceDirectoriesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkspaceDirectoriesRequest object.
 */
DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest()
    : WorkSpacesRequest(new DescribeWorkspaceDirectoriesRequestPrivate(WorkSpacesRequest::DescribeWorkspaceDirectoriesAction, this))
{

}

bool DescribeWorkspaceDirectoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkspaceDirectoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkspaceDirectoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * DescribeWorkspaceDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceDirectoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkspaceDirectoriesRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkspaceDirectoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceDirectoriesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public DescribeWorkspaceDirectoriesRequest instance.
 */
DescribeWorkspaceDirectoriesRequestPrivate::DescribeWorkspaceDirectoriesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceDirectoriesRequest * const q)
    : DescribeWorkspaceDirectoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceDirectoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceDirectoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkspaceDirectoriesRequest instance.
 */
DescribeWorkspaceDirectoriesRequestPrivate::DescribeWorkspaceDirectoriesRequestPrivate(
    const DescribeWorkspaceDirectoriesRequestPrivate &other, DescribeWorkspaceDirectoriesRequest * const q)
    : DescribeWorkspaceDirectoriesPrivate(other, q)
{

}
