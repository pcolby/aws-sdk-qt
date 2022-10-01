// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconstraintsforportfoliorequest.h"
#include "listconstraintsforportfoliorequest_p.h"
#include "listconstraintsforportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioRequest
 * \brief The ListConstraintsForPortfolioRequest class provides an interface for ServiceCatalog ListConstraintsForPortfolio requests.
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
 * \sa ServiceCatalogClient::listConstraintsForPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
ListConstraintsForPortfolioRequest::ListConstraintsForPortfolioRequest(const ListConstraintsForPortfolioRequest &other)
    : ServiceCatalogRequest(new ListConstraintsForPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConstraintsForPortfolioRequest object.
 */
ListConstraintsForPortfolioRequest::ListConstraintsForPortfolioRequest()
    : ServiceCatalogRequest(new ListConstraintsForPortfolioRequestPrivate(ServiceCatalogRequest::ListConstraintsForPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool ListConstraintsForPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConstraintsForPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConstraintsForPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new ListConstraintsForPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListConstraintsForPortfolioRequestPrivate
 * \brief The ListConstraintsForPortfolioRequestPrivate class provides private implementation for ListConstraintsForPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListConstraintsForPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListConstraintsForPortfolioRequestPrivate::ListConstraintsForPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, ListConstraintsForPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConstraintsForPortfolioRequest
 * class' copy constructor.
 */
ListConstraintsForPortfolioRequestPrivate::ListConstraintsForPortfolioRequestPrivate(
    const ListConstraintsForPortfolioRequestPrivate &other, ListConstraintsForPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
