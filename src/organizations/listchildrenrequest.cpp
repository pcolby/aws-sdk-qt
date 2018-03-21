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

#include "listchildrenrequest.h"
#include "listchildrenrequest_p.h"
#include "listchildrenresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListChildrenRequest
 *
 * @brief  Implements Organizations ListChildren requests.
 *
 * @see    OrganizationsClient::listChildren
 */

/**
 * @brief  Constructs a new ListChildrenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListChildrenResponse::ListChildrenResponse(

/**
 * @brief  Constructs a new ListChildrenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListChildrenRequest::ListChildrenRequest(const ListChildrenRequest &other)
    : OrganizationsRequest(new ListChildrenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListChildrenRequest object.
 */
ListChildrenRequest::ListChildrenRequest()
    : OrganizationsRequest(new ListChildrenRequestPrivate(OrganizationsRequest::ListChildrenAction, this))
{

}

bool ListChildrenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListChildrenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListChildrenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListChildrenRequest::response(QNetworkReply * const reply) const
{
    return new ListChildrenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListChildrenRequestPrivate
 *
 * @brief  Private implementation for ListChildrenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChildrenRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListChildrenRequest instance.
 */
ListChildrenRequestPrivate::ListChildrenRequestPrivate(
    const OrganizationsRequest::Action action, ListChildrenRequest * const q)
    : ListChildrenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListChildrenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListChildrenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListChildrenRequest instance.
 */
ListChildrenRequestPrivate::ListChildrenRequestPrivate(
    const ListChildrenRequestPrivate &other, ListChildrenRequest * const q)
    : ListChildrenPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
