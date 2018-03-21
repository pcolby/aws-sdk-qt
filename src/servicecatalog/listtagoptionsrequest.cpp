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

#include "listtagoptionsrequest.h"
#include "listtagoptionsrequest_p.h"
#include "listtagoptionsresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListTagOptionsRequest
 *
 * @brief  Implements ServiceCatalog ListTagOptions requests.
 *
 * @see    ServiceCatalogClient::listTagOptions
 */

/**
 * @brief  Constructs a new ListTagOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagOptionsResponse::ListTagOptionsResponse(

/**
 * @brief  Constructs a new ListTagOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagOptionsRequest::ListTagOptionsRequest(const ListTagOptionsRequest &other)
    : ServiceCatalogRequest(new ListTagOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagOptionsRequest object.
 */
ListTagOptionsRequest::ListTagOptionsRequest()
    : ServiceCatalogRequest(new ListTagOptionsRequestPrivate(ServiceCatalogRequest::ListTagOptionsAction, this))
{

}

bool ListTagOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListTagOptionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagOptionsRequestPrivate
 *
 * @brief  Private implementation for ListTagOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagOptionsRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListTagOptionsRequest instance.
 */
ListTagOptionsRequestPrivate::ListTagOptionsRequestPrivate(
    const ServiceCatalogRequest::Action action, ListTagOptionsRequest * const q)
    : ListTagOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagOptionsRequest instance.
 */
ListTagOptionsRequestPrivate::ListTagOptionsRequestPrivate(
    const ListTagOptionsRequestPrivate &other, ListTagOptionsRequest * const q)
    : ListTagOptionsPrivate(other, q)
{

}
