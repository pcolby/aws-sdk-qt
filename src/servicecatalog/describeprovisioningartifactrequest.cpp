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

#include "describeprovisioningartifactrequest.h"
#include "describeprovisioningartifactrequest_p.h"
#include "describeprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisioningArtifactRequest
 *
 * @brief  Implements ServiceCatalog DescribeProvisioningArtifact requests.
 *
 * @see    ServiceCatalogClient::describeProvisioningArtifact
 */

/**
 * @brief  Constructs a new DescribeProvisioningArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProvisioningArtifactRequest::DescribeProvisioningArtifactRequest(const DescribeProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new DescribeProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeProvisioningArtifactRequest object.
 */
DescribeProvisioningArtifactRequest::DescribeProvisioningArtifactRequest()
    : ServiceCatalogRequest(new DescribeProvisioningArtifactRequestPrivate(ServiceCatalogRequest::DescribeProvisioningArtifactAction, this))
{

}

bool DescribeProvisioningArtifactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeProvisioningArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProvisioningArtifactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisioningArtifactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeProvisioningArtifactRequestPrivate
 *
 * @brief  Private implementation for DescribeProvisioningArtifactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningArtifactRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeProvisioningArtifactRequest instance.
 */
DescribeProvisioningArtifactRequestPrivate::DescribeProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisioningArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProvisioningArtifactRequest instance.
 */
DescribeProvisioningArtifactRequestPrivate::DescribeProvisioningArtifactRequestPrivate(
    const DescribeProvisioningArtifactRequestPrivate &other, DescribeProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
