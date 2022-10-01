// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteApplicationRequest
 * \brief The DeleteApplicationRequest class provides an interface for ServiceCatalogAppRegistry DeleteApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::deleteApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new DeleteApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::DeleteApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteApplicationRequestPrivate
 * \brief The DeleteApplicationRequestPrivate class provides private implementation for DeleteApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DeleteApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, DeleteApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
