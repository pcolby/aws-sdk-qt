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

#include "listbuildsforprojectrequest.h"
#include "listbuildsforprojectrequest_p.h"
#include "listbuildsforprojectresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  ListBuildsForProjectRequest
 *
 * @brief  Implements CodeBuild ListBuildsForProject requests.
 *
 * @see    CodeBuildClient::listBuildsForProject
 */

/**
 * @brief  Constructs a new ListBuildsForProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBuildsForProjectResponse::ListBuildsForProjectResponse(

/**
 * @brief  Constructs a new ListBuildsForProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBuildsForProjectRequest::ListBuildsForProjectRequest(const ListBuildsForProjectRequest &other)
    : CodeBuildRequest(new ListBuildsForProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBuildsForProjectRequest object.
 */
ListBuildsForProjectRequest::ListBuildsForProjectRequest()
    : CodeBuildRequest(new ListBuildsForProjectRequestPrivate(CodeBuildRequest::ListBuildsForProjectAction, this))
{

}

bool ListBuildsForProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBuildsForProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBuildsForProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * ListBuildsForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildsForProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBuildsForProjectRequestPrivate
 *
 * @brief  Private implementation for ListBuildsForProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsForProjectRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public ListBuildsForProjectRequest instance.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildsForProjectRequest * const q)
    : ListBuildsForProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsForProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBuildsForProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBuildsForProjectRequest instance.
 */
ListBuildsForProjectRequestPrivate::ListBuildsForProjectRequestPrivate(
    const ListBuildsForProjectRequestPrivate &other, ListBuildsForProjectRequest * const q)
    : ListBuildsForProjectPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS
