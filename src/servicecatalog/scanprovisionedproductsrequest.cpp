// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "scanprovisionedproductsrequest.h"
#include "scanprovisionedproductsrequest_p.h"
#include "scanprovisionedproductsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ScanProvisionedProductsRequest
 * \brief The ScanProvisionedProductsRequest class provides an interface for ServiceCatalog ScanProvisionedProducts requests.
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
 * \sa ServiceCatalogClient::scanProvisionedProducts
 */

/*!
 * Constructs a copy of \a other.
 */
ScanProvisionedProductsRequest::ScanProvisionedProductsRequest(const ScanProvisionedProductsRequest &other)
    : ServiceCatalogRequest(new ScanProvisionedProductsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ScanProvisionedProductsRequest object.
 */
ScanProvisionedProductsRequest::ScanProvisionedProductsRequest()
    : ServiceCatalogRequest(new ScanProvisionedProductsRequestPrivate(ServiceCatalogRequest::ScanProvisionedProductsAction, this))
{

}

/*!
 * \reimp
 */
bool ScanProvisionedProductsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ScanProvisionedProductsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ScanProvisionedProductsRequest::response(QNetworkReply * const reply) const
{
    return new ScanProvisionedProductsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ScanProvisionedProductsRequestPrivate
 * \brief The ScanProvisionedProductsRequestPrivate class provides private implementation for ScanProvisionedProductsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ScanProvisionedProductsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ScanProvisionedProductsRequestPrivate::ScanProvisionedProductsRequestPrivate(
    const ServiceCatalogRequest::Action action, ScanProvisionedProductsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ScanProvisionedProductsRequest
 * class' copy constructor.
 */
ScanProvisionedProductsRequestPrivate::ScanProvisionedProductsRequestPrivate(
    const ScanProvisionedProductsRequestPrivate &other, ScanProvisionedProductsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
