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

#include "listsqlinjectionmatchsetsrequest.h"
#include "listsqlinjectionmatchsetsrequest_p.h"
#include "listsqlinjectionmatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListSqlInjectionMatchSetsRequest
 *
 * @brief  Implements WAFRegional ListSqlInjectionMatchSets requests.
 *
 * @see    WAFRegionalClient::listSqlInjectionMatchSets
 */

/**
 * @brief  Constructs a new ListSqlInjectionMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSqlInjectionMatchSetsResponse::ListSqlInjectionMatchSetsResponse(

/**
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSqlInjectionMatchSetsRequest::ListSqlInjectionMatchSetsRequest(const ListSqlInjectionMatchSetsRequest &other)
    : WAFRegionalRequest(new ListSqlInjectionMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequest object.
 */
ListSqlInjectionMatchSetsRequest::ListSqlInjectionMatchSetsRequest()
    : WAFRegionalRequest(new ListSqlInjectionMatchSetsRequestPrivate(WAFRegionalRequest::ListSqlInjectionMatchSetsAction, this))
{

}

bool ListSqlInjectionMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSqlInjectionMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSqlInjectionMatchSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * ListSqlInjectionMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListSqlInjectionMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSqlInjectionMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListSqlInjectionMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListSqlInjectionMatchSetsRequest instance.
 */
ListSqlInjectionMatchSetsRequestPrivate::ListSqlInjectionMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListSqlInjectionMatchSetsRequest * const q)
    : ListSqlInjectionMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSqlInjectionMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSqlInjectionMatchSetsRequest instance.
 */
ListSqlInjectionMatchSetsRequestPrivate::ListSqlInjectionMatchSetsRequestPrivate(
    const ListSqlInjectionMatchSetsRequestPrivate &other, ListSqlInjectionMatchSetsRequest * const q)
    : ListSqlInjectionMatchSetsPrivate(other, q)
{

}
