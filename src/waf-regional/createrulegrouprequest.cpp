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

#include "createrulegrouprequest.h"
#include "createrulegrouprequest_p.h"
#include "createrulegroupresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateRuleGroupRequest
 *
 * @brief  Implements WAFRegional CreateRuleGroup requests.
 *
 * @see    WAFRegionalClient::createRuleGroup
 */

/**
 * @brief  Constructs a new CreateRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest(const CreateRuleGroupRequest &other)
    : WAFRegionalRequest(new CreateRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRuleGroupRequest object.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest()
    : WAFRegionalRequest(new CreateRuleGroupRequestPrivate(WAFRegionalRequest::CreateRuleGroupAction, this))
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
 * @see  WAFRegionalClient::send
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateRuleGroupRequest instance.
 */
CreateRuleGroupRequestPrivate::CreateRuleGroupRequestPrivate(
    const WAFRegionalRequest::Action action, CreateRuleGroupRequest * const q)
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

} // namespace WAFRegional
} // namespace AWS
