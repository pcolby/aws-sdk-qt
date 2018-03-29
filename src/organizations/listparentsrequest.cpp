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

#include "listparentsrequest.h"
#include "listparentsrequest_p.h"
#include "listparentsresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListParentsRequest
 *
 * @brief  Implements Organizations ListParents requests.
 *
 * @see    OrganizationsClient::listParents
 */

/**
 * @brief  Constructs a new ListParentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListParentsRequest::ListParentsRequest(const ListParentsRequest &other)
    : OrganizationsRequest(new ListParentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListParentsRequest object.
 */
ListParentsRequest::ListParentsRequest()
    : OrganizationsRequest(new ListParentsRequestPrivate(OrganizationsRequest::ListParentsAction, this))
{

}

bool ListParentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListParentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListParentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListParentsRequest::response(QNetworkReply * const reply) const
{
    return new ListParentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListParentsRequestPrivate
 *
 * @brief  Private implementation for ListParentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListParentsRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListParentsRequest instance.
 */
ListParentsRequestPrivate::ListParentsRequestPrivate(
    const OrganizationsRequest::Action action, ListParentsRequest * const q)
    : ListParentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListParentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListParentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListParentsRequest instance.
 */
ListParentsRequestPrivate::ListParentsRequestPrivate(
    const ListParentsRequestPrivate &other, ListParentsRequest * const q)
    : ListParentsPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
