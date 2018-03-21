/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeproductrequest.h"
#include "describeproductrequest_p.h"
#include "describeproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProductRequest
 *
 * @brief  Implements ServiceCatalog DescribeProduct requests.
 *
 * @see    ServiceCatalogClient::describeProduct
 */

/**
 * @brief  Constructs a new DescribeProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProductResponse::DescribeProductResponse(

/**
 * @brief  Constructs a new DescribeProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProductRequest::DescribeProductRequest(const DescribeProductRequest &other)
    : ServiceCatalogRequest(new DescribeProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeProductRequest object.
 */
DescribeProductRequest::DescribeProductRequest()
    : ServiceCatalogRequest(new DescribeProductRequestPrivate(ServiceCatalogRequest::DescribeProductAction, this))
{

}

bool DescribeProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeProductRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeProductRequestPrivate
 *
 * @brief  Private implementation for DescribeProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeProductRequest instance.
 */
DescribeProductRequestPrivate::DescribeProductRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProductRequest * const q)
    : DescribeProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProductRequest instance.
 */
DescribeProductRequestPrivate::DescribeProductRequestPrivate(
    const DescribeProductRequestPrivate &other, DescribeProductRequest * const q)
    : DescribeProductPrivate(other, q)
{

}
