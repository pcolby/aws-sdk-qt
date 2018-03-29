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

#include "listbytematchsetsrequest.h"
#include "listbytematchsetsrequest_p.h"
#include "listbytematchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListByteMatchSetsRequest
 *
 * @brief  Implements WAFRegional ListByteMatchSets requests.
 *
 * @see    WAFRegionalClient::listByteMatchSets
 */

/**
 * @brief  Constructs a new ListByteMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest(const ListByteMatchSetsRequest &other)
    : WAFRegionalRequest(new ListByteMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListByteMatchSetsRequest object.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest()
    : WAFRegionalRequest(new ListByteMatchSetsRequestPrivate(WAFRegionalRequest::ListByteMatchSetsAction, this))
{

}

bool ListByteMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListByteMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListByteMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * ListByteMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListByteMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListByteMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListByteMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListByteMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListByteMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const ListByteMatchSetsRequestPrivate &other, ListByteMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
