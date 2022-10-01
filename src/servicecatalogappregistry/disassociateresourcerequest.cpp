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

#include "disassociateresourcerequest.h"
#include "disassociateresourcerequest_p.h"
#include "disassociateresourceresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateResourceRequest
 * \brief The DisassociateResourceRequest class provides an interface for ServiceCatalogAppRegistry DisassociateResource requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::disassociateResource
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateResourceRequest::DisassociateResourceRequest(const DisassociateResourceRequest &other)
    : ServiceCatalogAppRegistryRequest(new DisassociateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateResourceRequest object.
 */
DisassociateResourceRequest::DisassociateResourceRequest()
    : ServiceCatalogAppRegistryRequest(new DisassociateResourceRequestPrivate(ServiceCatalogAppRegistryRequest::DisassociateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateResourceRequestPrivate
 * \brief The DisassociateResourceRequestPrivate class provides private implementation for DisassociateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DisassociateResourceRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
DisassociateResourceRequestPrivate::DisassociateResourceRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, DisassociateResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateResourceRequest
 * class' copy constructor.
 */
DisassociateResourceRequestPrivate::DisassociateResourceRequestPrivate(
    const DisassociateResourceRequestPrivate &other, DisassociateResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
