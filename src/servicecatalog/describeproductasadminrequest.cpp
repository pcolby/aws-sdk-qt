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

#include "describeproductasadminrequest.h"
#include "describeproductasadminrequest_p.h"
#include "describeproductasadminresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductAsAdminRequest
 * \brief The DescribeProductAsAdminRequest class provides an interface for ServiceCatalog DescribeProductAsAdmin requests.
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
 * \sa ServiceCatalogClient::describeProductAsAdmin
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProductAsAdminRequest::DescribeProductAsAdminRequest(const DescribeProductAsAdminRequest &other)
    : ServiceCatalogRequest(new DescribeProductAsAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProductAsAdminRequest object.
 */
DescribeProductAsAdminRequest::DescribeProductAsAdminRequest()
    : ServiceCatalogRequest(new DescribeProductAsAdminRequestPrivate(ServiceCatalogRequest::DescribeProductAsAdminAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProductAsAdminRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProductAsAdminResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProductAsAdminRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProductAsAdminResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductAsAdminRequestPrivate
 * \brief The DescribeProductAsAdminRequestPrivate class provides private implementation for DescribeProductAsAdminRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductAsAdminRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProductAsAdminRequestPrivate::DescribeProductAsAdminRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProductAsAdminRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProductAsAdminRequest
 * class' copy constructor.
 */
DescribeProductAsAdminRequestPrivate::DescribeProductAsAdminRequestPrivate(
    const DescribeProductAsAdminRequestPrivate &other, DescribeProductAsAdminRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
