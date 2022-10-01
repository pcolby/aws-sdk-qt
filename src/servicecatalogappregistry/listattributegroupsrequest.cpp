// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattributegroupsrequest.h"
#include "listattributegroupsrequest_p.h"
#include "listattributegroupsresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsRequest
 * \brief The ListAttributeGroupsRequest class provides an interface for ServiceCatalogAppRegistry ListAttributeGroups requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttributeGroupsRequest::ListAttributeGroupsRequest(const ListAttributeGroupsRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttributeGroupsRequest object.
 */
ListAttributeGroupsRequest::ListAttributeGroupsRequest()
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsRequestPrivate(ServiceCatalogAppRegistryRequest::ListAttributeGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttributeGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttributeGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttributeGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListAttributeGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsRequestPrivate
 * \brief The ListAttributeGroupsRequestPrivate class provides private implementation for ListAttributeGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListAttributeGroupsRequestPrivate::ListAttributeGroupsRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListAttributeGroupsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttributeGroupsRequest
 * class' copy constructor.
 */
ListAttributeGroupsRequestPrivate::ListAttributeGroupsRequestPrivate(
    const ListAttributeGroupsRequestPrivate &other, ListAttributeGroupsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
