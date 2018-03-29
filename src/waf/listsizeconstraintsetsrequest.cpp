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

#include "listsizeconstraintsetsrequest.h"
#include "listsizeconstraintsetsrequest_p.h"
#include "listsizeconstraintsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  ListSizeConstraintSetsRequest
 *
 * @brief  Implements WAF ListSizeConstraintSets requests.
 *
 * @see    WAFClient::listSizeConstraintSets
 */

/**
 * @brief  Constructs a new ListSizeConstraintSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSizeConstraintSetsRequest::ListSizeConstraintSetsRequest(const ListSizeConstraintSetsRequest &other)
    : WAFRequest(new ListSizeConstraintSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSizeConstraintSetsRequest object.
 */
ListSizeConstraintSetsRequest::ListSizeConstraintSetsRequest()
    : WAFRequest(new ListSizeConstraintSetsRequestPrivate(WAFRequest::ListSizeConstraintSetsAction, this))
{

}

bool ListSizeConstraintSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSizeConstraintSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSizeConstraintSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListSizeConstraintSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListSizeConstraintSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSizeConstraintSetsRequestPrivate
 *
 * @brief  Private implementation for ListSizeConstraintSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSizeConstraintSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListSizeConstraintSetsRequest instance.
 */
ListSizeConstraintSetsRequestPrivate::ListSizeConstraintSetsRequestPrivate(
    const WAFRequest::Action action, ListSizeConstraintSetsRequest * const q)
    : ListSizeConstraintSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSizeConstraintSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSizeConstraintSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSizeConstraintSetsRequest instance.
 */
ListSizeConstraintSetsRequestPrivate::ListSizeConstraintSetsRequestPrivate(
    const ListSizeConstraintSetsRequestPrivate &other, ListSizeConstraintSetsRequest * const q)
    : ListSizeConstraintSetsPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
