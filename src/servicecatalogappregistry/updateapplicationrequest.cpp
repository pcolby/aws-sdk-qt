// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationrequest.h"
#include "updateapplicationrequest_p.h"
#include "updateapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateApplicationRequest
 * \brief The UpdateApplicationRequest class provides an interface for ServiceCatalogAppRegistry UpdateApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::updateApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationRequest::UpdateApplicationRequest(const UpdateApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new UpdateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationRequest object.
 */
UpdateApplicationRequest::UpdateApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new UpdateApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::UpdateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateApplicationRequestPrivate
 * \brief The UpdateApplicationRequestPrivate class provides private implementation for UpdateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a UpdateApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, UpdateApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationRequest
 * class' copy constructor.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const UpdateApplicationRequestPrivate &other, UpdateApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
