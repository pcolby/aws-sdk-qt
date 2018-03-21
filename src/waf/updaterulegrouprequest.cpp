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

#include "updaterulegrouprequest.h"
#include "updaterulegrouprequest_p.h"
#include "updaterulegroupresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  UpdateRuleGroupRequest
 *
 * @brief  Implements WAF UpdateRuleGroup requests.
 *
 * @see    WAFClient::updateRuleGroup
 */

/**
 * @brief  Constructs a new UpdateRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRuleGroupResponse::UpdateRuleGroupResponse(

/**
 * @brief  Constructs a new UpdateRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRuleGroupRequest::UpdateRuleGroupRequest(const UpdateRuleGroupRequest &other)
    : WAFRequest(new UpdateRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRuleGroupRequest object.
 */
UpdateRuleGroupRequest::UpdateRuleGroupRequest()
    : WAFRequest(new UpdateRuleGroupRequestPrivate(WAFRequest::UpdateRuleGroupAction, this))
{

}

bool UpdateRuleGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRuleGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRuleGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * UpdateRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuleGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRuleGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateRuleGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleGroupRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateRuleGroupRequest instance.
 */
UpdateRuleGroupRequestPrivate::UpdateRuleGroupRequestPrivate(
    const WAFRequest::Action action, UpdateRuleGroupRequest * const q)
    : UpdateRuleGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuleGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRuleGroupRequest instance.
 */
UpdateRuleGroupRequestPrivate::UpdateRuleGroupRequestPrivate(
    const UpdateRuleGroupRequestPrivate &other, UpdateRuleGroupRequest * const q)
    : UpdateRuleGroupPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
