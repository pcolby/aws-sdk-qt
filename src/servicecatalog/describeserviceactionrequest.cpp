/*
    Copyright 2013-2021 Paul Colby

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

#include "describeserviceactionrequest.h"
#include "describeserviceactionrequest_p.h"
#include "describeserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionRequest
 * \brief The DescribeServiceActionRequest class provides an interface for ServiceCatalog DescribeServiceAction requests.
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
 * \sa ServiceCatalogClient::describeServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceActionRequest::DescribeServiceActionRequest(const DescribeServiceActionRequest &other)
    : ServiceCatalogRequest(new DescribeServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceActionRequest object.
 */
DescribeServiceActionRequest::DescribeServiceActionRequest()
    : ServiceCatalogRequest(new DescribeServiceActionRequestPrivate(ServiceCatalogRequest::DescribeServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionRequestPrivate
 * \brief The DescribeServiceActionRequestPrivate class provides private implementation for DescribeServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeServiceActionRequestPrivate::DescribeServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceActionRequest
 * class' copy constructor.
 */
DescribeServiceActionRequestPrivate::DescribeServiceActionRequestPrivate(
    const DescribeServiceActionRequestPrivate &other, DescribeServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
