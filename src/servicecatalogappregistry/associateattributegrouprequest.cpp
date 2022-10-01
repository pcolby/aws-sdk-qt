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

#include "associateattributegrouprequest.h"
#include "associateattributegrouprequest_p.h"
#include "associateattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateAttributeGroupRequest
 * \brief The AssociateAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry AssociateAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::associateAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateAttributeGroupRequest::AssociateAttributeGroupRequest(const AssociateAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new AssociateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateAttributeGroupRequest object.
 */
AssociateAttributeGroupRequest::AssociateAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new AssociateAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::AssociateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateAttributeGroupRequestPrivate
 * \brief The AssociateAttributeGroupRequestPrivate class provides private implementation for AssociateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a AssociateAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
AssociateAttributeGroupRequestPrivate::AssociateAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, AssociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateAttributeGroupRequest
 * class' copy constructor.
 */
AssociateAttributeGroupRequestPrivate::AssociateAttributeGroupRequestPrivate(
    const AssociateAttributeGroupRequestPrivate &other, AssociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
