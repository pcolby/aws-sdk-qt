/*
    Copyright 2013-2019 Paul Colby

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

#include "describetagoptionrequest.h"
#include "describetagoptionrequest_p.h"
#include "describetagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeTagOptionRequest
 * \brief The DescribeTagOptionRequest class provides an interface for ServiceCatalog DescribeTagOption requests.
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
 * \sa ServiceCatalogClient::describeTagOption
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTagOptionRequest::DescribeTagOptionRequest(const DescribeTagOptionRequest &other)
    : ServiceCatalogRequest(new DescribeTagOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTagOptionRequest object.
 */
DescribeTagOptionRequest::DescribeTagOptionRequest()
    : ServiceCatalogRequest(new DescribeTagOptionRequestPrivate(ServiceCatalogRequest::DescribeTagOptionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTagOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTagOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagOptionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeTagOptionRequestPrivate
 * \brief The DescribeTagOptionRequestPrivate class provides private implementation for DescribeTagOptionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeTagOptionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeTagOptionRequestPrivate::DescribeTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagOptionRequest
 * class' copy constructor.
 */
DescribeTagOptionRequestPrivate::DescribeTagOptionRequestPrivate(
    const DescribeTagOptionRequestPrivate &other, DescribeTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
