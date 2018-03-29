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

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/**
 * @class  UpdateProjectRequest
 *
 * @brief  Implements CodeStar UpdateProject requests.
 *
 * @see    CodeStarClient::updateProject
 */

/**
 * @brief  Constructs a new UpdateProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : CodeStarRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : CodeStarRequest(new UpdateProjectRequestPrivate(CodeStarRequest::UpdateProjectAction, this))
{

}

bool UpdateProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * UpdateProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProjectRequestPrivate
 *
 * @brief  Private implementation for UpdateProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProjectRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public UpdateProjectRequest instance.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const CodeStarRequest::Action action, UpdateProjectRequest * const q)
    : UpdateProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProjectRequest instance.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const UpdateProjectRequestPrivate &other, UpdateProjectRequest * const q)
    : UpdateProjectPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
