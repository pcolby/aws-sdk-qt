/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchdisassociateserviceactionfromprovisioningartifactrequest.h"
#include "batchdisassociateserviceactionfromprovisioningartifactrequest_p.h"
#include "batchdisassociateserviceactionfromprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactRequest
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactRequest class provides an interface for ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::batchDisassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDisassociateServiceActionFromProvisioningArtifactRequest::BatchDisassociateServiceActionFromProvisioningArtifactRequest(const BatchDisassociateServiceActionFromProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactRequest object.
 */
BatchDisassociateServiceActionFromProvisioningArtifactRequest::BatchDisassociateServiceActionFromProvisioningArtifactRequest()
    : ServiceCatalogRequest(new BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(ServiceCatalogRequest::BatchDisassociateServiceActionFromProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDisassociateServiceActionFromProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDisassociateServiceActionFromProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDisassociateServiceActionFromProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new BatchDisassociateServiceActionFromProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate class provides private implementation for BatchDisassociateServiceActionFromProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate::BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, BatchDisassociateServiceActionFromProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDisassociateServiceActionFromProvisioningArtifactRequest
 * class' copy constructor.
 */
BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate::BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate(
    const BatchDisassociateServiceActionFromProvisioningArtifactRequestPrivate &other, BatchDisassociateServiceActionFromProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
