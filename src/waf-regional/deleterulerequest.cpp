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

#include "deleterulerequest.h"
#include "deleterulerequest_p.h"
#include "deleteruleresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteRuleRequest
 *
 * @brief  Implements WAFRegional DeleteRule requests.
 *
 * @see    WAFRegionalClient::deleteRule
 */

/**
 * @brief  Constructs a new DeleteRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRuleRequest::DeleteRuleRequest(const DeleteRuleRequest &other)
    : WAFRegionalRequest(new DeleteRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRuleRequest object.
 */
DeleteRuleRequest::DeleteRuleRequest()
    : WAFRegionalRequest(new DeleteRuleRequestPrivate(WAFRegionalRequest::DeleteRuleAction, this))
{

}

bool DeleteRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteRuleRequest instance.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteRuleRequest * const q)
    : DeleteRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRuleRequest instance.
 */
DeleteRuleRequestPrivate::DeleteRuleRequestPrivate(
    const DeleteRuleRequestPrivate &other, DeleteRuleRequest * const q)
    : DeleteRulePrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
