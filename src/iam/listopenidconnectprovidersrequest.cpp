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

#include "listopenidconnectprovidersrequest.h"
#include "listopenidconnectprovidersrequest_p.h"
#include "listopenidconnectprovidersresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListOpenIDConnectProvidersRequest
 *
 * @brief  Implements IAM ListOpenIDConnectProviders requests.
 *
 * @see    IAMClient::listOpenIDConnectProviders
 */

/**
 * @brief  Constructs a new ListOpenIDConnectProvidersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOpenIDConnectProvidersResponse::ListOpenIDConnectProvidersResponse(

/**
 * @brief  Constructs a new ListOpenIDConnectProvidersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOpenIDConnectProvidersRequest::ListOpenIDConnectProvidersRequest(const ListOpenIDConnectProvidersRequest &other)
    : IAMRequest(new ListOpenIDConnectProvidersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOpenIDConnectProvidersRequest object.
 */
ListOpenIDConnectProvidersRequest::ListOpenIDConnectProvidersRequest()
    : IAMRequest(new ListOpenIDConnectProvidersRequestPrivate(IAMRequest::ListOpenIDConnectProvidersAction, this))
{

}

bool ListOpenIDConnectProvidersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOpenIDConnectProvidersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOpenIDConnectProvidersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListOpenIDConnectProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListOpenIDConnectProvidersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOpenIDConnectProvidersRequestPrivate
 *
 * @brief  Private implementation for ListOpenIDConnectProvidersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOpenIDConnectProvidersRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListOpenIDConnectProvidersRequest instance.
 */
ListOpenIDConnectProvidersRequestPrivate::ListOpenIDConnectProvidersRequestPrivate(
    const IAMRequest::Action action, ListOpenIDConnectProvidersRequest * const q)
    : ListOpenIDConnectProvidersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOpenIDConnectProvidersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOpenIDConnectProvidersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOpenIDConnectProvidersRequest instance.
 */
ListOpenIDConnectProvidersRequestPrivate::ListOpenIDConnectProvidersRequestPrivate(
    const ListOpenIDConnectProvidersRequestPrivate &other, ListOpenIDConnectProvidersRequest * const q)
    : ListOpenIDConnectProvidersPrivate(other, q)
{

}
