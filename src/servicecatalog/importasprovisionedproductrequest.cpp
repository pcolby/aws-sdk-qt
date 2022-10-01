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

#include "importasprovisionedproductrequest.h"
#include "importasprovisionedproductrequest_p.h"
#include "importasprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ImportAsProvisionedProductRequest
 * \brief The ImportAsProvisionedProductRequest class provides an interface for ServiceCatalog ImportAsProvisionedProduct requests.
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
 * \sa ServiceCatalogClient::importAsProvisionedProduct
 */

/*!
 * Constructs a copy of \a other.
 */
ImportAsProvisionedProductRequest::ImportAsProvisionedProductRequest(const ImportAsProvisionedProductRequest &other)
    : ServiceCatalogRequest(new ImportAsProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportAsProvisionedProductRequest object.
 */
ImportAsProvisionedProductRequest::ImportAsProvisionedProductRequest()
    : ServiceCatalogRequest(new ImportAsProvisionedProductRequestPrivate(ServiceCatalogRequest::ImportAsProvisionedProductAction, this))
{

}

/*!
 * \reimp
 */
bool ImportAsProvisionedProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportAsProvisionedProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportAsProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new ImportAsProvisionedProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ImportAsProvisionedProductRequestPrivate
 * \brief The ImportAsProvisionedProductRequestPrivate class provides private implementation for ImportAsProvisionedProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ImportAsProvisionedProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ImportAsProvisionedProductRequestPrivate::ImportAsProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, ImportAsProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportAsProvisionedProductRequest
 * class' copy constructor.
 */
ImportAsProvisionedProductRequestPrivate::ImportAsProvisionedProductRequestPrivate(
    const ImportAsProvisionedProductRequestPrivate &other, ImportAsProvisionedProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
