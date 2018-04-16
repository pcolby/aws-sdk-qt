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

#include "createprovisionedproductplanrequest.h"
#include "createprovisionedproductplanrequest_p.h"
#include "createprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProvisionedProductPlanRequest
 *
 * \brief The CreateProvisionedProductPlanRequest class encapsulates ServiceCatalog CreateProvisionedProductPlan requests.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::createProvisionedProductPlan
 */

/*!
 * @brief  Constructs a new CreateProvisionedProductPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProvisionedProductPlanRequest::CreateProvisionedProductPlanRequest(const CreateProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new CreateProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateProvisionedProductPlanRequest object.
 */
CreateProvisionedProductPlanRequest::CreateProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new CreateProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::CreateProvisionedProductPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateProvisionedProductPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProvisionedProductPlanResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateProvisionedProductPlanResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateProvisionedProductPlanRequestPrivate
 *
 * @brief  Private implementation for CreateProvisionedProductPlanRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateProvisionedProductPlanRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreateProvisionedProductPlanRequest instance.
 */
CreateProvisionedProductPlanRequestPrivate::CreateProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateProvisionedProductPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProvisionedProductPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProvisionedProductPlanRequest instance.
 */
CreateProvisionedProductPlanRequestPrivate::CreateProvisionedProductPlanRequestPrivate(
    const CreateProvisionedProductPlanRequestPrivate &other, CreateProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
