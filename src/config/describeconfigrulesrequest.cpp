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

#include "describeconfigrulesrequest.h"
#include "describeconfigrulesrequest_p.h"
#include "describeconfigrulesresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeConfigRulesRequest
 *
 * @brief  Implements ConfigService DescribeConfigRules requests.
 *
 * @see    ConfigServiceClient::describeConfigRules
 */

/**
 * @brief  Constructs a new DescribeConfigRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigRulesRequest::DescribeConfigRulesRequest(const DescribeConfigRulesRequest &other)
    : ConfigServiceRequest(new DescribeConfigRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigRulesRequest object.
 */
DescribeConfigRulesRequest::DescribeConfigRulesRequest()
    : ConfigServiceRequest(new DescribeConfigRulesRequestPrivate(ConfigServiceRequest::DescribeConfigRulesAction, this))
{

}

bool DescribeConfigRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigRulesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DescribeConfigRulesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigRulesRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRulesRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigRulesRequest instance.
 */
DescribeConfigRulesRequestPrivate::DescribeConfigRulesRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigRulesRequest * const q)
    : DescribeConfigRulesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigRulesRequest instance.
 */
DescribeConfigRulesRequestPrivate::DescribeConfigRulesRequestPrivate(
    const DescribeConfigRulesRequestPrivate &other, DescribeConfigRulesRequest * const q)
    : DescribeConfigRulesPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
