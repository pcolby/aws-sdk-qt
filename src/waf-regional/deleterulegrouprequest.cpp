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

#include "deleterulegrouprequest.h"
#include "deleterulegrouprequest_p.h"
#include "deleterulegroupresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteRuleGroupRequest
 *
 * @brief  Implements WAFRegional DeleteRuleGroup requests.
 *
 * @see    WAFRegionalClient::deleteRuleGroup
 */

/**
 * @brief  Constructs a new DeleteRuleGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRuleGroupRequest::DeleteRuleGroupRequest(const DeleteRuleGroupRequest &other)
    : WAFRegionalRequest(new DeleteRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRuleGroupRequest object.
 */
DeleteRuleGroupRequest::DeleteRuleGroupRequest()
    : WAFRegionalRequest(new DeleteRuleGroupRequestPrivate(WAFRegionalRequest::DeleteRuleGroupAction, this))
{

}

bool DeleteRuleGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRuleGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRuleGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRuleGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteRuleGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleGroupRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteRuleGroupRequest instance.
 */
DeleteRuleGroupRequestPrivate::DeleteRuleGroupRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteRuleGroupRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRuleGroupRequest instance.
 */
DeleteRuleGroupRequestPrivate::DeleteRuleGroupRequestPrivate(
    const DeleteRuleGroupRequestPrivate &other, DeleteRuleGroupRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
