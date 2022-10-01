// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateattributegrouprequest.h"
#include "disassociateattributegrouprequest_p.h"
#include "disassociateattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupRequest
 * \brief The DisassociateAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry DisassociateAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::disassociateAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAttributeGroupRequest::DisassociateAttributeGroupRequest(const DisassociateAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new DisassociateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAttributeGroupRequest object.
 */
DisassociateAttributeGroupRequest::DisassociateAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new DisassociateAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::DisassociateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DisassociateAttributeGroupRequestPrivate
 * \brief The DisassociateAttributeGroupRequestPrivate class provides private implementation for DisassociateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DisassociateAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
DisassociateAttributeGroupRequestPrivate::DisassociateAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, DisassociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAttributeGroupRequest
 * class' copy constructor.
 */
DisassociateAttributeGroupRequestPrivate::DisassociateAttributeGroupRequestPrivate(
    const DisassociateAttributeGroupRequestPrivate &other, DisassociateAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
