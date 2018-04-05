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

#include "describeaggregatecompliancebyconfigrulesrequest.h"
#include "describeaggregatecompliancebyconfigrulesrequest_p.h"
#include "describeaggregatecompliancebyconfigrulesresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeAggregateComplianceByConfigRulesRequest
 *
 * @brief  Implements ConfigService DescribeAggregateComplianceByConfigRules requests.
 *
 * @see    ConfigServiceClient::describeAggregateComplianceByConfigRules
 */

/**
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAggregateComplianceByConfigRulesRequest::DescribeAggregateComplianceByConfigRulesRequest(const DescribeAggregateComplianceByConfigRulesRequest &other)
    : ConfigServiceRequest(new DescribeAggregateComplianceByConfigRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesRequest object.
 */
DescribeAggregateComplianceByConfigRulesRequest::DescribeAggregateComplianceByConfigRulesRequest()
    : ConfigServiceRequest(new DescribeAggregateComplianceByConfigRulesRequestPrivate(ConfigServiceRequest::DescribeAggregateComplianceByConfigRulesAction, this))
{

}

bool DescribeAggregateComplianceByConfigRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAggregateComplianceByConfigRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAggregateComplianceByConfigRulesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAggregateComplianceByConfigRulesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAggregateComplianceByConfigRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAggregateComplianceByConfigRulesRequestPrivate
 *
 * @brief  Private implementation for DescribeAggregateComplianceByConfigRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeAggregateComplianceByConfigRulesRequest instance.
 */
DescribeAggregateComplianceByConfigRulesRequestPrivate::DescribeAggregateComplianceByConfigRulesRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeAggregateComplianceByConfigRulesRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAggregateComplianceByConfigRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAggregateComplianceByConfigRulesRequest instance.
 */
DescribeAggregateComplianceByConfigRulesRequestPrivate::DescribeAggregateComplianceByConfigRulesRequestPrivate(
    const DescribeAggregateComplianceByConfigRulesRequestPrivate &other, DescribeAggregateComplianceByConfigRulesRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
