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

#include "listprovisioningartifactsrequest.h"
#include "listprovisioningartifactsrequest_p.h"
#include "listprovisioningartifactsresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListProvisioningArtifactsRequest
 *
 * @brief  Implements ServiceCatalog ListProvisioningArtifacts requests.
 *
 * @see    ServiceCatalogClient::listProvisioningArtifacts
 */

/**
 * @brief  Constructs a new ListProvisioningArtifactsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProvisioningArtifactsRequest::ListProvisioningArtifactsRequest(const ListProvisioningArtifactsRequest &other)
    : ServiceCatalogRequest(new ListProvisioningArtifactsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListProvisioningArtifactsRequest object.
 */
ListProvisioningArtifactsRequest::ListProvisioningArtifactsRequest()
    : ServiceCatalogRequest(new ListProvisioningArtifactsRequestPrivate(ServiceCatalogRequest::ListProvisioningArtifactsAction, this))
{

}

bool ListProvisioningArtifactsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListProvisioningArtifactsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProvisioningArtifactsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListProvisioningArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisioningArtifactsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListProvisioningArtifactsRequestPrivate
 *
 * @brief  Private implementation for ListProvisioningArtifactsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisioningArtifactsRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListProvisioningArtifactsRequest instance.
 */
ListProvisioningArtifactsRequestPrivate::ListProvisioningArtifactsRequestPrivate(
    const ServiceCatalogRequest::Action action, ListProvisioningArtifactsRequest * const q)
    : ListProvisioningArtifactsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListProvisioningArtifactsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProvisioningArtifactsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProvisioningArtifactsRequest instance.
 */
ListProvisioningArtifactsRequestPrivate::ListProvisioningArtifactsRequestPrivate(
    const ListProvisioningArtifactsRequestPrivate &other, ListProvisioningArtifactsRequest * const q)
    : ListProvisioningArtifactsPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
