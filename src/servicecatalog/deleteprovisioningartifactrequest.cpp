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

#include "deleteprovisioningartifactrequest.h"
#include "deleteprovisioningartifactrequest_p.h"
#include "deleteprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeleteProvisioningArtifactRequest
 *
 * @brief  Implements ServiceCatalog DeleteProvisioningArtifact requests.
 *
 * @see    ServiceCatalogClient::deleteProvisioningArtifact
 */

/**
 * @brief  Constructs a new DeleteProvisioningArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProvisioningArtifactResponse::DeleteProvisioningArtifactResponse(

/**
 * @brief  Constructs a new DeleteProvisioningArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProvisioningArtifactRequest::DeleteProvisioningArtifactRequest(const DeleteProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new DeleteProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProvisioningArtifactRequest object.
 */
DeleteProvisioningArtifactRequest::DeleteProvisioningArtifactRequest()
    : ServiceCatalogRequest(new DeleteProvisioningArtifactRequestPrivate(ServiceCatalogRequest::DeleteProvisioningArtifactAction, this))
{

}

bool DeleteProvisioningArtifactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProvisioningArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProvisioningArtifactResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DeleteProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProvisioningArtifactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProvisioningArtifactRequestPrivate
 *
 * @brief  Private implementation for DeleteProvisioningArtifactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProvisioningArtifactRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeleteProvisioningArtifactRequest instance.
 */
DeleteProvisioningArtifactRequestPrivate::DeleteProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProvisioningArtifactRequest * const q)
    : DeleteProvisioningArtifactPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProvisioningArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProvisioningArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProvisioningArtifactRequest instance.
 */
DeleteProvisioningArtifactRequestPrivate::DeleteProvisioningArtifactRequestPrivate(
    const DeleteProvisioningArtifactRequestPrivate &other, DeleteProvisioningArtifactRequest * const q)
    : DeleteProvisioningArtifactPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
