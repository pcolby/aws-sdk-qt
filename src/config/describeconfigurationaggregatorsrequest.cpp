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

#include "describeconfigurationaggregatorsrequest.h"
#include "describeconfigurationaggregatorsrequest_p.h"
#include "describeconfigurationaggregatorsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigurationAggregatorsRequest
 *
 * @brief  Implements ConfigService DescribeConfigurationAggregators requests.
 *
 * @see    ConfigServiceClient::describeConfigurationAggregators
 */

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationAggregatorsRequest::DescribeConfigurationAggregatorsRequest(const DescribeConfigurationAggregatorsRequest &other)
    : ConfigServiceRequest(new DescribeConfigurationAggregatorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorsRequest object.
 */
DescribeConfigurationAggregatorsRequest::DescribeConfigurationAggregatorsRequest()
    : ConfigServiceRequest(new DescribeConfigurationAggregatorsRequestPrivate(ConfigServiceRequest::DescribeConfigurationAggregatorsAction, this))
{

}

bool DescribeConfigurationAggregatorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationAggregatorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationAggregatorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationAggregatorsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationAggregatorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationAggregatorsRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationAggregatorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationAggregatorsRequest instance.
 */
DescribeConfigurationAggregatorsRequestPrivate::DescribeConfigurationAggregatorsRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigurationAggregatorsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationAggregatorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationAggregatorsRequest instance.
 */
DescribeConfigurationAggregatorsRequestPrivate::DescribeConfigurationAggregatorsRequestPrivate(
    const DescribeConfigurationAggregatorsRequestPrivate &other, DescribeConfigurationAggregatorsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
