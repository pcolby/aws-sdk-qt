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

#include "getaggregateconfigrulecompliancesummaryrequest.h"
#include "getaggregateconfigrulecompliancesummaryrequest_p.h"
#include "getaggregateconfigrulecompliancesummaryresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetAggregateConfigRuleComplianceSummaryRequest
 *
 * @brief  Implements ConfigService GetAggregateConfigRuleComplianceSummary requests.
 *
 * @see    ConfigServiceClient::getAggregateConfigRuleComplianceSummary
 */

/**
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAggregateConfigRuleComplianceSummaryRequest::GetAggregateConfigRuleComplianceSummaryRequest(const GetAggregateConfigRuleComplianceSummaryRequest &other)
    : ConfigServiceRequest(new GetAggregateConfigRuleComplianceSummaryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryRequest object.
 */
GetAggregateConfigRuleComplianceSummaryRequest::GetAggregateConfigRuleComplianceSummaryRequest()
    : ConfigServiceRequest(new GetAggregateConfigRuleComplianceSummaryRequestPrivate(ConfigServiceRequest::GetAggregateConfigRuleComplianceSummaryAction, this))
{

}

bool GetAggregateConfigRuleComplianceSummaryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAggregateConfigRuleComplianceSummaryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAggregateConfigRuleComplianceSummaryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAggregateConfigRuleComplianceSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetAggregateConfigRuleComplianceSummaryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAggregateConfigRuleComplianceSummaryRequestPrivate
 *
 * @brief  Private implementation for GetAggregateConfigRuleComplianceSummaryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetAggregateConfigRuleComplianceSummaryRequest instance.
 */
GetAggregateConfigRuleComplianceSummaryRequestPrivate::GetAggregateConfigRuleComplianceSummaryRequestPrivate(
    const ConfigServiceRequest::Action action, GetAggregateConfigRuleComplianceSummaryRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAggregateConfigRuleComplianceSummaryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAggregateConfigRuleComplianceSummaryRequest instance.
 */
GetAggregateConfigRuleComplianceSummaryRequestPrivate::GetAggregateConfigRuleComplianceSummaryRequestPrivate(
    const GetAggregateConfigRuleComplianceSummaryRequestPrivate &other, GetAggregateConfigRuleComplianceSummaryRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
