// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createattributegrouprequest.h"
#include "createattributegrouprequest_p.h"
#include "createattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateAttributeGroupRequest
 * \brief The CreateAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry CreateAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::createAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAttributeGroupRequest::CreateAttributeGroupRequest(const CreateAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new CreateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAttributeGroupRequest object.
 */
CreateAttributeGroupRequest::CreateAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new CreateAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::CreateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::CreateAttributeGroupRequestPrivate
 * \brief The CreateAttributeGroupRequestPrivate class provides private implementation for CreateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a CreateAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
CreateAttributeGroupRequestPrivate::CreateAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, CreateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAttributeGroupRequest
 * class' copy constructor.
 */
CreateAttributeGroupRequestPrivate::CreateAttributeGroupRequestPrivate(
    const CreateAttributeGroupRequestPrivate &other, CreateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
