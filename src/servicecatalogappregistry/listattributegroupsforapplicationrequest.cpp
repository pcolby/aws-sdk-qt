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

#include "listattributegroupsforapplicationrequest.h"
#include "listattributegroupsforapplicationrequest_p.h"
#include "listattributegroupsforapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationRequest
 * \brief The ListAttributeGroupsForApplicationRequest class provides an interface for ServiceCatalogAppRegistry ListAttributeGroupsForApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroupsForApplication
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttributeGroupsForApplicationRequest::ListAttributeGroupsForApplicationRequest(const ListAttributeGroupsForApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsForApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttributeGroupsForApplicationRequest object.
 */
ListAttributeGroupsForApplicationRequest::ListAttributeGroupsForApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsForApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::ListAttributeGroupsForApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttributeGroupsForApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttributeGroupsForApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttributeGroupsForApplicationRequest::response(QNetworkReply * const reply) const
{
    return new ListAttributeGroupsForApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationRequestPrivate
 * \brief The ListAttributeGroupsForApplicationRequestPrivate class provides private implementation for ListAttributeGroupsForApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListAttributeGroupsForApplicationRequestPrivate::ListAttributeGroupsForApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListAttributeGroupsForApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttributeGroupsForApplicationRequest
 * class' copy constructor.
 */
ListAttributeGroupsForApplicationRequestPrivate::ListAttributeGroupsForApplicationRequestPrivate(
    const ListAttributeGroupsForApplicationRequestPrivate &other, ListAttributeGroupsForApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
