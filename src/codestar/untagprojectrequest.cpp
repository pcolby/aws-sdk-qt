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

#include "untagprojectrequest.h"
#include "untagprojectrequest_p.h"
#include "untagprojectresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  UntagProjectRequest
 *
 * @brief  Implements CodeStar UntagProject requests.
 *
 * @see    CodeStarClient::untagProject
 */

/**
 * @brief  Constructs a new UntagProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagProjectResponse::UntagProjectResponse(

/**
 * @brief  Constructs a new UntagProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagProjectRequest::UntagProjectRequest(const UntagProjectRequest &other)
    : CodeStarRequest(new UntagProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagProjectRequest object.
 */
UntagProjectRequest::UntagProjectRequest()
    : CodeStarRequest(new UntagProjectRequestPrivate(CodeStarRequest::UntagProjectAction, this))
{

}

bool UntagProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * UntagProjectRequest::response(QNetworkReply * const reply) const
{
    return new UntagProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagProjectRequestPrivate
 *
 * @brief  Private implementation for UntagProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagProjectRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public UntagProjectRequest instance.
 */
UntagProjectRequestPrivate::UntagProjectRequestPrivate(
    const CodeStarRequest::Action action, UntagProjectRequest * const q)
    : UntagProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagProjectRequest instance.
 */
UntagProjectRequestPrivate::UntagProjectRequestPrivate(
    const UntagProjectRequestPrivate &other, UntagProjectRequest * const q)
    : UntagProjectPrivate(other, q)
{

}
