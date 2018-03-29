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

#include "getrulerequest.h"
#include "getrulerequest_p.h"
#include "getruleresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetRuleRequest
 *
 * @brief  Implements WAFRegional GetRule requests.
 *
 * @see    WAFRegionalClient::getRule
 */

/**
 * @brief  Constructs a new GetRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRuleRequest::GetRuleRequest(const GetRuleRequest &other)
    : WAFRegionalRequest(new GetRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRuleRequest object.
 */
GetRuleRequest::GetRuleRequest()
    : WAFRegionalRequest(new GetRuleRequestPrivate(WAFRegionalRequest::GetRuleAction, this))
{

}

bool GetRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetRuleRequest::response(QNetworkReply * const reply) const
{
    return new GetRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRuleRequestPrivate
 *
 * @brief  Private implementation for GetRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetRuleRequest instance.
 */
GetRuleRequestPrivate::GetRuleRequestPrivate(
    const WAFRegionalRequest::Action action, GetRuleRequest * const q)
    : GetRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRuleRequest instance.
 */
GetRuleRequestPrivate::GetRuleRequestPrivate(
    const GetRuleRequestPrivate &other, GetRuleRequest * const q)
    : GetRulePrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
