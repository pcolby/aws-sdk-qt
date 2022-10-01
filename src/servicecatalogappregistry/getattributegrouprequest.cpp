// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getattributegrouprequest.h"
#include "getattributegrouprequest_p.h"
#include "getattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupRequest
 * \brief The GetAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry GetAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetAttributeGroupRequest::GetAttributeGroupRequest(const GetAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new GetAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAttributeGroupRequest object.
 */
GetAttributeGroupRequest::GetAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new GetAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::GetAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupRequestPrivate
 * \brief The GetAttributeGroupRequestPrivate class provides private implementation for GetAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
GetAttributeGroupRequestPrivate::GetAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, GetAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAttributeGroupRequest
 * class' copy constructor.
 */
GetAttributeGroupRequestPrivate::GetAttributeGroupRequestPrivate(
    const GetAttributeGroupRequestPrivate &other, GetAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
