// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateApplicationRequest
 * \brief The CreateApplicationRequest class provides an interface for ServiceCatalogAppRegistry CreateApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::createApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new CreateApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::CreateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateApplicationRequestPrivate
 * \brief The CreateApplicationRequestPrivate class provides private implementation for CreateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a CreateApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, CreateApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
