// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprovisionedproductrequest.h"
#include "describeprovisionedproductrequest_p.h"
#include "describeprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductRequest
 * \brief The DescribeProvisionedProductRequest class provides an interface for ServiceCatalog DescribeProvisionedProduct requests.
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
 * \sa ServiceCatalogClient::describeProvisionedProduct
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProvisionedProductRequest::DescribeProvisionedProductRequest(const DescribeProvisionedProductRequest &other)
    : ServiceCatalogRequest(new DescribeProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProvisionedProductRequest object.
 */
DescribeProvisionedProductRequest::DescribeProvisionedProductRequest()
    : ServiceCatalogRequest(new DescribeProvisionedProductRequestPrivate(ServiceCatalogRequest::DescribeProvisionedProductAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProvisionedProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProvisionedProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisionedProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductRequestPrivate
 * \brief The DescribeProvisionedProductRequestPrivate class provides private implementation for DescribeProvisionedProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisionedProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProvisionedProductRequestPrivate::DescribeProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisionedProductRequest
 * class' copy constructor.
 */
DescribeProvisionedProductRequestPrivate::DescribeProvisionedProductRequestPrivate(
    const DescribeProvisionedProductRequestPrivate &other, DescribeProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
