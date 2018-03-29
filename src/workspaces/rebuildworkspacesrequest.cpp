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

#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesrequest_p.h"
#include "rebuildworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  RebuildWorkspacesRequest
 *
 * @brief  Implements WorkSpaces RebuildWorkspaces requests.
 *
 * @see    WorkSpacesClient::rebuildWorkspaces
 */

/**
 * @brief  Constructs a new RebuildWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebuildWorkspacesRequest::RebuildWorkspacesRequest(const RebuildWorkspacesRequest &other)
    : WorkSpacesRequest(new RebuildWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebuildWorkspacesRequest object.
 */
RebuildWorkspacesRequest::RebuildWorkspacesRequest()
    : WorkSpacesRequest(new RebuildWorkspacesRequestPrivate(WorkSpacesRequest::RebuildWorkspacesAction, this))
{

}

bool RebuildWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebuildWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebuildWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * RebuildWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new RebuildWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebuildWorkspacesRequestPrivate
 *
 * @brief  Private implementation for RebuildWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebuildWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public RebuildWorkspacesRequest instance.
 */
RebuildWorkspacesRequestPrivate::RebuildWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, RebuildWorkspacesRequest * const q)
    : RebuildWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebuildWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebuildWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebuildWorkspacesRequest instance.
 */
RebuildWorkspacesRequestPrivate::RebuildWorkspacesRequestPrivate(
    const RebuildWorkspacesRequestPrivate &other, RebuildWorkspacesRequest * const q)
    : RebuildWorkspacesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS
