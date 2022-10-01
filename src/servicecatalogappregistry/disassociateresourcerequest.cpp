// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
