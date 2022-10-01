// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattributegroupsforapplicationrequest.h"
#include "listattributegroupsforapplicationrequest_p.h"
#include "listattributegroupsforapplicationresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationRequest
 * \brief The ListAttributeGroupsForApplicationRequest class provides an interface for ServiceCatalogAppRegistry ListAttributeGroupsForApplication requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::listAttributeGroupsForApplication
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttributeGroupsForApplicationRequest::ListAttributeGroupsForApplicationRequest(const ListAttributeGroupsForApplicationRequest &other)
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsForApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttributeGroupsForApplicationRequest object.
 */
ListAttributeGroupsForApplicationRequest::ListAttributeGroupsForApplicationRequest()
    : ServiceCatalogAppRegistryRequest(new ListAttributeGroupsForApplicationRequestPrivate(ServiceCatalogAppRegistryRequest::ListAttributeGroupsForApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttributeGroupsForApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttributeGroupsForApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttributeGroupsForApplicationRequest::response(QNetworkReply * const reply) const
{
    return new ListAttributeGroupsForApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ListAttributeGroupsForApplicationRequestPrivate
 * \brief The ListAttributeGroupsForApplicationRequestPrivate class provides private implementation for ListAttributeGroupsForApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ListAttributeGroupsForApplicationRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ListAttributeGroupsForApplicationRequestPrivate::ListAttributeGroupsForApplicationRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, ListAttributeGroupsForApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttributeGroupsForApplicationRequest
 * class' copy constructor.
 */
ListAttributeGroupsForApplicationRequestPrivate::ListAttributeGroupsForApplicationRequestPrivate(
    const ListAttributeGroupsForApplicationRequestPrivate &other, ListAttributeGroupsForApplicationRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
