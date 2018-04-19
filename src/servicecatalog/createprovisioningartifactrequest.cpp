/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createprovisioningartifactrequest.h"
#include "createprovisioningartifactrequest_p.h"
#include "createprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProvisioningArtifactRequest
 * \brief The CreateProvisioningArtifactRequest class provides an interface for ServiceCatalog CreateProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::createProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProvisioningArtifactRequest::CreateProvisioningArtifactRequest(const CreateProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new CreateProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProvisioningArtifactRequest object.
 */
CreateProvisioningArtifactRequest::CreateProvisioningArtifactRequest()
    : ServiceCatalogRequest(new CreateProvisioningArtifactRequestPrivate(ServiceCatalogRequest::CreateProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new CreateProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CreateProvisioningArtifactRequestPrivate
 * \brief The CreateProvisioningArtifactRequestPrivate class provides private implementation for CreateProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CreateProvisioningArtifactRequestPrivate::CreateProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProvisioningArtifactRequest
 * class' copy constructor.
 */
CreateProvisioningArtifactRequestPrivate::CreateProvisioningArtifactRequestPrivate(
    const CreateProvisioningArtifactRequestPrivate &other, CreateProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
