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

#include "createrulegrouprequest.h"
#include "createrulegrouprequest_p.h"
#include "createrulegroupresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  CreateRuleGroupRequest
 *
 * @brief  Implements WAF CreateRuleGroup requests.
 *
 * @see    WAFClient::createRuleGroup
 */

/**
 * @brief  Constructs a new CreateRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRuleGroupResponse::CreateRuleGroupResponse(

/**
 * @brief  Constructs a new CreateRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest(const CreateRuleGroupRequest &other)
    : WAFRequest(new CreateRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRuleGroupRequest object.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest()
    : WAFRequest(new CreateRuleGroupRequestPrivate(WAFRequest::CreateRuleGroupAction, this))
{

}

bool CreateRuleGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRuleGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRuleGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * CreateRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRuleGroupRequestPrivate
 *
 * @brief  Private implementation for CreateRuleGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleGroupRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateRuleGroupRequest instance.
 */
CreateRuleGroupRequestPrivate::CreateRuleGroupRequestPrivate(
    const WAFRequest::Action action, CreateRuleGroupRequest * const q)
    : CreateRuleGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRuleGroupRequest instance.
 */
CreateRuleGroupRequestPrivate::CreateRuleGroupRequestPrivate(
    const CreateRuleGroupRequestPrivate &other, CreateRuleGroupRequest * const q)
    : CreateRuleGroupPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
