// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbudgetsforresourcerequest.h"
#include "listbudgetsforresourcerequest_p.h"
#include "listbudgetsforresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceRequest
 * \brief The ListBudgetsForResourceRequest class provides an interface for ServiceCatalog ListBudgetsForResource requests.
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
 * \sa ServiceCatalogClient::listBudgetsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListBudgetsForResourceRequest::ListBudgetsForResourceRequest(const ListBudgetsForResourceRequest &other)
    : ServiceCatalogRequest(new ListBudgetsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBudgetsForResourceRequest object.
 */
ListBudgetsForResourceRequest::ListBudgetsForResourceRequest()
    : ServiceCatalogRequest(new ListBudgetsForResourceRequestPrivate(ServiceCatalogRequest::ListBudgetsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListBudgetsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBudgetsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBudgetsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListBudgetsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceRequestPrivate
 * \brief The ListBudgetsForResourceRequestPrivate class provides private implementation for ListBudgetsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListBudgetsForResourceRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListBudgetsForResourceRequestPrivate::ListBudgetsForResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, ListBudgetsForResourceRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBudgetsForResourceRequest
 * class' copy constructor.
 */
ListBudgetsForResourceRequestPrivate::ListBudgetsForResourceRequestPrivate(
    const ListBudgetsForResourceRequestPrivate &other, ListBudgetsForResourceRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
