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

#include "updateprovisioningartifactrequest.h"
#include "updateprovisioningartifactrequest_p.h"
#include "updateprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisioningArtifactRequest
 * \brief The UpdateProvisioningArtifactRequest class provides an interface for ServiceCatalog UpdateProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::updateProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProvisioningArtifactRequest::UpdateProvisioningArtifactRequest(const UpdateProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new UpdateProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProvisioningArtifactRequest object.
 */
UpdateProvisioningArtifactRequest::UpdateProvisioningArtifactRequest()
    : ServiceCatalogRequest(new UpdateProvisioningArtifactRequestPrivate(ServiceCatalogRequest::UpdateProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisioningArtifactRequestPrivate
 * \brief The UpdateProvisioningArtifactRequestPrivate class provides private implementation for UpdateProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateProvisioningArtifactRequestPrivate::UpdateProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProvisioningArtifactRequest
 * class' copy constructor.
 */
UpdateProvisioningArtifactRequestPrivate::UpdateProvisioningArtifactRequestPrivate(
    const UpdateProvisioningArtifactRequestPrivate &other, UpdateProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
