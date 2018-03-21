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

#include "deleteuserpoolrequest.h"
#include "deleteuserpoolrequest_p.h"
#include "deleteuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserPoolRequest
 *
 * @brief  Implements CognitoIdentityProvider DeleteUserPool requests.
 *
 * @see    CognitoIdentityProviderClient::deleteUserPool
 */

/**
 * @brief  Constructs a new DeleteUserPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPoolResponse::DeleteUserPoolResponse(

/**
 * @brief  Constructs a new DeleteUserPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest(const DeleteUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserPoolRequest object.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolAction, this))
{

}

bool DeleteUserPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * DeleteUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserPoolRequestPrivate
 *
 * @brief  Private implementation for DeleteUserPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DeleteUserPoolRequest instance.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolRequest * const q)
    : DeleteUserPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserPoolRequest instance.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const DeleteUserPoolRequestPrivate &other, DeleteUserPoolRequest * const q)
    : DeleteUserPoolPrivate(other, q)
{

}
