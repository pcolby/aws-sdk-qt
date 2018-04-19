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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
