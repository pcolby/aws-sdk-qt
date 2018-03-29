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

#include "attachtoindexrequest.h"
#include "attachtoindexrequest_p.h"
#include "attachtoindexresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  AttachToIndexRequest
 *
 * @brief  Implements CloudDirectory AttachToIndex requests.
 *
 * @see    CloudDirectoryClient::attachToIndex
 */

/**
 * @brief  Constructs a new AttachToIndexRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachToIndexRequest::AttachToIndexRequest(const AttachToIndexRequest &other)
    : CloudDirectoryRequest(new AttachToIndexRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachToIndexRequest object.
 */
AttachToIndexRequest::AttachToIndexRequest()
    : CloudDirectoryRequest(new AttachToIndexRequestPrivate(CloudDirectoryRequest::AttachToIndexAction, this))
{

}

bool AttachToIndexRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachToIndexResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachToIndexResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * AttachToIndexRequest::response(QNetworkReply * const reply) const
{
    return new AttachToIndexResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachToIndexRequestPrivate
 *
 * @brief  Private implementation for AttachToIndexRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachToIndexRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AttachToIndexRequest instance.
 */
AttachToIndexRequestPrivate::AttachToIndexRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachToIndexRequest * const q)
    : AttachToIndexPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachToIndexRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachToIndexRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachToIndexRequest instance.
 */
AttachToIndexRequestPrivate::AttachToIndexRequestPrivate(
    const AttachToIndexRequestPrivate &other, AttachToIndexRequest * const q)
    : AttachToIndexPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
