// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportfoliosrequest.h"
#include "listportfoliosrequest_p.h"
#include "listportfoliosresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosRequest
 * \brief The ListPortfoliosRequest class provides an interface for ServiceCatalog ListPortfolios requests.
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
 * \sa ServiceCatalogClient::listPortfolios
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortfoliosRequest::ListPortfoliosRequest(const ListPortfoliosRequest &other)
    : ServiceCatalogRequest(new ListPortfoliosRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortfoliosRequest object.
 */
ListPortfoliosRequest::ListPortfoliosRequest()
    : ServiceCatalogRequest(new ListPortfoliosRequestPrivate(ServiceCatalogRequest::ListPortfoliosAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortfoliosRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortfoliosResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortfoliosRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfoliosResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfoliosRequestPrivate
 * \brief The ListPortfoliosRequestPrivate class provides private implementation for ListPortfoliosRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListPortfoliosRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListPortfoliosRequestPrivate::ListPortfoliosRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfoliosRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortfoliosRequest
 * class' copy constructor.
 */
ListPortfoliosRequestPrivate::ListPortfoliosRequestPrivate(
    const ListPortfoliosRequestPrivate &other, ListPortfoliosRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
