// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "syncresourcerequest.h"
#include "syncresourcerequest_p.h"
#include "syncresourceresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::SyncResourceRequest
 * \brief The SyncResourceRequest class provides an interface for ServiceCatalogAppRegistry SyncResource requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::syncResource
 */

/*!
 * Constructs a copy of \a other.
 */
SyncResourceRequest::SyncResourceRequest(const SyncResourceRequest &other)
    : ServiceCatalogAppRegistryRequest(new SyncResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SyncResourceRequest object.
 */
SyncResourceRequest::SyncResourceRequest()
    : ServiceCatalogAppRegistryRequest(new SyncResourceRequestPrivate(ServiceCatalogAppRegistryRequest::SyncResourceAction, this))
{

}

/*!
 * \reimp
 */
bool SyncResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SyncResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SyncResourceRequest::response(QNetworkReply * const reply) const
{
    return new SyncResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::SyncResourceRequestPrivate
 * \brief The SyncResourceRequestPrivate class provides private implementation for SyncResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a SyncResourceRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
SyncResourceRequestPrivate::SyncResourceRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, SyncResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SyncResourceRequest
 * class' copy constructor.
 */
SyncResourceRequestPrivate::SyncResourceRequestPrivate(
    const SyncResourceRequestPrivate &other, SyncResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
