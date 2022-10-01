// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
