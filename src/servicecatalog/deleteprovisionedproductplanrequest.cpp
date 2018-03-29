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

#include "deleteprovisionedproductplanrequest.h"
#include "deleteprovisionedproductplanrequest_p.h"
#include "deleteprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DeleteProvisionedProductPlanRequest
 *
 * @brief  Implements ServiceCatalog DeleteProvisionedProductPlan requests.
 *
 * @see    ServiceCatalogClient::deleteProvisionedProductPlan
 */

/**
 * @brief  Constructs a new DeleteProvisionedProductPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProvisionedProductPlanRequest::DeleteProvisionedProductPlanRequest(const DeleteProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new DeleteProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProvisionedProductPlanRequest object.
 */
DeleteProvisionedProductPlanRequest::DeleteProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new DeleteProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::DeleteProvisionedProductPlanAction, this))
{

}

bool DeleteProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProvisionedProductPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProvisionedProductPlanResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProvisionedProductPlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProvisionedProductPlanRequestPrivate
 *
 * @brief  Private implementation for DeleteProvisionedProductPlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProvisionedProductPlanRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeleteProvisionedProductPlanRequest instance.
 */
DeleteProvisionedProductPlanRequestPrivate::DeleteProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProvisionedProductPlanRequest * const q)
    : DeleteProvisionedProductPlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProvisionedProductPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProvisionedProductPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProvisionedProductPlanRequest instance.
 */
DeleteProvisionedProductPlanRequestPrivate::DeleteProvisionedProductPlanRequestPrivate(
    const DeleteProvisionedProductPlanRequestPrivate &other, DeleteProvisionedProductPlanRequest * const q)
    : DeleteProvisionedProductPlanPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
