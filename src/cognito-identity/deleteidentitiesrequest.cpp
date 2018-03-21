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

#include "deleteidentitiesrequest.h"
#include "deleteidentitiesrequest_p.h"
#include "deleteidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DeleteIdentitiesRequest
 *
 * @brief  Implements CognitoIdentity DeleteIdentities requests.
 *
 * @see    CognitoIdentityClient::deleteIdentities
 */

/**
 * @brief  Constructs a new DeleteIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentitiesResponse::DeleteIdentitiesResponse(

/**
 * @brief  Constructs a new DeleteIdentitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentitiesRequest::DeleteIdentitiesRequest(const DeleteIdentitiesRequest &other)
    : CognitoIdentityRequest(new DeleteIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIdentitiesRequest object.
 */
DeleteIdentitiesRequest::DeleteIdentitiesRequest()
    : CognitoIdentityRequest(new DeleteIdentitiesRequestPrivate(CognitoIdentityRequest::DeleteIdentitiesAction, this))
{

}

bool DeleteIdentitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIdentitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * DeleteIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIdentitiesRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentitiesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public DeleteIdentitiesRequest instance.
 */
DeleteIdentitiesRequestPrivate::DeleteIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, DeleteIdentitiesRequest * const q)
    : DeleteIdentitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentitiesRequest instance.
 */
DeleteIdentitiesRequestPrivate::DeleteIdentitiesRequestPrivate(
    const DeleteIdentitiesRequestPrivate &other, DeleteIdentitiesRequest * const q)
    : DeleteIdentitiesPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
