// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociatedattributegroupsrequest.h"
#include "listassociatedattributegroupsrequest_p.h"
#include "listassociatedattributegroupsresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedAttributeGroupsRequest
 * \brief The ListAssociatedAttributeGroupsRequest class provides an interface for ServiceCatalogAppRegistry ListAssociatedAttributeGroups requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAssociatedAttributeGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedAttributeGroupsRequest::ListAssociatedAttributeGroupsRequest(const ListAssociatedAttributeGroupsRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListAssociatedAttributeGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedAttributeGroupsRequest object.
 */
ListAssociatedAttributeGroupsRequest::ListAssociatedAttributeGroupsRequest()
    : ServiceCatalogAppRegistryRequest(new ListAssociatedAttributeGroupsRequestPrivate(ServiceCatalogAppRegistryRequest::ListAssociatedAttributeGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedAttributeGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedAttributeGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedAttributeGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedAttributeGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAssociatedAttributeGroupsRequestPrivate
 * \brief The ListAssociatedAttributeGroupsRequestPrivate class provides private implementation for ListAssociatedAttributeGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAssociatedAttributeGroupsRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListAssociatedAttributeGroupsRequestPrivate::ListAssociatedAttributeGroupsRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListAssociatedAttributeGroupsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedAttributeGroupsRequest
 * class' copy constructor.
 */
ListAssociatedAttributeGroupsRequestPrivate::ListAssociatedAttributeGroupsRequestPrivate(
    const ListAssociatedAttributeGroupsRequestPrivate &other, ListAssociatedAttributeGroupsRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
