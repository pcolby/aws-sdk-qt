// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
