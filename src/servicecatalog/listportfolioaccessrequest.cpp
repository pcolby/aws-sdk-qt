// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportfolioaccessrequest.h"
#include "listportfolioaccessrequest_p.h"
#include "listportfolioaccessresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessRequest
 * \brief The ListPortfolioAccessRequest class provides an interface for ServiceCatalog ListPortfolioAccess requests.
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
 * \sa ServiceCatalogClient::listPortfolioAccess
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortfolioAccessRequest::ListPortfolioAccessRequest(const ListPortfolioAccessRequest &other)
    : ServiceCatalogRequest(new ListPortfolioAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortfolioAccessRequest object.
 */
ListPortfolioAccessRequest::ListPortfolioAccessRequest()
    : ServiceCatalogRequest(new ListPortfolioAccessRequestPrivate(ServiceCatalogRequest::ListPortfolioAccessAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortfolioAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortfolioAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortfolioAccessRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfolioAccessResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessRequestPrivate
 * \brief The ListPortfolioAccessRequestPrivate class provides private implementation for ListPortfolioAccessRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfolioAccessRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListPortfolioAccessRequestPrivate::ListPortfolioAccessRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortfolioAccessRequest
 * class' copy constructor.
 */
ListPortfolioAccessRequestPrivate::ListPortfolioAccessRequestPrivate(
    const ListPortfolioAccessRequestPrivate &other, ListPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
