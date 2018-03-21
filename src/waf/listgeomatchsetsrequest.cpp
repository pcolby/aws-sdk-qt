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

#include "listgeomatchsetsrequest.h"
#include "listgeomatchsetsrequest_p.h"
#include "listgeomatchsetsresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListGeoMatchSetsRequest
 *
 * @brief  Implements WAF ListGeoMatchSets requests.
 *
 * @see    WAFClient::listGeoMatchSets
 */

/**
 * @brief  Constructs a new ListGeoMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest(const ListGeoMatchSetsRequest &other)
    : WAFRequest(new ListGeoMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGeoMatchSetsRequest object.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest()
    : WAFRequest(new ListGeoMatchSetsRequestPrivate(WAFRequest::ListGeoMatchSetsAction, this))
{

}

bool ListGeoMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGeoMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGeoMatchSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListGeoMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeoMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGeoMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListGeoMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListGeoMatchSetsRequest instance.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const WAFRequest::Action action, ListGeoMatchSetsRequest * const q)
    : ListGeoMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGeoMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGeoMatchSetsRequest instance.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const ListGeoMatchSetsRequestPrivate &other, ListGeoMatchSetsRequest * const q)
    : ListGeoMatchSetsPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
