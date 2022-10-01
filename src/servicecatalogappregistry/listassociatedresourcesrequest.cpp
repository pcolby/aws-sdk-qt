// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociatedresourcesrequest.h"
#include "listassociatedresourcesrequest_p.h"
#include "listassociatedresourcesresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesRequest
 * \brief The ListAssociatedResourcesRequest class provides an interface for ServiceCatalogAppRegistry ListAssociatedResources requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAssociatedResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedResourcesRequest::ListAssociatedResourcesRequest(const ListAssociatedResourcesRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListAssociatedResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedResourcesRequest object.
 */
ListAssociatedResourcesRequest::ListAssociatedResourcesRequest()
    : ServiceCatalogAppRegistryRequest(new ListAssociatedResourcesRequestPrivate(ServiceCatalogAppRegistryRequest::ListAssociatedResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedResourcesRequestPrivate
 * \brief The ListAssociatedResourcesRequestPrivate class provides private implementation for ListAssociatedResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAssociatedResourcesRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListAssociatedResourcesRequestPrivate::ListAssociatedResourcesRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListAssociatedResourcesRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedResourcesRequest
 * class' copy constructor.
 */
ListAssociatedResourcesRequestPrivate::ListAssociatedResourcesRequestPrivate(
    const ListAssociatedResourcesRequestPrivate &other, ListAssociatedResourcesRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
