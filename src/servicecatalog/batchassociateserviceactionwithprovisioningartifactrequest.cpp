// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchassociateserviceactionwithprovisioningartifactrequest.h"
#include "batchassociateserviceactionwithprovisioningartifactrequest_p.h"
#include "batchassociateserviceactionwithprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::BatchAssociateServiceActionWithProvisioningArtifactRequest
 * \brief The BatchAssociateServiceActionWithProvisioningArtifactRequest class provides an interface for ServiceCatalog BatchAssociateServiceActionWithProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::batchAssociateServiceActionWithProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
BatchAssociateServiceActionWithProvisioningArtifactRequest::BatchAssociateServiceActionWithProvisioningArtifactRequest(const BatchAssociateServiceActionWithProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchAssociateServiceActionWithProvisioningArtifactRequest object.
 */
BatchAssociateServiceActionWithProvisioningArtifactRequest::BatchAssociateServiceActionWithProvisioningArtifactRequest()
    : ServiceCatalogRequest(new BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(ServiceCatalogRequest::BatchAssociateServiceActionWithProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool BatchAssociateServiceActionWithProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchAssociateServiceActionWithProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchAssociateServiceActionWithProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new BatchAssociateServiceActionWithProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate
 * \brief The BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate class provides private implementation for BatchAssociateServiceActionWithProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate::BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, BatchAssociateServiceActionWithProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchAssociateServiceActionWithProvisioningArtifactRequest
 * class' copy constructor.
 */
BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate::BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate(
    const BatchAssociateServiceActionWithProvisioningArtifactRequestPrivate &other, BatchAssociateServiceActionWithProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
