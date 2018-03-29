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

#include "untagrequest.h"
#include "untagrequest_p.h"
#include "untagresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  UntagRequest
 *
 * @brief  Implements ResourceGroups Untag requests.
 *
 * @see    ResourceGroupsClient::untag
 */

/**
 * @brief  Constructs a new UntagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagRequest::UntagRequest(const UntagRequest &other)
    : ResourceGroupsRequest(new UntagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagRequest object.
 */
UntagRequest::UntagRequest()
    : ResourceGroupsRequest(new UntagRequestPrivate(ResourceGroupsRequest::UntagAction, this))
{

}

bool UntagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagRequest::response(QNetworkReply * const reply) const
{
    return new UntagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagRequestPrivate
 *
 * @brief  Private implementation for UntagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public UntagRequest instance.
 */
UntagRequestPrivate::UntagRequestPrivate(
    const ResourceGroupsRequest::Action action, UntagRequest * const q)
    : UntagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagRequest instance.
 */
UntagRequestPrivate::UntagRequestPrivate(
    const UntagRequestPrivate &other, UntagRequest * const q)
    : UntagPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
