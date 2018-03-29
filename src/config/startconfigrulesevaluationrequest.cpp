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

#include "startconfigrulesevaluationrequest.h"
#include "startconfigrulesevaluationrequest_p.h"
#include "startconfigrulesevaluationresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  StartConfigRulesEvaluationRequest
 *
 * @brief  Implements ConfigService StartConfigRulesEvaluation requests.
 *
 * @see    ConfigServiceClient::startConfigRulesEvaluation
 */

/**
 * @brief  Constructs a new StartConfigRulesEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartConfigRulesEvaluationRequest::StartConfigRulesEvaluationRequest(const StartConfigRulesEvaluationRequest &other)
    : ConfigServiceRequest(new StartConfigRulesEvaluationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartConfigRulesEvaluationRequest object.
 */
StartConfigRulesEvaluationRequest::StartConfigRulesEvaluationRequest()
    : ConfigServiceRequest(new StartConfigRulesEvaluationRequestPrivate(ConfigServiceRequest::StartConfigRulesEvaluationAction, this))
{

}

bool StartConfigRulesEvaluationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartConfigRulesEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartConfigRulesEvaluationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * StartConfigRulesEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new StartConfigRulesEvaluationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartConfigRulesEvaluationRequestPrivate
 *
 * @brief  Private implementation for StartConfigRulesEvaluationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigRulesEvaluationRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public StartConfigRulesEvaluationRequest instance.
 */
StartConfigRulesEvaluationRequestPrivate::StartConfigRulesEvaluationRequestPrivate(
    const ConfigServiceRequest::Action action, StartConfigRulesEvaluationRequest * const q)
    : StartConfigRulesEvaluationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigRulesEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartConfigRulesEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartConfigRulesEvaluationRequest instance.
 */
StartConfigRulesEvaluationRequestPrivate::StartConfigRulesEvaluationRequestPrivate(
    const StartConfigRulesEvaluationRequestPrivate &other, StartConfigRulesEvaluationRequest * const q)
    : StartConfigRulesEvaluationPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
