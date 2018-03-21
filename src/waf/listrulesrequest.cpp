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

#include "listrulesrequest.h"
#include "listrulesrequest_p.h"
#include "listrulesresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListRulesRequest
 *
 * @brief  Implements WAF ListRules requests.
 *
 * @see    WAFClient::listRules
 */

/**
 * @brief  Constructs a new ListRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRulesResponse::ListRulesResponse(

/**
 * @brief  Constructs a new ListRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRulesRequest::ListRulesRequest(const ListRulesRequest &other)
    : WAFRequest(new ListRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRulesRequest object.
 */
ListRulesRequest::ListRulesRequest()
    : WAFRequest(new ListRulesRequestPrivate(WAFRequest::ListRulesAction, this))
{

}

bool ListRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRulesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRulesRequestPrivate
 *
 * @brief  Private implementation for ListRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListRulesRequest instance.
 */
ListRulesRequestPrivate::ListRulesRequestPrivate(
    const WAFRequest::Action action, ListRulesRequest * const q)
    : ListRulesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRulesRequest instance.
 */
ListRulesRequestPrivate::ListRulesRequestPrivate(
    const ListRulesRequestPrivate &other, ListRulesRequest * const q)
    : ListRulesPrivate(other, q)
{

}
