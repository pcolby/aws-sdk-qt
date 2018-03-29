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

#include "deleteratebasedrulerequest.h"
#include "deleteratebasedrulerequest_p.h"
#include "deleteratebasedruleresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteRateBasedRuleRequest
 *
 * @brief  Implements WAFRegional DeleteRateBasedRule requests.
 *
 * @see    WAFRegionalClient::deleteRateBasedRule
 */

/**
 * @brief  Constructs a new DeleteRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRateBasedRuleRequest::DeleteRateBasedRuleRequest(const DeleteRateBasedRuleRequest &other)
    : WAFRegionalRequest(new DeleteRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRateBasedRuleRequest object.
 */
DeleteRateBasedRuleRequest::DeleteRateBasedRuleRequest()
    : WAFRegionalRequest(new DeleteRateBasedRuleRequestPrivate(WAFRegionalRequest::DeleteRateBasedRuleAction, this))
{

}

bool DeleteRateBasedRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRateBasedRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeleteRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRateBasedRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteRateBasedRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeleteRateBasedRuleRequest instance.
 */
DeleteRateBasedRuleRequestPrivate::DeleteRateBasedRuleRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteRateBasedRuleRequest * const q)
    : DeleteRateBasedRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRateBasedRuleRequest instance.
 */
DeleteRateBasedRuleRequestPrivate::DeleteRateBasedRuleRequestPrivate(
    const DeleteRateBasedRuleRequestPrivate &other, DeleteRateBasedRuleRequest * const q)
    : DeleteRateBasedRulePrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
