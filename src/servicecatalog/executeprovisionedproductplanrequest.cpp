// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executeprovisionedproductplanrequest.h"
#include "executeprovisionedproductplanrequest_p.h"
#include "executeprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductPlanRequest
 * \brief The ExecuteProvisionedProductPlanRequest class provides an interface for ServiceCatalog ExecuteProvisionedProductPlan requests.
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
 * \sa ServiceCatalogClient::executeProvisionedProductPlan
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteProvisionedProductPlanRequest::ExecuteProvisionedProductPlanRequest(const ExecuteProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new ExecuteProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteProvisionedProductPlanRequest object.
 */
ExecuteProvisionedProductPlanRequest::ExecuteProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new ExecuteProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::ExecuteProvisionedProductPlanAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteProvisionedProductPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteProvisionedProductPlanResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductPlanRequestPrivate
 * \brief The ExecuteProvisionedProductPlanRequestPrivate class provides private implementation for ExecuteProvisionedProductPlanRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ExecuteProvisionedProductPlanRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ExecuteProvisionedProductPlanRequestPrivate::ExecuteProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, ExecuteProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteProvisionedProductPlanRequest
 * class' copy constructor.
 */
ExecuteProvisionedProductPlanRequestPrivate::ExecuteProvisionedProductPlanRequestPrivate(
    const ExecuteProvisionedProductPlanRequestPrivate &other, ExecuteProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
