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

#include "updateprovisioningartifactrequest.h"
#include "updateprovisioningartifactrequest_p.h"
#include "updateprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdateProvisioningArtifactRequest
 *
 * @brief  Implements ServiceCatalog UpdateProvisioningArtifact requests.
 *
 * @see    ServiceCatalogClient::updateProvisioningArtifact
 */

/**
 * @brief  Constructs a new UpdateProvisioningArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProvisioningArtifactResponse::UpdateProvisioningArtifactResponse(

/**
 * @brief  Constructs a new UpdateProvisioningArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProvisioningArtifactRequest::UpdateProvisioningArtifactRequest(const UpdateProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new UpdateProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProvisioningArtifactRequest object.
 */
UpdateProvisioningArtifactRequest::UpdateProvisioningArtifactRequest()
    : ServiceCatalogRequest(new UpdateProvisioningArtifactRequestPrivate(ServiceCatalogRequest::UpdateProvisioningArtifactAction, this))
{

}

bool UpdateProvisioningArtifactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProvisioningArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProvisioningArtifactResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdateProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProvisioningArtifactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProvisioningArtifactRequestPrivate
 *
 * @brief  Private implementation for UpdateProvisioningArtifactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisioningArtifactRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateProvisioningArtifactRequest instance.
 */
UpdateProvisioningArtifactRequestPrivate::UpdateProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProvisioningArtifactRequest * const q)
    : UpdateProvisioningArtifactPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisioningArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProvisioningArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProvisioningArtifactRequest instance.
 */
UpdateProvisioningArtifactRequestPrivate::UpdateProvisioningArtifactRequestPrivate(
    const UpdateProvisioningArtifactRequestPrivate &other, UpdateProvisioningArtifactRequest * const q)
    : UpdateProvisioningArtifactPrivate(other, q)
{

}
