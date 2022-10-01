/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
