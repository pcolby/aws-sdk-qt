// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportfoliosforproductrequest.h"
#include "listportfoliosforproductrequest_p.h"
#include "listportfoliosforproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductRequest
 * \brief The ListPortfoliosForProductRequest class provides an interface for ServiceCatalog ListPortfoliosForProduct requests.
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
 * \sa ServiceCatalogClient::listPortfoliosForProduct
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortfoliosForProductRequest::ListPortfoliosForProductRequest(const ListPortfoliosForProductRequest &other)
    : ServiceCatalogRequest(new ListPortfoliosForProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortfoliosForProductRequest object.
 */
ListPortfoliosForProductRequest::ListPortfoliosForProductRequest()
    : ServiceCatalogRequest(new ListPortfoliosForProductRequestPrivate(ServiceCatalogRequest::ListPortfoliosForProductAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortfoliosForProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortfoliosForProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortfoliosForProductRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfoliosForProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosForProductRequestPrivate
 * \brief The ListPortfoliosForProductRequestPrivate class provides private implementation for ListPortfoliosForProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfoliosForProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListPortfoliosForProductRequestPrivate::ListPortfoliosForProductRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfoliosForProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortfoliosForProductRequest
 * class' copy constructor.
 */
ListPortfoliosForProductRequestPrivate::ListPortfoliosForProductRequestPrivate(
    const ListPortfoliosForProductRequestPrivate &other, ListPortfoliosForProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
