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

#include "updateproductrequest.h"
#include "updateproductrequest_p.h"
#include "updateproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProductRequest
 *
 * \brief The UpdateProductRequest class encapsulates ServiceCatalog UpdateProduct requests.
 *
 * \ingroup ServiceCatalog
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
 * @brief  Constructs a new UpdateProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProductRequest::UpdateProductRequest(const UpdateProductRequest &other)
    : ServiceCatalogRequest(new UpdateProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateProductRequest object.
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
 * @brief  Construct an UpdateProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProductResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProductRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProductResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateProductRequestPrivate
 *
 * @brief  Private implementation for UpdateProductRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateProductRequest instance.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProductRequest instance.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const UpdateProductRequestPrivate &other, UpdateProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
