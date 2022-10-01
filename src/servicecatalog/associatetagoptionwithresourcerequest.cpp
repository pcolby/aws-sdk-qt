// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetagoptionwithresourcerequest.h"
#include "associatetagoptionwithresourcerequest_p.h"
#include "associatetagoptionwithresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceRequest
 * \brief The AssociateTagOptionWithResourceRequest class provides an interface for ServiceCatalog AssociateTagOptionWithResource requests.
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
 * \sa ServiceCatalogClient::associateTagOptionWithResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest(const AssociateTagOptionWithResourceRequest &other)
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTagOptionWithResourceRequest object.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest()
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(ServiceCatalogRequest::AssociateTagOptionWithResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTagOptionWithResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTagOptionWithResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTagOptionWithResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTagOptionWithResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceRequestPrivate
 * \brief The AssociateTagOptionWithResourceRequestPrivate class provides private implementation for AssociateTagOptionWithResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateTagOptionWithResourceRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateTagOptionWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTagOptionWithResourceRequest
 * class' copy constructor.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const AssociateTagOptionWithResourceRequestPrivate &other, AssociateTagOptionWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
