/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeproductviewrequest.h"
#include "describeproductviewrequest_p.h"
#include "describeproductviewresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductViewRequest
 * \brief The DescribeProductViewRequest class provides an interface for ServiceCatalog DescribeProductView requests.
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
 * \sa ServiceCatalogClient::describeProductView
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProductViewRequest::DescribeProductViewRequest(const DescribeProductViewRequest &other)
    : ServiceCatalogRequest(new DescribeProductViewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProductViewRequest object.
 */
DescribeProductViewRequest::DescribeProductViewRequest()
    : ServiceCatalogRequest(new DescribeProductViewRequestPrivate(ServiceCatalogRequest::DescribeProductViewAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProductViewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProductViewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProductViewRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProductViewResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductViewRequestPrivate
 * \brief The DescribeProductViewRequestPrivate class provides private implementation for DescribeProductViewRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductViewRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProductViewRequestPrivate::DescribeProductViewRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProductViewRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProductViewRequest
 * class' copy constructor.
 */
DescribeProductViewRequestPrivate::DescribeProductViewRequestPrivate(
    const DescribeProductViewRequestPrivate &other, DescribeProductViewRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
