// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprovisioningartifactrequest.h"
#include "deleteprovisioningartifactrequest_p.h"
#include "deleteprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisioningArtifactRequest
 * \brief The DeleteProvisioningArtifactRequest class provides an interface for ServiceCatalog DeleteProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::deleteProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProvisioningArtifactRequest::DeleteProvisioningArtifactRequest(const DeleteProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new DeleteProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProvisioningArtifactRequest object.
 */
DeleteProvisioningArtifactRequest::DeleteProvisioningArtifactRequest()
    : ServiceCatalogRequest(new DeleteProvisioningArtifactRequestPrivate(ServiceCatalogRequest::DeleteProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisioningArtifactRequestPrivate
 * \brief The DeleteProvisioningArtifactRequestPrivate class provides private implementation for DeleteProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeleteProvisioningArtifactRequestPrivate::DeleteProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProvisioningArtifactRequest
 * class' copy constructor.
 */
DeleteProvisioningArtifactRequestPrivate::DeleteProvisioningArtifactRequestPrivate(
    const DeleteProvisioningArtifactRequestPrivate &other, DeleteProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
