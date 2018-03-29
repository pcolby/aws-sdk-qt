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

#include "createprovisioningartifactrequest.h"
#include "createprovisioningartifactrequest_p.h"
#include "createprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreateProvisioningArtifactRequest
 *
 * @brief  Implements ServiceCatalog CreateProvisioningArtifact requests.
 *
 * @see    ServiceCatalogClient::createProvisioningArtifact
 */

/**
 * @brief  Constructs a new CreateProvisioningArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProvisioningArtifactRequest::CreateProvisioningArtifactRequest(const CreateProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new CreateProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProvisioningArtifactRequest object.
 */
CreateProvisioningArtifactRequest::CreateProvisioningArtifactRequest()
    : ServiceCatalogRequest(new CreateProvisioningArtifactRequestPrivate(ServiceCatalogRequest::CreateProvisioningArtifactAction, this))
{

}

bool CreateProvisioningArtifactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateProvisioningArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProvisioningArtifactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new CreateProvisioningArtifactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateProvisioningArtifactRequestPrivate
 *
 * @brief  Private implementation for CreateProvisioningArtifactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProvisioningArtifactRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreateProvisioningArtifactRequest instance.
 */
CreateProvisioningArtifactRequestPrivate::CreateProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateProvisioningArtifactRequest * const q)
    : CreateProvisioningArtifactPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateProvisioningArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProvisioningArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProvisioningArtifactRequest instance.
 */
CreateProvisioningArtifactRequestPrivate::CreateProvisioningArtifactRequestPrivate(
    const CreateProvisioningArtifactRequestPrivate &other, CreateProvisioningArtifactRequest * const q)
    : CreateProvisioningArtifactPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
