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

#include "disassociateattributegrouprequest.h"
#include "disassociateattributegrouprequest_p.h"
#include "disassociateattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupRequest
 * \brief The DisassociateAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry DisassociateAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::disassociateAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAttributeGroupRequest::DisassociateAttributeGroupRequest(const DisassociateAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new DisassociateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAttributeGroupRequest object.
 */
DisassociateAttributeGroupRequest::DisassociateAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new DisassociateAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::DisassociateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupRequestPrivate
 * \brief The DisassociateAttributeGroupRequestPrivate class provides private implementation for DisassociateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DisassociateAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
DisassociateAttributeGroupRequestPrivate::DisassociateAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, DisassociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAttributeGroupRequest
 * class' copy constructor.
 */
DisassociateAttributeGroupRequestPrivate::DisassociateAttributeGroupRequestPrivate(
    const DisassociateAttributeGroupRequestPrivate &other, DisassociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
