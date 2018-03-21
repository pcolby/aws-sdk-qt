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

#include "listrulegroupsrequest.h"
#include "listrulegroupsrequest_p.h"
#include "listrulegroupsresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListRuleGroupsRequest
 *
 * @brief  Implements WAF ListRuleGroups requests.
 *
 * @see    WAFClient::listRuleGroups
 */

/**
 * @brief  Constructs a new ListRuleGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRuleGroupsResponse::ListRuleGroupsResponse(

/**
 * @brief  Constructs a new ListRuleGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRuleGroupsRequest::ListRuleGroupsRequest(const ListRuleGroupsRequest &other)
    : WAFRequest(new ListRuleGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRuleGroupsRequest object.
 */
ListRuleGroupsRequest::ListRuleGroupsRequest()
    : WAFRequest(new ListRuleGroupsRequestPrivate(WAFRequest::ListRuleGroupsAction, this))
{

}

bool ListRuleGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRuleGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRuleGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListRuleGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListRuleGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRuleGroupsRequestPrivate
 *
 * @brief  Private implementation for ListRuleGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleGroupsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListRuleGroupsRequest instance.
 */
ListRuleGroupsRequestPrivate::ListRuleGroupsRequestPrivate(
    const WAFRequest::Action action, ListRuleGroupsRequest * const q)
    : ListRuleGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRuleGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRuleGroupsRequest instance.
 */
ListRuleGroupsRequestPrivate::ListRuleGroupsRequestPrivate(
    const ListRuleGroupsRequestPrivate &other, ListRuleGroupsRequest * const q)
    : ListRuleGroupsPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
