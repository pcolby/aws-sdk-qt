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

#include "getrulegrouprequest.h"
#include "getrulegrouprequest_p.h"
#include "getrulegroupresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  GetRuleGroupRequest
 *
 * @brief  Implements WAF GetRuleGroup requests.
 *
 * @see    WAFClient::getRuleGroup
 */

/**
 * @brief  Constructs a new GetRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRuleGroupResponse::GetRuleGroupResponse(

/**
 * @brief  Constructs a new GetRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRuleGroupRequest::GetRuleGroupRequest(const GetRuleGroupRequest &other)
    : WAFRequest(new GetRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRuleGroupRequest object.
 */
GetRuleGroupRequest::GetRuleGroupRequest()
    : WAFRequest(new GetRuleGroupRequestPrivate(WAFRequest::GetRuleGroupAction, this))
{

}

bool GetRuleGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRuleGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRuleGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetRuleGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRuleGroupRequestPrivate
 *
 * @brief  Private implementation for GetRuleGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleGroupRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetRuleGroupRequest instance.
 */
GetRuleGroupRequestPrivate::GetRuleGroupRequestPrivate(
    const WAFRequest::Action action, GetRuleGroupRequest * const q)
    : GetRuleGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRuleGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRuleGroupRequest instance.
 */
GetRuleGroupRequestPrivate::GetRuleGroupRequestPrivate(
    const GetRuleGroupRequestPrivate &other, GetRuleGroupRequest * const q)
    : GetRuleGroupPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
