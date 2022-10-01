// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
