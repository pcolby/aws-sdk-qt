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

#include "createidentitypoolrequest.h"
#include "createidentitypoolrequest_p.h"
#include "createidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  CreateIdentityPoolRequest
 *
 * @brief  Implements CognitoIdentity CreateIdentityPool requests.
 *
 * @see    CognitoIdentityClient::createIdentityPool
 */

/**
 * @brief  Constructs a new CreateIdentityPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateIdentityPoolRequest::CreateIdentityPoolRequest(const CreateIdentityPoolRequest &other)
    : CognitoIdentityRequest(new CreateIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateIdentityPoolRequest object.
 */
CreateIdentityPoolRequest::CreateIdentityPoolRequest()
    : CognitoIdentityRequest(new CreateIdentityPoolRequestPrivate(CognitoIdentityRequest::CreateIdentityPoolAction, this))
{

}

bool CreateIdentityPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateIdentityPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateIdentityPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * CreateIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateIdentityPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateIdentityPoolRequestPrivate
 *
 * @brief  Private implementation for CreateIdentityPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public CreateIdentityPoolRequest instance.
 */
CreateIdentityPoolRequestPrivate::CreateIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, CreateIdentityPoolRequest * const q)
    : CreateIdentityPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateIdentityPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateIdentityPoolRequest instance.
 */
CreateIdentityPoolRequestPrivate::CreateIdentityPoolRequestPrivate(
    const CreateIdentityPoolRequestPrivate &other, CreateIdentityPoolRequest * const q)
    : CreateIdentityPoolPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
