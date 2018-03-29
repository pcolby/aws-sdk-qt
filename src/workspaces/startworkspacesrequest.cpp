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

#include "startworkspacesrequest.h"
#include "startworkspacesrequest_p.h"
#include "startworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  StartWorkspacesRequest
 *
 * @brief  Implements WorkSpaces StartWorkspaces requests.
 *
 * @see    WorkSpacesClient::startWorkspaces
 */

/**
 * @brief  Constructs a new StartWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartWorkspacesRequest::StartWorkspacesRequest(const StartWorkspacesRequest &other)
    : WorkSpacesRequest(new StartWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartWorkspacesRequest object.
 */
StartWorkspacesRequest::StartWorkspacesRequest()
    : WorkSpacesRequest(new StartWorkspacesRequestPrivate(WorkSpacesRequest::StartWorkspacesAction, this))
{

}

bool StartWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * StartWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new StartWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartWorkspacesRequestPrivate
 *
 * @brief  Private implementation for StartWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public StartWorkspacesRequest instance.
 */
StartWorkspacesRequestPrivate::StartWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, StartWorkspacesRequest * const q)
    : StartWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartWorkspacesRequest instance.
 */
StartWorkspacesRequestPrivate::StartWorkspacesRequestPrivate(
    const StartWorkspacesRequestPrivate &other, StartWorkspacesRequest * const q)
    : StartWorkspacesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
