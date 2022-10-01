// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListApplicationsRequest
 * \brief The ListApplicationsRequest class provides an interface for ServiceCatalogAppRegistry ListApplications requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : ServiceCatalogAppRegistryRequest(new ListApplicationsRequestPrivate(ServiceCatalogAppRegistryRequest::ListApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListApplicationsRequestPrivate
 * \brief The ListApplicationsRequestPrivate class provides private implementation for ListApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListApplicationsRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListApplicationsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationsRequest
 * class' copy constructor.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ListApplicationsRequestPrivate &other, ListApplicationsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
