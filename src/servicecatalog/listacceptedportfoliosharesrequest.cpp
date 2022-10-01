// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listacceptedportfoliosharesrequest.h"
#include "listacceptedportfoliosharesrequest_p.h"
#include "listacceptedportfoliosharesresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesRequest
 * \brief The ListAcceptedPortfolioSharesRequest class provides an interface for ServiceCatalog ListAcceptedPortfolioShares requests.
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
 * \sa ServiceCatalogClient::listAcceptedPortfolioShares
 */

/*!
 * Constructs a copy of \a other.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest(const ListAcceptedPortfolioSharesRequest &other)
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAcceptedPortfolioSharesRequest object.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest()
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(ServiceCatalogRequest::ListAcceptedPortfolioSharesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAcceptedPortfolioSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAcceptedPortfolioSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAcceptedPortfolioSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListAcceptedPortfolioSharesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesRequestPrivate
 * \brief The ListAcceptedPortfolioSharesRequestPrivate class provides private implementation for ListAcceptedPortfolioSharesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ServiceCatalogRequest::Action action, ListAcceptedPortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAcceptedPortfolioSharesRequest
 * class' copy constructor.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ListAcceptedPortfolioSharesRequestPrivate &other, ListAcceptedPortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
