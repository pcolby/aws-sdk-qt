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

#include "getassociatedresourcerequest.h"
#include "getassociatedresourcerequest_p.h"
#include "getassociatedresourceresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceRequest
 * \brief The GetAssociatedResourceRequest class provides an interface for ServiceCatalogAppRegistry GetAssociatedResource requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAssociatedResource
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssociatedResourceRequest::GetAssociatedResourceRequest(const GetAssociatedResourceRequest &other)
    : ServiceCatalogAppRegistryRequest(new GetAssociatedResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssociatedResourceRequest object.
 */
GetAssociatedResourceRequest::GetAssociatedResourceRequest()
    : ServiceCatalogAppRegistryRequest(new GetAssociatedResourceRequestPrivate(ServiceCatalogAppRegistryRequest::GetAssociatedResourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssociatedResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssociatedResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssociatedResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetAssociatedResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceRequestPrivate
 * \brief The GetAssociatedResourceRequestPrivate class provides private implementation for GetAssociatedResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAssociatedResourceRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
GetAssociatedResourceRequestPrivate::GetAssociatedResourceRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, GetAssociatedResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssociatedResourceRequest
 * class' copy constructor.
 */
GetAssociatedResourceRequestPrivate::GetAssociatedResourceRequestPrivate(
    const GetAssociatedResourceRequestPrivate &other, GetAssociatedResourceRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
