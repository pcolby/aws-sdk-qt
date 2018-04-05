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

#include "describeconfigurationaggregatorsourcesstatusrequest.h"
#include "describeconfigurationaggregatorsourcesstatusrequest_p.h"
#include "describeconfigurationaggregatorsourcesstatusresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigurationAggregatorSourcesStatusRequest
 *
 * @brief  Implements ConfigService DescribeConfigurationAggregatorSourcesStatus requests.
 *
 * @see    ConfigServiceClient::describeConfigurationAggregatorSourcesStatus
 */

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationAggregatorSourcesStatusRequest::DescribeConfigurationAggregatorSourcesStatusRequest(const DescribeConfigurationAggregatorSourcesStatusRequest &other)
    : ConfigServiceRequest(new DescribeConfigurationAggregatorSourcesStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusRequest object.
 */
DescribeConfigurationAggregatorSourcesStatusRequest::DescribeConfigurationAggregatorSourcesStatusRequest()
    : ConfigServiceRequest(new DescribeConfigurationAggregatorSourcesStatusRequestPrivate(ConfigServiceRequest::DescribeConfigurationAggregatorSourcesStatusAction, this))
{

}

bool DescribeConfigurationAggregatorSourcesStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationAggregatorSourcesStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationAggregatorSourcesStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationAggregatorSourcesStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationAggregatorSourcesStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationAggregatorSourcesStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationAggregatorSourcesStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationAggregatorSourcesStatusRequest instance.
 */
DescribeConfigurationAggregatorSourcesStatusRequestPrivate::DescribeConfigurationAggregatorSourcesStatusRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigurationAggregatorSourcesStatusRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationAggregatorSourcesStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationAggregatorSourcesStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationAggregatorSourcesStatusRequest instance.
 */
DescribeConfigurationAggregatorSourcesStatusRequestPrivate::DescribeConfigurationAggregatorSourcesStatusRequestPrivate(
    const DescribeConfigurationAggregatorSourcesStatusRequestPrivate &other, DescribeConfigurationAggregatorSourcesStatusRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
