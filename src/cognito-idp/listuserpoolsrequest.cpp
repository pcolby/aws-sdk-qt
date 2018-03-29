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

#include "listuserpoolsrequest.h"
#include "listuserpoolsrequest_p.h"
#include "listuserpoolsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ListUserPoolsRequest
 *
 * @brief  Implements CognitoIdentityProvider ListUserPools requests.
 *
 * @see    CognitoIdentityProviderClient::listUserPools
 */

/**
 * @brief  Constructs a new ListUserPoolsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserPoolsRequest::ListUserPoolsRequest(const ListUserPoolsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserPoolsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUserPoolsRequest object.
 */
ListUserPoolsRequest::ListUserPoolsRequest()
    : CognitoIdentityProviderRequest(new ListUserPoolsRequestPrivate(CognitoIdentityProviderRequest::ListUserPoolsAction, this))
{

}

bool ListUserPoolsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUserPoolsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserPoolsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserPoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoolsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUserPoolsRequestPrivate
 *
 * @brief  Private implementation for ListUserPoolsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListUserPoolsRequest instance.
 */
ListUserPoolsRequestPrivate::ListUserPoolsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserPoolsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoolsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserPoolsRequest instance.
 */
ListUserPoolsRequestPrivate::ListUserPoolsRequestPrivate(
    const ListUserPoolsRequestPrivate &other, ListUserPoolsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
