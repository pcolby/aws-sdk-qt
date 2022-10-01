// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copyproductrequest.h"
#include "copyproductrequest_p.h"
#include "copyproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CopyProductRequest
 * \brief The CopyProductRequest class provides an interface for ServiceCatalog CopyProduct requests.
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
 * \sa ServiceCatalogClient::copyProduct
 */

/*!
 * Constructs a copy of \a other.
 */
CopyProductRequest::CopyProductRequest(const CopyProductRequest &other)
    : ServiceCatalogRequest(new CopyProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyProductRequest object.
 */
CopyProductRequest::CopyProductRequest()
    : ServiceCatalogRequest(new CopyProductRequestPrivate(ServiceCatalogRequest::CopyProductAction, this))
{

}

/*!
 * \reimp
 */
bool CopyProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyProductRequest::response(QNetworkReply * const reply) const
{
    return new CopyProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CopyProductRequestPrivate
 * \brief The CopyProductRequestPrivate class provides private implementation for CopyProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CopyProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CopyProductRequestPrivate::CopyProductRequestPrivate(
    const ServiceCatalogRequest::Action action, CopyProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyProductRequest
 * class' copy constructor.
 */
CopyProductRequestPrivate::CopyProductRequestPrivate(
    const CopyProductRequestPrivate &other, CopyProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
