// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationrequest.h"
#include "getapplicationrequest_p.h"
#include "getapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetApplicationRequest
 * \brief The GetApplicationRequest class provides an interface for ServiceCatalogAppRegistry GetApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getApplication
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationRequest::GetApplicationRequest(const GetApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new GetApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationRequest object.
 */
GetApplicationRequest::GetApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new GetApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::GetApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetApplicationRequestPrivate
 * \brief The GetApplicationRequestPrivate class provides private implementation for GetApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, GetApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationRequest
 * class' copy constructor.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const GetApplicationRequestPrivate &other, GetApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
