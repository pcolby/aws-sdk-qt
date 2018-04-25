/*
    Copyright 2013-2018 Paul Colby

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

#include "describeprovisionedproductplanrequest.h"
#include "describeprovisionedproductplanrequest_p.h"
#include "describeprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductPlanRequest
 * \brief The DescribeProvisionedProductPlanRequest class provides an interface for ServiceCatalog DescribeProvisionedProductPlan requests.
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
 * \sa ServiceCatalogClient::describeProvisionedProductPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProvisionedProductPlanRequest::DescribeProvisionedProductPlanRequest(const DescribeProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new DescribeProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProvisionedProductPlanRequest object.
 */
DescribeProvisionedProductPlanRequest::DescribeProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new DescribeProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::DescribeProvisionedProductPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProvisionedProductPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisionedProductPlanResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductPlanRequestPrivate
 * \brief The DescribeProvisionedProductPlanRequestPrivate class provides private implementation for DescribeProvisionedProductPlanRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisionedProductPlanRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProvisionedProductPlanRequestPrivate::DescribeProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisionedProductPlanRequest
 * class' copy constructor.
 */
DescribeProvisionedProductPlanRequestPrivate::DescribeProvisionedProductPlanRequestPrivate(
    const DescribeProvisionedProductPlanRequestPrivate &other, DescribeProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
