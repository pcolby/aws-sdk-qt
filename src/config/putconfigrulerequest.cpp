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

#include "putconfigrulerequest.h"
#include "putconfigrulerequest_p.h"
#include "putconfigruleresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  PutConfigRuleRequest
 *
 * @brief  Implements ConfigService PutConfigRule requests.
 *
 * @see    ConfigServiceClient::putConfigRule
 */

/**
 * @brief  Constructs a new PutConfigRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutConfigRuleRequest::PutConfigRuleRequest(const PutConfigRuleRequest &other)
    : ConfigServiceRequest(new PutConfigRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutConfigRuleRequest object.
 */
PutConfigRuleRequest::PutConfigRuleRequest()
    : ConfigServiceRequest(new PutConfigRuleRequestPrivate(ConfigServiceRequest::PutConfigRuleAction, this))
{

}

bool PutConfigRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutConfigRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutConfigRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * PutConfigRuleRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutConfigRuleRequestPrivate
 *
 * @brief  Private implementation for PutConfigRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigRuleRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutConfigRuleRequest instance.
 */
PutConfigRuleRequestPrivate::PutConfigRuleRequestPrivate(
    const ConfigServiceRequest::Action action, PutConfigRuleRequest * const q)
    : PutConfigRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutConfigRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutConfigRuleRequest instance.
 */
PutConfigRuleRequestPrivate::PutConfigRuleRequestPrivate(
    const PutConfigRuleRequestPrivate &other, PutConfigRuleRequest * const q)
    : PutConfigRulePrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
