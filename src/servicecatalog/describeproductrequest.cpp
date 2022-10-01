// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproductrequest.h"
#include "describeproductrequest_p.h"
#include "describeproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductRequest
 * \brief The DescribeProductRequest class provides an interface for ServiceCatalog DescribeProduct requests.
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
 * \sa ServiceCatalogClient::describeProduct
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProductRequest::DescribeProductRequest(const DescribeProductRequest &other)
    : ServiceCatalogRequest(new DescribeProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProductRequest object.
 */
DescribeProductRequest::DescribeProductRequest()
    : ServiceCatalogRequest(new DescribeProductRequestPrivate(ServiceCatalogRequest::DescribeProductAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProductRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductRequestPrivate
 * \brief The DescribeProductRequestPrivate class provides private implementation for DescribeProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProductRequestPrivate::DescribeProductRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProductRequest
 * class' copy constructor.
 */
DescribeProductRequestPrivate::DescribeProductRequestPrivate(
    const DescribeProductRequestPrivate &other, DescribeProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
