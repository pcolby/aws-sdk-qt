// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprovisionedproductplanrequest.h"
#include "createprovisionedproductplanrequest_p.h"
#include "createprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProvisionedProductPlanRequest
 * \brief The CreateProvisionedProductPlanRequest class provides an interface for ServiceCatalog CreateProvisionedProductPlan requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::createProvisionedProductPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProvisionedProductPlanRequest::CreateProvisionedProductPlanRequest(const CreateProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new CreateProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProvisionedProductPlanRequest object.
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
 * Returns a CreateProvisionedProductPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateProvisionedProductPlanResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CreateProvisionedProductPlanRequestPrivate
 * \brief The CreateProvisionedProductPlanRequestPrivate class provides private implementation for CreateProvisionedProductPlanRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateProvisionedProductPlanRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CreateProvisionedProductPlanRequestPrivate::CreateProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProvisionedProductPlanRequest
 * class' copy constructor.
 */
CreateProvisionedProductPlanRequestPrivate::CreateProvisionedProductPlanRequestPrivate(
    const CreateProvisionedProductPlanRequestPrivate &other, CreateProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
