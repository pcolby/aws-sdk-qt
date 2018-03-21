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

#include "listipsetsrequest.h"
#include "listipsetsrequest_p.h"
#include "listipsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListIPSetsRequest
 *
 * @brief  Implements WAFRegional ListIPSets requests.
 *
 * @see    WAFRegionalClient::listIPSets
 */

/**
 * @brief  Constructs a new ListIPSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIPSetsRequest::ListIPSetsRequest(const ListIPSetsRequest &other)
    : WAFRegionalRequest(new ListIPSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIPSetsRequest object.
 */
ListIPSetsRequest::ListIPSetsRequest()
    : WAFRegionalRequest(new ListIPSetsRequestPrivate(WAFRegionalRequest::ListIPSetsAction, this))
{

}

bool ListIPSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIPSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIPSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * ListIPSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListIPSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIPSetsRequestPrivate
 *
 * @brief  Private implementation for ListIPSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIPSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListIPSetsRequest instance.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListIPSetsRequest * const q)
    : ListIPSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIPSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIPSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIPSetsRequest instance.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const ListIPSetsRequestPrivate &other, ListIPSetsRequest * const q)
    : ListIPSetsPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
