// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchprovisionedproductsrequest.h"
#include "searchprovisionedproductsrequest_p.h"
#include "searchprovisionedproductsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProvisionedProductsRequest
 * \brief The SearchProvisionedProductsRequest class provides an interface for ServiceCatalog SearchProvisionedProducts requests.
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
 * \sa ServiceCatalogClient::searchProvisionedProducts
 */

/*!
 * Constructs a copy of \a other.
 */
SearchProvisionedProductsRequest::SearchProvisionedProductsRequest(const SearchProvisionedProductsRequest &other)
    : ServiceCatalogRequest(new SearchProvisionedProductsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchProvisionedProductsRequest object.
 */
SearchProvisionedProductsRequest::SearchProvisionedProductsRequest()
    : ServiceCatalogRequest(new SearchProvisionedProductsRequestPrivate(ServiceCatalogRequest::SearchProvisionedProductsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchProvisionedProductsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchProvisionedProductsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchProvisionedProductsRequest::response(QNetworkReply * const reply) const
{
    return new SearchProvisionedProductsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::SearchProvisionedProductsRequestPrivate
 * \brief The SearchProvisionedProductsRequestPrivate class provides private implementation for SearchProvisionedProductsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProvisionedProductsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
SearchProvisionedProductsRequestPrivate::SearchProvisionedProductsRequestPrivate(
    const ServiceCatalogRequest::Action action, SearchProvisionedProductsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchProvisionedProductsRequest
 * class' copy constructor.
 */
SearchProvisionedProductsRequestPrivate::SearchProvisionedProductsRequestPrivate(
    const SearchProvisionedProductsRequestPrivate &other, SearchProvisionedProductsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
