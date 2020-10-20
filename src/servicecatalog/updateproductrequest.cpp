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

#include "updateproductrequest.h"
#include "updateproductrequest_p.h"
#include "updateproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProductRequest
 * \brief The UpdateProductRequest class provides an interface for ServiceCatalog UpdateProduct requests.
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
 * \sa ServiceCatalogClient::updateProduct
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProductRequest::UpdateProductRequest(const UpdateProductRequest &other)
    : ServiceCatalogRequest(new UpdateProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProductRequest object.
 */
UpdateProductRequest::UpdateProductRequest()
    : ServiceCatalogRequest(new UpdateProductRequestPrivate(ServiceCatalogRequest::UpdateProductAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProductRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProductResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProductRequestPrivate
 * \brief The UpdateProductRequestPrivate class provides private implementation for UpdateProductRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProductRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProductRequest
 * class' copy constructor.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const UpdateProductRequestPrivate &other, UpdateProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
