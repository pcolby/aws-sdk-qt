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

#include "listxssmatchsetsrequest.h"
#include "listxssmatchsetsrequest_p.h"
#include "listxssmatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListXssMatchSetsRequest
 *
 * @brief  Implements WAFRegional ListXssMatchSets requests.
 *
 * @see    WAFRegionalClient::listXssMatchSets
 */

/**
 * @brief  Constructs a new ListXssMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListXssMatchSetsResponse::ListXssMatchSetsResponse(

/**
 * @brief  Constructs a new ListXssMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListXssMatchSetsRequest::ListXssMatchSetsRequest(const ListXssMatchSetsRequest &other)
    : WAFRegionalRequest(new ListXssMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListXssMatchSetsRequest object.
 */
ListXssMatchSetsRequest::ListXssMatchSetsRequest()
    : WAFRegionalRequest(new ListXssMatchSetsRequestPrivate(WAFRegionalRequest::ListXssMatchSetsAction, this))
{

}

bool ListXssMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListXssMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListXssMatchSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * ListXssMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListXssMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListXssMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListXssMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListXssMatchSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListXssMatchSetsRequest instance.
 */
ListXssMatchSetsRequestPrivate::ListXssMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListXssMatchSetsRequest * const q)
    : ListXssMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListXssMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListXssMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListXssMatchSetsRequest instance.
 */
ListXssMatchSetsRequestPrivate::ListXssMatchSetsRequestPrivate(
    const ListXssMatchSetsRequestPrivate &other, ListXssMatchSetsRequest * const q)
    : ListXssMatchSetsPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
