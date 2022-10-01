// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchproductsrequest.h"
#include "searchproductsrequest_p.h"
#include "searchproductsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProductsRequest
 * \brief The SearchProductsRequest class provides an interface for ServiceCatalog SearchProducts requests.
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
 * \sa ServiceCatalogClient::searchProducts
 */

/*!
 * Constructs a copy of \a other.
 */
SearchProductsRequest::SearchProductsRequest(const SearchProductsRequest &other)
    : ServiceCatalogRequest(new SearchProductsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchProductsRequest object.
 */
SearchProductsRequest::SearchProductsRequest()
    : ServiceCatalogRequest(new SearchProductsRequestPrivate(ServiceCatalogRequest::SearchProductsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchProductsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchProductsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchProductsRequest::response(QNetworkReply * const reply) const
{
    return new SearchProductsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::SearchProductsRequestPrivate
 * \brief The SearchProductsRequestPrivate class provides private implementation for SearchProductsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProductsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
SearchProductsRequestPrivate::SearchProductsRequestPrivate(
    const ServiceCatalogRequest::Action action, SearchProductsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchProductsRequest
 * class' copy constructor.
 */
SearchProductsRequestPrivate::SearchProductsRequestPrivate(
    const SearchProductsRequestPrivate &other, SearchProductsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
