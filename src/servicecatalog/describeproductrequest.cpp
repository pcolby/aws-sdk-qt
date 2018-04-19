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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
