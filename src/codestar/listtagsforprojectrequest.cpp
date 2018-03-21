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

#include "listtagsforprojectrequest.h"
#include "listtagsforprojectrequest_p.h"
#include "listtagsforprojectresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  ListTagsForProjectRequest
 *
 * @brief  Implements CodeStar ListTagsForProject requests.
 *
 * @see    CodeStarClient::listTagsForProject
 */

/**
 * @brief  Constructs a new ListTagsForProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForProjectRequest::ListTagsForProjectRequest(const ListTagsForProjectRequest &other)
    : CodeStarRequest(new ListTagsForProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForProjectRequest object.
 */
ListTagsForProjectRequest::ListTagsForProjectRequest()
    : CodeStarRequest(new ListTagsForProjectRequestPrivate(CodeStarRequest::ListTagsForProjectAction, this))
{

}

bool ListTagsForProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * ListTagsForProjectRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForProjectRequestPrivate
 *
 * @brief  Private implementation for ListTagsForProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForProjectRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public ListTagsForProjectRequest instance.
 */
ListTagsForProjectRequestPrivate::ListTagsForProjectRequestPrivate(
    const CodeStarRequest::Action action, ListTagsForProjectRequest * const q)
    : ListTagsForProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForProjectRequest instance.
 */
ListTagsForProjectRequestPrivate::ListTagsForProjectRequestPrivate(
    const ListTagsForProjectRequestPrivate &other, ListTagsForProjectRequest * const q)
    : ListTagsForProjectPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace AWS
