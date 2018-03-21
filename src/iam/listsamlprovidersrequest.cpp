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

#include "listsamlprovidersrequest.h"
#include "listsamlprovidersrequest_p.h"
#include "listsamlprovidersresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListSAMLProvidersRequest
 *
 * @brief  Implements IAM ListSAMLProviders requests.
 *
 * @see    IAMClient::listSAMLProviders
 */

/**
 * @brief  Constructs a new ListSAMLProvidersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSAMLProvidersResponse::ListSAMLProvidersResponse(

/**
 * @brief  Constructs a new ListSAMLProvidersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest(const ListSAMLProvidersRequest &other)
    : IAMRequest(new ListSAMLProvidersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSAMLProvidersRequest object.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest()
    : IAMRequest(new ListSAMLProvidersRequestPrivate(IAMRequest::ListSAMLProvidersAction, this))
{

}

bool ListSAMLProvidersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSAMLProvidersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSAMLProvidersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListSAMLProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListSAMLProvidersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSAMLProvidersRequestPrivate
 *
 * @brief  Private implementation for ListSAMLProvidersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSAMLProvidersRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListSAMLProvidersRequest instance.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const IAMRequest::Action action, ListSAMLProvidersRequest * const q)
    : ListSAMLProvidersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSAMLProvidersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSAMLProvidersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSAMLProvidersRequest instance.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const ListSAMLProvidersRequestPrivate &other, ListSAMLProvidersRequest * const q)
    : ListSAMLProvidersPrivate(other, q)
{

}
