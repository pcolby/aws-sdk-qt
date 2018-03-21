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

#include "listactivatedrulesinrulegrouprequest.h"
#include "listactivatedrulesinrulegrouprequest_p.h"
#include "listactivatedrulesinrulegroupresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListActivatedRulesInRuleGroupRequest
 *
 * @brief  Implements WAF ListActivatedRulesInRuleGroup requests.
 *
 * @see    WAFClient::listActivatedRulesInRuleGroup
 */

/**
 * @brief  Constructs a new ListActivatedRulesInRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivatedRulesInRuleGroupResponse::ListActivatedRulesInRuleGroupResponse(

/**
 * @brief  Constructs a new ListActivatedRulesInRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListActivatedRulesInRuleGroupRequest::ListActivatedRulesInRuleGroupRequest(const ListActivatedRulesInRuleGroupRequest &other)
    : WAFRequest(new ListActivatedRulesInRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListActivatedRulesInRuleGroupRequest object.
 */
ListActivatedRulesInRuleGroupRequest::ListActivatedRulesInRuleGroupRequest()
    : WAFRequest(new ListActivatedRulesInRuleGroupRequestPrivate(WAFRequest::ListActivatedRulesInRuleGroupAction, this))
{

}

bool ListActivatedRulesInRuleGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListActivatedRulesInRuleGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListActivatedRulesInRuleGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListActivatedRulesInRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListActivatedRulesInRuleGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListActivatedRulesInRuleGroupRequestPrivate
 *
 * @brief  Private implementation for ListActivatedRulesInRuleGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivatedRulesInRuleGroupRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListActivatedRulesInRuleGroupRequest instance.
 */
ListActivatedRulesInRuleGroupRequestPrivate::ListActivatedRulesInRuleGroupRequestPrivate(
    const WAFRequest::Action action, ListActivatedRulesInRuleGroupRequest * const q)
    : ListActivatedRulesInRuleGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListActivatedRulesInRuleGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListActivatedRulesInRuleGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListActivatedRulesInRuleGroupRequest instance.
 */
ListActivatedRulesInRuleGroupRequestPrivate::ListActivatedRulesInRuleGroupRequestPrivate(
    const ListActivatedRulesInRuleGroupRequestPrivate &other, ListActivatedRulesInRuleGroupRequest * const q)
    : ListActivatedRulesInRuleGroupPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
