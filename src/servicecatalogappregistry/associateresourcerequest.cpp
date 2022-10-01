// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateresourcerequest.h"
#include "associateresourcerequest_p.h"
#include "associateresourceresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceRequest
 * \brief The AssociateResourceRequest class provides an interface for ServiceCatalogAppRegistry AssociateResource requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::associateResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateResourceRequest::AssociateResourceRequest(const AssociateResourceRequest &other)
    : ServiceCatalogAppRegistryRequest(new AssociateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateResourceRequest object.
 */
AssociateResourceRequest::AssociateResourceRequest()
    : ServiceCatalogAppRegistryRequest(new AssociateResourceRequestPrivate(ServiceCatalogAppRegistryRequest::AssociateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceRequestPrivate
 * \brief The AssociateResourceRequestPrivate class provides private implementation for AssociateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a AssociateResourceRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
AssociateResourceRequestPrivate::AssociateResourceRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, AssociateResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateResourceRequest
 * class' copy constructor.
 */
AssociateResourceRequestPrivate::AssociateResourceRequestPrivate(
    const AssociateResourceRequestPrivate &other, AssociateResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
