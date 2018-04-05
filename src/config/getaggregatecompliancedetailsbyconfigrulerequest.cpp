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

#include "getaggregatecompliancedetailsbyconfigrulerequest.h"
#include "getaggregatecompliancedetailsbyconfigrulerequest_p.h"
#include "getaggregatecompliancedetailsbyconfigruleresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetAggregateComplianceDetailsByConfigRuleRequest
 *
 * @brief  Implements ConfigService GetAggregateComplianceDetailsByConfigRule requests.
 *
 * @see    ConfigServiceClient::getAggregateComplianceDetailsByConfigRule
 */

/**
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAggregateComplianceDetailsByConfigRuleRequest::GetAggregateComplianceDetailsByConfigRuleRequest(const GetAggregateComplianceDetailsByConfigRuleRequest &other)
    : ConfigServiceRequest(new GetAggregateComplianceDetailsByConfigRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleRequest object.
 */
GetAggregateComplianceDetailsByConfigRuleRequest::GetAggregateComplianceDetailsByConfigRuleRequest()
    : ConfigServiceRequest(new GetAggregateComplianceDetailsByConfigRuleRequestPrivate(ConfigServiceRequest::GetAggregateComplianceDetailsByConfigRuleAction, this))
{

}

bool GetAggregateComplianceDetailsByConfigRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAggregateComplianceDetailsByConfigRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAggregateComplianceDetailsByConfigRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAggregateComplianceDetailsByConfigRuleRequest::response(QNetworkReply * const reply) const
{
    return new GetAggregateComplianceDetailsByConfigRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAggregateComplianceDetailsByConfigRuleRequestPrivate
 *
 * @brief  Private implementation for GetAggregateComplianceDetailsByConfigRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetAggregateComplianceDetailsByConfigRuleRequest instance.
 */
GetAggregateComplianceDetailsByConfigRuleRequestPrivate::GetAggregateComplianceDetailsByConfigRuleRequestPrivate(
    const ConfigServiceRequest::Action action, GetAggregateComplianceDetailsByConfigRuleRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAggregateComplianceDetailsByConfigRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAggregateComplianceDetailsByConfigRuleRequest instance.
 */
GetAggregateComplianceDetailsByConfigRuleRequestPrivate::GetAggregateComplianceDetailsByConfigRuleRequestPrivate(
    const GetAggregateComplianceDetailsByConfigRuleRequestPrivate &other, GetAggregateComplianceDetailsByConfigRuleRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
