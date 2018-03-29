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

#include "invalidateprojectcacherequest.h"
#include "invalidateprojectcacherequest_p.h"
#include "invalidateprojectcacheresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/**
 * @class  InvalidateProjectCacheRequest
 *
 * @brief  Implements CodeBuild InvalidateProjectCache requests.
 *
 * @see    CodeBuildClient::invalidateProjectCache
 */

/**
 * @brief  Constructs a new InvalidateProjectCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InvalidateProjectCacheRequest::InvalidateProjectCacheRequest(const InvalidateProjectCacheRequest &other)
    : CodeBuildRequest(new InvalidateProjectCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InvalidateProjectCacheRequest object.
 */
InvalidateProjectCacheRequest::InvalidateProjectCacheRequest()
    : CodeBuildRequest(new InvalidateProjectCacheRequestPrivate(CodeBuildRequest::InvalidateProjectCacheAction, this))
{

}

bool InvalidateProjectCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InvalidateProjectCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InvalidateProjectCacheResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
QtAws::Core::AwsAbstractResponse * InvalidateProjectCacheRequest::response(QNetworkReply * const reply) const
{
    return new InvalidateProjectCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InvalidateProjectCacheRequestPrivate
 *
 * @brief  Private implementation for InvalidateProjectCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InvalidateProjectCacheRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public InvalidateProjectCacheRequest instance.
 */
InvalidateProjectCacheRequestPrivate::InvalidateProjectCacheRequestPrivate(
    const CodeBuildRequest::Action action, InvalidateProjectCacheRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InvalidateProjectCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InvalidateProjectCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InvalidateProjectCacheRequest instance.
 */
InvalidateProjectCacheRequestPrivate::InvalidateProjectCacheRequestPrivate(
    const InvalidateProjectCacheRequestPrivate &other, InvalidateProjectCacheRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
