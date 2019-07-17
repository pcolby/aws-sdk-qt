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

#include "liststackinstancesforprovisionedproductrequest.h"
#include "liststackinstancesforprovisionedproductrequest_p.h"
#include "liststackinstancesforprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListStackInstancesForProvisionedProductRequest
 * \brief The ListStackInstancesForProvisionedProductRequest class provides an interface for ServiceCatalog ListStackInstancesForProvisionedProduct requests.
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
 * \sa ServiceCatalogClient::listStackInstancesForProvisionedProduct
 */

/*!
 * Constructs a copy of \a other.
 */
ListStackInstancesForProvisionedProductRequest::ListStackInstancesForProvisionedProductRequest(const ListStackInstancesForProvisionedProductRequest &other)
    : ServiceCatalogRequest(new ListStackInstancesForProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStackInstancesForProvisionedProductRequest object.
 */
ListStackInstancesForProvisionedProductRequest::ListStackInstancesForProvisionedProductRequest()
    : ServiceCatalogRequest(new ListStackInstancesForProvisionedProductRequestPrivate(ServiceCatalogRequest::ListStackInstancesForProvisionedProductAction, this))
{

}

/*!
 * \reimp
 */
bool ListStackInstancesForProvisionedProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStackInstancesForProvisionedProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackInstancesForProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new ListStackInstancesForProvisionedProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListStackInstancesForProvisionedProductRequestPrivate
 * \brief The ListStackInstancesForProvisionedProductRequestPrivate class provides private implementation for ListStackInstancesForProvisionedProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListStackInstancesForProvisionedProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListStackInstancesForProvisionedProductRequestPrivate::ListStackInstancesForProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, ListStackInstancesForProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStackInstancesForProvisionedProductRequest
 * class' copy constructor.
 */
ListStackInstancesForProvisionedProductRequestPrivate::ListStackInstancesForProvisionedProductRequestPrivate(
    const ListStackInstancesForProvisionedProductRequestPrivate &other, ListStackInstancesForProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
