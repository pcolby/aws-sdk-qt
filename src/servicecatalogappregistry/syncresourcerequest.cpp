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
