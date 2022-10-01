// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserviceactionsforprovisioningartifactrequest.h"
#include "listserviceactionsforprovisioningartifactrequest_p.h"
#include "listserviceactionsforprovisioningartifactresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsForProvisioningArtifactRequest
 * \brief The ListServiceActionsForProvisioningArtifactRequest class provides an interface for ServiceCatalog ListServiceActionsForProvisioningArtifact requests.
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
 * \sa ServiceCatalogClient::listServiceActionsForProvisioningArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
ListServiceActionsForProvisioningArtifactRequest::ListServiceActionsForProvisioningArtifactRequest(const ListServiceActionsForProvisioningArtifactRequest &other)
    : ServiceCatalogRequest(new ListServiceActionsForProvisioningArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServiceActionsForProvisioningArtifactRequest object.
 */
ListServiceActionsForProvisioningArtifactRequest::ListServiceActionsForProvisioningArtifactRequest()
    : ServiceCatalogRequest(new ListServiceActionsForProvisioningArtifactRequestPrivate(ServiceCatalogRequest::ListServiceActionsForProvisioningArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool ListServiceActionsForProvisioningArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServiceActionsForProvisioningArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServiceActionsForProvisioningArtifactRequest::response(QNetworkReply * const reply) const
{
    return new ListServiceActionsForProvisioningArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsForProvisioningArtifactRequestPrivate
 * \brief The ListServiceActionsForProvisioningArtifactRequestPrivate class provides private implementation for ListServiceActionsForProvisioningArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListServiceActionsForProvisioningArtifactRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListServiceActionsForProvisioningArtifactRequestPrivate::ListServiceActionsForProvisioningArtifactRequestPrivate(
    const ServiceCatalogRequest::Action action, ListServiceActionsForProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServiceActionsForProvisioningArtifactRequest
 * class' copy constructor.
 */
ListServiceActionsForProvisioningArtifactRequestPrivate::ListServiceActionsForProvisioningArtifactRequestPrivate(
    const ListServiceActionsForProvisioningArtifactRequestPrivate &other, ListServiceActionsForProvisioningArtifactRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
