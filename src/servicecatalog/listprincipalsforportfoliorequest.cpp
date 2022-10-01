// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprincipalsforportfoliorequest.h"
#include "listprincipalsforportfoliorequest_p.h"
#include "listprincipalsforportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPrincipalsForPortfolioRequest
 * \brief The ListPrincipalsForPortfolioRequest class provides an interface for ServiceCatalog ListPrincipalsForPortfolio requests.
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
 * \sa ServiceCatalogClient::listPrincipalsForPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
ListPrincipalsForPortfolioRequest::ListPrincipalsForPortfolioRequest(const ListPrincipalsForPortfolioRequest &other)
    : ServiceCatalogRequest(new ListPrincipalsForPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPrincipalsForPortfolioRequest object.
 */
ListPrincipalsForPortfolioRequest::ListPrincipalsForPortfolioRequest()
    : ServiceCatalogRequest(new ListPrincipalsForPortfolioRequestPrivate(ServiceCatalogRequest::ListPrincipalsForPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrincipalsForPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPrincipalsForPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrincipalsForPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalsForPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListPrincipalsForPortfolioRequestPrivate
 * \brief The ListPrincipalsForPortfolioRequestPrivate class provides private implementation for ListPrincipalsForPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPrincipalsForPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListPrincipalsForPortfolioRequestPrivate::ListPrincipalsForPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPrincipalsForPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalsForPortfolioRequest
 * class' copy constructor.
 */
ListPrincipalsForPortfolioRequestPrivate::ListPrincipalsForPortfolioRequestPrivate(
    const ListPrincipalsForPortfolioRequestPrivate &other, ListPrincipalsForPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
