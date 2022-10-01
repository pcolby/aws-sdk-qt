// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateattributegrouprequest.h"
#include "updateattributegrouprequest_p.h"
#include "updateattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupRequest
 * \brief The UpdateAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry UpdateAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::updateAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAttributeGroupRequest::UpdateAttributeGroupRequest(const UpdateAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new UpdateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAttributeGroupRequest object.
 */
UpdateAttributeGroupRequest::UpdateAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new UpdateAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::UpdateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupRequestPrivate
 * \brief The UpdateAttributeGroupRequestPrivate class provides private implementation for UpdateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a UpdateAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
UpdateAttributeGroupRequestPrivate::UpdateAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, UpdateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAttributeGroupRequest
 * class' copy constructor.
 */
UpdateAttributeGroupRequestPrivate::UpdateAttributeGroupRequestPrivate(
    const UpdateAttributeGroupRequestPrivate &other, UpdateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
