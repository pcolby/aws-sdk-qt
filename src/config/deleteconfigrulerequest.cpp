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

#include "deleteconfigrulerequest.h"
#include "deleteconfigrulerequest_p.h"
#include "deleteconfigruleresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteConfigRuleRequest
 *
 * @brief  Implements ConfigService DeleteConfigRule requests.
 *
 * @see    ConfigServiceClient::deleteConfigRule
 */

/**
 * @brief  Constructs a new DeleteConfigRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigRuleRequest::DeleteConfigRuleRequest(const DeleteConfigRuleRequest &other)
    : ConfigServiceRequest(new DeleteConfigRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigRuleRequest object.
 */
DeleteConfigRuleRequest::DeleteConfigRuleRequest()
    : ConfigServiceRequest(new DeleteConfigRuleRequestPrivate(ConfigServiceRequest::DeleteConfigRuleAction, this))
{

}

bool DeleteConfigRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DeleteConfigRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigRuleRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteConfigRuleRequest instance.
 */
DeleteConfigRuleRequestPrivate::DeleteConfigRuleRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteConfigRuleRequest * const q)
    : DeleteConfigRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigRuleRequest instance.
 */
DeleteConfigRuleRequestPrivate::DeleteConfigRuleRequestPrivate(
    const DeleteConfigRuleRequestPrivate &other, DeleteConfigRuleRequest * const q)
    : DeleteConfigRulePrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
