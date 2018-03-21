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

#include "listuserpoolclientsrequest.h"
#include "listuserpoolclientsrequest_p.h"
#include "listuserpoolclientsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListUserPoolClientsRequest
 *
 * @brief  Implements CognitoIdentityProvider ListUserPoolClients requests.
 *
 * @see    CognitoIdentityProviderClient::listUserPoolClients
 */

/**
 * @brief  Constructs a new ListUserPoolClientsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserPoolClientsResponse::ListUserPoolClientsResponse(

/**
 * @brief  Constructs a new ListUserPoolClientsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserPoolClientsRequest::ListUserPoolClientsRequest(const ListUserPoolClientsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserPoolClientsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUserPoolClientsRequest object.
 */
ListUserPoolClientsRequest::ListUserPoolClientsRequest()
    : CognitoIdentityProviderRequest(new ListUserPoolClientsRequestPrivate(CognitoIdentityProviderRequest::ListUserPoolClientsAction, this))
{

}

bool ListUserPoolClientsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUserPoolClientsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserPoolClientsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ListUserPoolClientsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoolClientsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUserPoolClientsRequestPrivate
 *
 * @brief  Private implementation for ListUserPoolClientsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolClientsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListUserPoolClientsRequest instance.
 */
ListUserPoolClientsRequestPrivate::ListUserPoolClientsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserPoolClientsRequest * const q)
    : ListUserPoolClientsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolClientsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoolClientsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserPoolClientsRequest instance.
 */
ListUserPoolClientsRequestPrivate::ListUserPoolClientsRequestPrivate(
    const ListUserPoolClientsRequestPrivate &other, ListUserPoolClientsRequest * const q)
    : ListUserPoolClientsPrivate(other, q)
{

}
