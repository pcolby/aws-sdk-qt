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

#include "createrulerequest.h"
#include "createrulerequest_p.h"
#include "createruleresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  CreateRuleRequest
 *
 * @brief  Implements WAF CreateRule requests.
 *
 * @see    WAFClient::createRule
 */

/**
 * @brief  Constructs a new CreateRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRuleRequest::CreateRuleRequest(const CreateRuleRequest &other)
    : WAFRequest(new CreateRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRuleRequest object.
 */
CreateRuleRequest::CreateRuleRequest()
    : WAFRequest(new CreateRuleRequestPrivate(WAFRequest::CreateRuleAction, this))
{

}

bool CreateRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * CreateRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRuleRequestPrivate
 *
 * @brief  Private implementation for CreateRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public CreateRuleRequest instance.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const WAFRequest::Action action, CreateRuleRequest * const q)
    : CreateRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRuleRequest instance.
 */
CreateRuleRequestPrivate::CreateRuleRequestPrivate(
    const CreateRuleRequestPrivate &other, CreateRuleRequest * const q)
    : CreateRulePrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
