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

#include "describeexportconfigurationsrequest.h"
#include "describeexportconfigurationsrequest_p.h"
#include "describeexportconfigurationsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeExportConfigurationsRequest
 *
 * @brief  Implements ApplicationDiscoveryService DescribeExportConfigurations requests.
 *
 * @see    ApplicationDiscoveryServiceClient::describeExportConfigurations
 */

/**
 * @brief  Constructs a new DescribeExportConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeExportConfigurationsRequest::DescribeExportConfigurationsRequest(const DescribeExportConfigurationsRequest &other)
    : ApplicationDiscoveryServiceRequest(new DescribeExportConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeExportConfigurationsRequest object.
 */
DescribeExportConfigurationsRequest::DescribeExportConfigurationsRequest()
    : ApplicationDiscoveryServiceRequest(new DescribeExportConfigurationsRequestPrivate(ApplicationDiscoveryServiceRequest::DescribeExportConfigurationsAction, this))
{

}

bool DescribeExportConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeExportConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeExportConfigurationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExportConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExportConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeExportConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeExportConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportConfigurationsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public DescribeExportConfigurationsRequest instance.
 */
DescribeExportConfigurationsRequestPrivate::DescribeExportConfigurationsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, DescribeExportConfigurationsRequest * const q)
    : ApplicationDiscoveryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeExportConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeExportConfigurationsRequest instance.
 */
DescribeExportConfigurationsRequestPrivate::DescribeExportConfigurationsRequestPrivate(
    const DescribeExportConfigurationsRequestPrivate &other, DescribeExportConfigurationsRequest * const q)
    : ApplicationDiscoveryServiceRequestPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
