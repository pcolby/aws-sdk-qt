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

#include "listidentitypoolsrequest.h"
#include "listidentitypoolsrequest_p.h"
#include "listidentitypoolsresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  ListIdentityPoolsRequest
 *
 * @brief  Implements CognitoIdentity ListIdentityPools requests.
 *
 * @see    CognitoIdentityClient::listIdentityPools
 */

/**
 * @brief  Constructs a new ListIdentityPoolsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIdentityPoolsRequest::ListIdentityPoolsRequest(const ListIdentityPoolsRequest &other)
    : CognitoIdentityRequest(new ListIdentityPoolsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIdentityPoolsRequest object.
 */
ListIdentityPoolsRequest::ListIdentityPoolsRequest()
    : CognitoIdentityRequest(new ListIdentityPoolsRequestPrivate(CognitoIdentityRequest::ListIdentityPoolsAction, this))
{

}

bool ListIdentityPoolsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIdentityPoolsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIdentityPoolsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * ListIdentityPoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityPoolsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIdentityPoolsRequestPrivate
 *
 * @brief  Private implementation for ListIdentityPoolsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolsRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public ListIdentityPoolsRequest instance.
 */
ListIdentityPoolsRequestPrivate::ListIdentityPoolsRequestPrivate(
    const CognitoIdentityRequest::Action action, ListIdentityPoolsRequest * const q)
    : ListIdentityPoolsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityPoolsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIdentityPoolsRequest instance.
 */
ListIdentityPoolsRequestPrivate::ListIdentityPoolsRequestPrivate(
    const ListIdentityPoolsRequestPrivate &other, ListIdentityPoolsRequest * const q)
    : ListIdentityPoolsPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
