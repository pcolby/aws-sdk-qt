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

#include "listfacetnamesrequest.h"
#include "listfacetnamesrequest_p.h"
#include "listfacetnamesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListFacetNamesRequest
 *
 * @brief  Implements CloudDirectory ListFacetNames requests.
 *
 * @see    CloudDirectoryClient::listFacetNames
 */

/**
 * @brief  Constructs a new ListFacetNamesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFacetNamesRequest::ListFacetNamesRequest(const ListFacetNamesRequest &other)
    : CloudDirectoryRequest(new ListFacetNamesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFacetNamesRequest object.
 */
ListFacetNamesRequest::ListFacetNamesRequest()
    : CloudDirectoryRequest(new ListFacetNamesRequestPrivate(CloudDirectoryRequest::ListFacetNamesAction, this))
{

}

bool ListFacetNamesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFacetNamesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFacetNamesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListFacetNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListFacetNamesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFacetNamesRequestPrivate
 *
 * @brief  Private implementation for ListFacetNamesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFacetNamesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListFacetNamesRequest instance.
 */
ListFacetNamesRequestPrivate::ListFacetNamesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListFacetNamesRequest * const q)
    : ListFacetNamesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFacetNamesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFacetNamesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFacetNamesRequest instance.
 */
ListFacetNamesRequestPrivate::ListFacetNamesRequestPrivate(
    const ListFacetNamesRequestPrivate &other, ListFacetNamesRequest * const q)
    : ListFacetNamesPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
