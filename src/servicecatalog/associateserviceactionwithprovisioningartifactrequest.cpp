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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
