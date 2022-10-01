// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteproductrequest.h"
#include "deleteproductrequest_p.h"
#include "deleteproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProductRequest
 * \brief The DeleteProductRequest class provides an interface for ServiceCatalog DeleteProduct requests.
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
 * \sa ServiceCatalogClient::deleteProduct
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProductRequest::DeleteProductRequest(const DeleteProductRequest &other)
    : ServiceCatalogRequest(new DeleteProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProductRequest object.
 */
DeleteProductRequest::DeleteProductRequest()
    : ServiceCatalogRequest(new DeleteProductRequestPrivate(ServiceCatalogRequest::DeleteProductAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProductRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteProductRequestPrivate
 * \brief The DeleteProductRequestPrivate class provides private implementation for DeleteProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeleteProductRequestPrivate::DeleteProductRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProductRequest
 * class' copy constructor.
 */
DeleteProductRequestPrivate::DeleteProductRequestPrivate(
    const DeleteProductRequestPrivate &other, DeleteProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
