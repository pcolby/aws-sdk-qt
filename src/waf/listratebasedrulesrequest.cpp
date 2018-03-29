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

#include "listratebasedrulesrequest.h"
#include "listratebasedrulesrequest_p.h"
#include "listratebasedrulesresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListRateBasedRulesRequest
 *
 * @brief  Implements WAF ListRateBasedRules requests.
 *
 * @see    WAFClient::listRateBasedRules
 */

/**
 * @brief  Constructs a new ListRateBasedRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRateBasedRulesRequest::ListRateBasedRulesRequest(const ListRateBasedRulesRequest &other)
    : WAFRequest(new ListRateBasedRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRateBasedRulesRequest object.
 */
ListRateBasedRulesRequest::ListRateBasedRulesRequest()
    : WAFRequest(new ListRateBasedRulesRequestPrivate(WAFRequest::ListRateBasedRulesAction, this))
{

}

bool ListRateBasedRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRateBasedRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRateBasedRulesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListRateBasedRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListRateBasedRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRateBasedRulesRequestPrivate
 *
 * @brief  Private implementation for ListRateBasedRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRateBasedRulesRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListRateBasedRulesRequest instance.
 */
ListRateBasedRulesRequestPrivate::ListRateBasedRulesRequestPrivate(
    const WAFRequest::Action action, ListRateBasedRulesRequest * const q)
    : ListRateBasedRulesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRateBasedRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRateBasedRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRateBasedRulesRequest instance.
 */
ListRateBasedRulesRequestPrivate::ListRateBasedRulesRequestPrivate(
    const ListRateBasedRulesRequestPrivate &other, ListRateBasedRulesRequest * const q)
    : ListRateBasedRulesPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
