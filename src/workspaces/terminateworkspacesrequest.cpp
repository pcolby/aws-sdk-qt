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

#include "terminateworkspacesrequest.h"
#include "terminateworkspacesrequest_p.h"
#include "terminateworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  TerminateWorkspacesRequest
 *
 * @brief  Implements WorkSpaces TerminateWorkspaces requests.
 *
 * @see    WorkSpacesClient::terminateWorkspaces
 */

/**
 * @brief  Constructs a new TerminateWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateWorkspacesResponse::TerminateWorkspacesResponse(

/**
 * @brief  Constructs a new TerminateWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateWorkspacesRequest::TerminateWorkspacesRequest(const TerminateWorkspacesRequest &other)
    : WorkSpacesRequest(new TerminateWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateWorkspacesRequest object.
 */
TerminateWorkspacesRequest::TerminateWorkspacesRequest()
    : WorkSpacesRequest(new TerminateWorkspacesRequestPrivate(WorkSpacesRequest::TerminateWorkspacesAction, this))
{

}

bool TerminateWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * TerminateWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateWorkspacesRequestPrivate
 *
 * @brief  Private implementation for TerminateWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public TerminateWorkspacesRequest instance.
 */
TerminateWorkspacesRequestPrivate::TerminateWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, TerminateWorkspacesRequest * const q)
    : TerminateWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateWorkspacesRequest instance.
 */
TerminateWorkspacesRequestPrivate::TerminateWorkspacesRequestPrivate(
    const TerminateWorkspacesRequestPrivate &other, TerminateWorkspacesRequest * const q)
    : TerminateWorkspacesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS
