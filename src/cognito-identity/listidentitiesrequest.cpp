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

#include "listidentitiesrequest.h"
#include "listidentitiesrequest_p.h"
#include "listidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  ListIdentitiesRequest
 *
 * @brief  Implements CognitoIdentity ListIdentities requests.
 *
 * @see    CognitoIdentityClient::listIdentities
 */

/**
 * @brief  Constructs a new ListIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentitiesResponse::ListIdentitiesResponse(

/**
 * @brief  Constructs a new ListIdentitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIdentitiesRequest::ListIdentitiesRequest(const ListIdentitiesRequest &other)
    : CognitoIdentityRequest(new ListIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIdentitiesRequest object.
 */
ListIdentitiesRequest::ListIdentitiesRequest()
    : CognitoIdentityRequest(new ListIdentitiesRequestPrivate(CognitoIdentityRequest::ListIdentitiesAction, this))
{

}

bool ListIdentitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIdentitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIdentitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * ListIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIdentitiesRequestPrivate
 *
 * @brief  Private implementation for ListIdentitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentitiesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public ListIdentitiesRequest instance.
 */
ListIdentitiesRequestPrivate::ListIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, ListIdentitiesRequest * const q)
    : ListIdentitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIdentitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIdentitiesRequest instance.
 */
ListIdentitiesRequestPrivate::ListIdentitiesRequestPrivate(
    const ListIdentitiesRequestPrivate &other, ListIdentitiesRequest * const q)
    : ListIdentitiesPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
