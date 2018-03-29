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

#include "listobjectchildrenrequest.h"
#include "listobjectchildrenrequest_p.h"
#include "listobjectchildrenresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListObjectChildrenRequest
 *
 * @brief  Implements CloudDirectory ListObjectChildren requests.
 *
 * @see    CloudDirectoryClient::listObjectChildren
 */

/**
 * @brief  Constructs a new ListObjectChildrenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectChildrenRequest::ListObjectChildrenRequest(const ListObjectChildrenRequest &other)
    : CloudDirectoryRequest(new ListObjectChildrenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectChildrenRequest object.
 */
ListObjectChildrenRequest::ListObjectChildrenRequest()
    : CloudDirectoryRequest(new ListObjectChildrenRequestPrivate(CloudDirectoryRequest::ListObjectChildrenAction, this))
{

}

bool ListObjectChildrenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectChildrenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectChildrenResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectChildrenRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectChildrenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectChildrenRequestPrivate
 *
 * @brief  Private implementation for ListObjectChildrenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectChildrenRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListObjectChildrenRequest instance.
 */
ListObjectChildrenRequestPrivate::ListObjectChildrenRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectChildrenRequest * const q)
    : ListObjectChildrenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectChildrenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectChildrenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectChildrenRequest instance.
 */
ListObjectChildrenRequestPrivate::ListObjectChildrenRequestPrivate(
    const ListObjectChildrenRequestPrivate &other, ListObjectChildrenRequest * const q)
    : ListObjectChildrenPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
