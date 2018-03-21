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

#include "createresourceserverrequest.h"
#include "createresourceserverrequest_p.h"
#include "createresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateResourceServerRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateResourceServer requests.
 *
 * @see    CognitoIdentityProviderClient::createResourceServer
 */

/**
 * @brief  Constructs a new CreateResourceServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceServerRequest::CreateResourceServerRequest(const CreateResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceServerRequest object.
 */
CreateResourceServerRequest::CreateResourceServerRequest()
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(CognitoIdentityProviderRequest::CreateResourceServerAction, this))
{

}

bool CreateResourceServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * CreateResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceServerRequestPrivate
 *
 * @brief  Private implementation for CreateResourceServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceServerRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateResourceServerRequest instance.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateResourceServerRequest * const q)
    : CreateResourceServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceServerRequest instance.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CreateResourceServerRequestPrivate &other, CreateResourceServerRequest * const q)
    : CreateResourceServerPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
