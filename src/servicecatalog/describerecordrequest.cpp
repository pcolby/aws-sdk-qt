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

#include "describerecordrequest.h"
#include "describerecordrequest_p.h"
#include "describerecordresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeRecordRequest
 * \brief The DescribeRecordRequest class provides an interface for ServiceCatalog DescribeRecord requests.
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
 * \sa ServiceCatalogClient::describeRecord
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecordRequest::DescribeRecordRequest(const DescribeRecordRequest &other)
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecordRequest object.
 */
DescribeRecordRequest::DescribeRecordRequest()
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(ServiceCatalogRequest::DescribeRecordAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecordRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecordResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeRecordRequestPrivate
 * \brief The DescribeRecordRequestPrivate class provides private implementation for DescribeRecordRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 *
 * Constructs a DescribeRecordRequestPrivate object for ServiceCatalog \a action with,
 * public implementation \a q.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeRecordRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecordRequest
 * class' copy constructor.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const DescribeRecordRequestPrivate &other, DescribeRecordRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
