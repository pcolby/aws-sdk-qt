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

#include "disassociateserviceactionfromprovisioningartifactrequest.h"
#include "disassociateserviceactionfromprovisioningartifactrequest_p.h"
#include "disassociateserviceactionfromprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactRequest
 * \brief The DisassociateServiceActionFromProvisioningArtifactRequest class provides an interface for ServiceCatalog DisassociateServiceActionFromProvisioningArtifact requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::disassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateServiceActionFromProvisioningArtifactRequest::DisassociateServiceActionFromProvisioningArtifactRequest(const DisassociateServiceActionFromProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new DisassociateServiceActionFromProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactRequest object.
 */
DisassociateServiceActionFromProvisioningArtifactRequest::DisassociateServiceActionFromProvisioningArtifactRequest()
    : ServiceCatalogRequest(new DisassociateServiceActionFromProvisioningArtifactRequestPrivate(ServiceCatalogRequest::DisassociateServiceActionFromProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateServiceActionFromProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateServiceActionFromProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateServiceActionFromProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateServiceActionFromProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactRequestPrivate
 * \brief The DisassociateServiceActionFromProvisioningArtifactRequestPrivate class provides private implementation for DisassociateServiceActionFromProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DisassociateServiceActionFromProvisioningArtifactRequestPrivate::DisassociateServiceActionFromProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociateServiceActionFromProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateServiceActionFromProvisioningArtifactRequest
 * class' copy constructor.
 */
DisassociateServiceActionFromProvisioningArtifactRequestPrivate::DisassociateServiceActionFromProvisioningArtifactRequestPrivate(
    const DisassociateServiceActionFromProvisioningArtifactRequestPrivate &other, DisassociateServiceActionFromProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
