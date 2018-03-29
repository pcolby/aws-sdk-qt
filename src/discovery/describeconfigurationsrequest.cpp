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

#include "describeconfigurationsrequest.h"
#include "describeconfigurationsrequest_p.h"
#include "describeconfigurationsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeConfigurationsRequest
 *
 * @brief  Implements ApplicationDiscoveryService DescribeConfigurations requests.
 *
 * @see    ApplicationDiscoveryServiceClient::describeConfigurations
 */

/**
 * @brief  Constructs a new DescribeConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationsRequest::DescribeConfigurationsRequest(const DescribeConfigurationsRequest &other)
    : ApplicationDiscoveryServiceRequest(new DescribeConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationsRequest object.
 */
DescribeConfigurationsRequest::DescribeConfigurationsRequest()
    : ApplicationDiscoveryServiceRequest(new DescribeConfigurationsRequestPrivate(ApplicationDiscoveryServiceRequest::DescribeConfigurationsAction, this))
{

}

bool DescribeConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationsRequest instance.
 */
DescribeConfigurationsRequestPrivate::DescribeConfigurationsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, DescribeConfigurationsRequest * const q)
    : ApplicationDiscoveryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationsRequest instance.
 */
DescribeConfigurationsRequestPrivate::DescribeConfigurationsRequestPrivate(
    const DescribeConfigurationsRequestPrivate &other, DescribeConfigurationsRequest * const q)
    : ApplicationDiscoveryServiceRequestPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
