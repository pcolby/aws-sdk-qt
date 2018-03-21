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

#include "listobjectparentsrequest.h"
#include "listobjectparentsrequest_p.h"
#include "listobjectparentsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListObjectParentsRequest
 *
 * @brief  Implements CloudDirectory ListObjectParents requests.
 *
 * @see    CloudDirectoryClient::listObjectParents
 */

/**
 * @brief  Constructs a new ListObjectParentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectParentsResponse::ListObjectParentsResponse(

/**
 * @brief  Constructs a new ListObjectParentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectParentsRequest::ListObjectParentsRequest(const ListObjectParentsRequest &other)
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectParentsRequest object.
 */
ListObjectParentsRequest::ListObjectParentsRequest()
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(CloudDirectoryRequest::ListObjectParentsAction, this))
{

}

bool ListObjectParentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectParentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectParentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListObjectParentsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectParentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectParentsRequestPrivate
 *
 * @brief  Private implementation for ListObjectParentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectParentsRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListObjectParentsRequest instance.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectParentsRequest * const q)
    : ListObjectParentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectParentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectParentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectParentsRequest instance.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const ListObjectParentsRequestPrivate &other, ListObjectParentsRequest * const q)
    : ListObjectParentsPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
