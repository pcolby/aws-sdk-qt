// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateserviceactionwithprovisioningartifactrequest.h"
#include "associateserviceactionwithprovisioningartifactrequest_p.h"
#include "associateserviceactionwithprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateServiceActionWithProvisioningArtifactRequest
 * \brief The AssociateServiceActionWithProvisioningArtifactRequest class provides an interface for ServiceCatalog AssociateServiceActionWithProvisioningArtifact requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::associateServiceActionWithProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateServiceActionWithProvisioningArtifactRequest::AssociateServiceActionWithProvisioningArtifactRequest(const AssociateServiceActionWithProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new AssociateServiceActionWithProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateServiceActionWithProvisioningArtifactRequest object.
 */
AssociateServiceActionWithProvisioningArtifactRequest::AssociateServiceActionWithProvisioningArtifactRequest()
    : ServiceCatalogRequest(new AssociateServiceActionWithProvisioningArtifactRequestPrivate(ServiceCatalogRequest::AssociateServiceActionWithProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateServiceActionWithProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateServiceActionWithProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateServiceActionWithProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new AssociateServiceActionWithProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateServiceActionWithProvisioningArtifactRequestPrivate
 * \brief The AssociateServiceActionWithProvisioningArtifactRequestPrivate class provides private implementation for AssociateServiceActionWithProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateServiceActionWithProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateServiceActionWithProvisioningArtifactRequestPrivate::AssociateServiceActionWithProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateServiceActionWithProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateServiceActionWithProvisioningArtifactRequest
 * class' copy constructor.
 */
AssociateServiceActionWithProvisioningArtifactRequestPrivate::AssociateServiceActionWithProvisioningArtifactRequestPrivate(
    const AssociateServiceActionWithProvisioningArtifactRequestPrivate &other, AssociateServiceActionWithProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
