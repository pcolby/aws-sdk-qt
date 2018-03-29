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

#include "describeconfigruleevaluationstatusrequest.h"
#include "describeconfigruleevaluationstatusrequest_p.h"
#include "describeconfigruleevaluationstatusresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigRuleEvaluationStatusRequest
 *
 * @brief  Implements ConfigService DescribeConfigRuleEvaluationStatus requests.
 *
 * @see    ConfigServiceClient::describeConfigRuleEvaluationStatus
 */

/**
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigRuleEvaluationStatusRequest::DescribeConfigRuleEvaluationStatusRequest(const DescribeConfigRuleEvaluationStatusRequest &other)
    : ConfigServiceRequest(new DescribeConfigRuleEvaluationStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusRequest object.
 */
DescribeConfigRuleEvaluationStatusRequest::DescribeConfigRuleEvaluationStatusRequest()
    : ConfigServiceRequest(new DescribeConfigRuleEvaluationStatusRequestPrivate(ConfigServiceRequest::DescribeConfigRuleEvaluationStatusAction, this))
{

}

bool DescribeConfigRuleEvaluationStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigRuleEvaluationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigRuleEvaluationStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigRuleEvaluationStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigRuleEvaluationStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigRuleEvaluationStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigRuleEvaluationStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigRuleEvaluationStatusRequest instance.
 */
DescribeConfigRuleEvaluationStatusRequestPrivate::DescribeConfigRuleEvaluationStatusRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigRuleEvaluationStatusRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigRuleEvaluationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigRuleEvaluationStatusRequest instance.
 */
DescribeConfigRuleEvaluationStatusRequestPrivate::DescribeConfigRuleEvaluationStatusRequestPrivate(
    const DescribeConfigRuleEvaluationStatusRequestPrivate &other, DescribeConfigRuleEvaluationStatusRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
