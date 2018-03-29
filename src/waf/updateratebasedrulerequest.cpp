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

#include "updateratebasedrulerequest.h"
#include "updateratebasedrulerequest_p.h"
#include "updateratebasedruleresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  UpdateRateBasedRuleRequest
 *
 * @brief  Implements WAF UpdateRateBasedRule requests.
 *
 * @see    WAFClient::updateRateBasedRule
 */

/**
 * @brief  Constructs a new UpdateRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRateBasedRuleRequest::UpdateRateBasedRuleRequest(const UpdateRateBasedRuleRequest &other)
    : WAFRequest(new UpdateRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRateBasedRuleRequest object.
 */
UpdateRateBasedRuleRequest::UpdateRateBasedRuleRequest()
    : WAFRequest(new UpdateRateBasedRuleRequestPrivate(WAFRequest::UpdateRateBasedRuleAction, this))
{

}

bool UpdateRateBasedRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRateBasedRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * UpdateRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRateBasedRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for UpdateRateBasedRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateRateBasedRuleRequest instance.
 */
UpdateRateBasedRuleRequestPrivate::UpdateRateBasedRuleRequestPrivate(
    const WAFRequest::Action action, UpdateRateBasedRuleRequest * const q)
    : UpdateRateBasedRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRateBasedRuleRequest instance.
 */
UpdateRateBasedRuleRequestPrivate::UpdateRateBasedRuleRequestPrivate(
    const UpdateRateBasedRuleRequestPrivate &other, UpdateRateBasedRuleRequest * const q)
    : UpdateRateBasedRulePrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
