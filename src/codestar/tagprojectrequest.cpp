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

#include "tagprojectrequest.h"
#include "tagprojectrequest_p.h"
#include "tagprojectresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/**
 * @class  TagProjectRequest
 *
 * @brief  Implements CodeStar TagProject requests.
 *
 * @see    CodeStarClient::tagProject
 */

/**
 * @brief  Constructs a new TagProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagProjectRequest::TagProjectRequest(const TagProjectRequest &other)
    : CodeStarRequest(new TagProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagProjectRequest object.
 */
TagProjectRequest::TagProjectRequest()
    : CodeStarRequest(new TagProjectRequestPrivate(CodeStarRequest::TagProjectAction, this))
{

}

bool TagProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
QtAws::Core::AwsAbstractResponse * TagProjectRequest::response(QNetworkReply * const reply) const
{
    return new TagProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagProjectRequestPrivate
 *
 * @brief  Private implementation for TagProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagProjectRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public TagProjectRequest instance.
 */
TagProjectRequestPrivate::TagProjectRequestPrivate(
    const CodeStarRequest::Action action, TagProjectRequest * const q)
    : TagProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagProjectRequest instance.
 */
TagProjectRequestPrivate::TagProjectRequestPrivate(
    const TagProjectRequestPrivate &other, TagProjectRequest * const q)
    : TagProjectPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
