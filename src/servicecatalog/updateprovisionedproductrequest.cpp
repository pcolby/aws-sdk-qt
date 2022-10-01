// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprovisionedproductrequest.h"
#include "updateprovisionedproductrequest_p.h"
#include "updateprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductRequest
 * \brief The UpdateProvisionedProductRequest class provides an interface for ServiceCatalog UpdateProvisionedProduct requests.
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
 * \sa ServiceCatalogClient::updateProvisionedProduct
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProvisionedProductRequest::UpdateProvisionedProductRequest(const UpdateProvisionedProductRequest &other)
    : ServiceCatalogRequest(new UpdateProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProvisionedProductRequest object.
 */
UpdateProvisionedProductRequest::UpdateProvisionedProductRequest()
    : ServiceCatalogRequest(new UpdateProvisionedProductRequestPrivate(ServiceCatalogRequest::UpdateProvisionedProductAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProvisionedProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProvisionedProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProvisionedProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductRequestPrivate
 * \brief The UpdateProvisionedProductRequestPrivate class provides private implementation for UpdateProvisionedProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProvisionedProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateProvisionedProductRequestPrivate::UpdateProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProvisionedProductRequest
 * class' copy constructor.
 */
UpdateProvisionedProductRequestPrivate::UpdateProvisionedProductRequestPrivate(
    const UpdateProvisionedProductRequestPrivate &other, UpdateProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
