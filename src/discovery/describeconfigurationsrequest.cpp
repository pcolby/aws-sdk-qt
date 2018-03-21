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

#include "describeconfigurationsrequest.h"
#include "describeconfigurationsrequest_p.h"
#include "describeconfigurationsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeConfigurationsRequest
 *
 * @brief  Implements ApplicationDiscoveryService DescribeConfigurations requests.
 *
 * @see    ApplicationDiscoveryServiceClient::describeConfigurations
 */

/**
 * @brief  Constructs a new DescribeConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationsResponse::DescribeConfigurationsResponse(

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
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * DescribeConfigurationsRequest::response(QNetworkReply * const reply) const
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
    : DescribeConfigurationsPrivate(action, q)
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
    : DescribeConfigurationsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace AWS
