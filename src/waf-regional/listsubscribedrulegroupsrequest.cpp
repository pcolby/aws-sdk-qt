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

#include "listsubscribedrulegroupsrequest.h"
#include "listsubscribedrulegroupsrequest_p.h"
#include "listsubscribedrulegroupsresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListSubscribedRuleGroupsRequest
 *
 * @brief  Implements WAFRegional ListSubscribedRuleGroups requests.
 *
 * @see    WAFRegionalClient::listSubscribedRuleGroups
 */

/**
 * @brief  Constructs a new ListSubscribedRuleGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscribedRuleGroupsResponse::ListSubscribedRuleGroupsResponse(

/**
 * @brief  Constructs a new ListSubscribedRuleGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSubscribedRuleGroupsRequest::ListSubscribedRuleGroupsRequest(const ListSubscribedRuleGroupsRequest &other)
    : WAFRegionalRequest(new ListSubscribedRuleGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSubscribedRuleGroupsRequest object.
 */
ListSubscribedRuleGroupsRequest::ListSubscribedRuleGroupsRequest()
    : WAFRegionalRequest(new ListSubscribedRuleGroupsRequestPrivate(WAFRegionalRequest::ListSubscribedRuleGroupsAction, this))
{

}

bool ListSubscribedRuleGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSubscribedRuleGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSubscribedRuleGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * ListSubscribedRuleGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscribedRuleGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSubscribedRuleGroupsRequestPrivate
 *
 * @brief  Private implementation for ListSubscribedRuleGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscribedRuleGroupsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListSubscribedRuleGroupsRequest instance.
 */
ListSubscribedRuleGroupsRequestPrivate::ListSubscribedRuleGroupsRequestPrivate(
    const WAFRegionalRequest::Action action, ListSubscribedRuleGroupsRequest * const q)
    : ListSubscribedRuleGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscribedRuleGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSubscribedRuleGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSubscribedRuleGroupsRequest instance.
 */
ListSubscribedRuleGroupsRequestPrivate::ListSubscribedRuleGroupsRequestPrivate(
    const ListSubscribedRuleGroupsRequestPrivate &other, ListSubscribedRuleGroupsRequest * const q)
    : ListSubscribedRuleGroupsPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
