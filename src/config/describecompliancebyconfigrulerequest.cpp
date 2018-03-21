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

#include "describecompliancebyconfigrulerequest.h"
#include "describecompliancebyconfigrulerequest_p.h"
#include "describecompliancebyconfigruleresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeComplianceByConfigRuleRequest
 *
 * @brief  Implements ConfigService DescribeComplianceByConfigRule requests.
 *
 * @see    ConfigServiceClient::describeComplianceByConfigRule
 */

/**
 * @brief  Constructs a new DescribeComplianceByConfigRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeComplianceByConfigRuleRequest::DescribeComplianceByConfigRuleRequest(const DescribeComplianceByConfigRuleRequest &other)
    : ConfigServiceRequest(new DescribeComplianceByConfigRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeComplianceByConfigRuleRequest object.
 */
DescribeComplianceByConfigRuleRequest::DescribeComplianceByConfigRuleRequest()
    : ConfigServiceRequest(new DescribeComplianceByConfigRuleRequestPrivate(ConfigServiceRequest::DescribeComplianceByConfigRuleAction, this))
{

}

bool DescribeComplianceByConfigRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeComplianceByConfigRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeComplianceByConfigRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DescribeComplianceByConfigRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComplianceByConfigRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeComplianceByConfigRuleRequestPrivate
 *
 * @brief  Private implementation for DescribeComplianceByConfigRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByConfigRuleRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeComplianceByConfigRuleRequest instance.
 */
DescribeComplianceByConfigRuleRequestPrivate::DescribeComplianceByConfigRuleRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeComplianceByConfigRuleRequest * const q)
    : DescribeComplianceByConfigRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByConfigRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeComplianceByConfigRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeComplianceByConfigRuleRequest instance.
 */
DescribeComplianceByConfigRuleRequestPrivate::DescribeComplianceByConfigRuleRequestPrivate(
    const DescribeComplianceByConfigRuleRequestPrivate &other, DescribeComplianceByConfigRuleRequest * const q)
    : DescribeComplianceByConfigRulePrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
