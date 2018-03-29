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

#include "listobjectattributesrequest.h"
#include "listobjectattributesrequest_p.h"
#include "listobjectattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListObjectAttributesRequest
 *
 * @brief  Implements CloudDirectory ListObjectAttributes requests.
 *
 * @see    CloudDirectoryClient::listObjectAttributes
 */

/**
 * @brief  Constructs a new ListObjectAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectAttributesRequest::ListObjectAttributesRequest(const ListObjectAttributesRequest &other)
    : CloudDirectoryRequest(new ListObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectAttributesRequest object.
 */
ListObjectAttributesRequest::ListObjectAttributesRequest()
    : CloudDirectoryRequest(new ListObjectAttributesRequestPrivate(CloudDirectoryRequest::ListObjectAttributesAction, this))
{

}

bool ListObjectAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectAttributesRequestPrivate
 *
 * @brief  Private implementation for ListObjectAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectAttributesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListObjectAttributesRequest instance.
 */
ListObjectAttributesRequestPrivate::ListObjectAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectAttributesRequest * const q)
    : ListObjectAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectAttributesRequest instance.
 */
ListObjectAttributesRequestPrivate::ListObjectAttributesRequestPrivate(
    const ListObjectAttributesRequestPrivate &other, ListObjectAttributesRequest * const q)
    : ListObjectAttributesPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
