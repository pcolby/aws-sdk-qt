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

#include "createidentityproviderrequest.h"
#include "createidentityproviderrequest_p.h"
#include "createidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  CreateIdentityProviderRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateIdentityProvider requests.
 *
 * @see    CognitoIdentityProviderClient::createIdentityProvider
 */

/**
 * @brief  Constructs a new CreateIdentityProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateIdentityProviderRequest::CreateIdentityProviderRequest(const CreateIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new CreateIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateIdentityProviderRequest object.
 */
CreateIdentityProviderRequest::CreateIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new CreateIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::CreateIdentityProviderAction, this))
{

}

bool CreateIdentityProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateIdentityProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateIdentityProviderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * CreateIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateIdentityProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateIdentityProviderRequestPrivate
 *
 * @brief  Private implementation for CreateIdentityProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityProviderRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateIdentityProviderRequest instance.
 */
CreateIdentityProviderRequestPrivate::CreateIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateIdentityProviderRequest * const q)
    : CreateIdentityProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateIdentityProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateIdentityProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateIdentityProviderRequest instance.
 */
CreateIdentityProviderRequestPrivate::CreateIdentityProviderRequestPrivate(
    const CreateIdentityProviderRequestPrivate &other, CreateIdentityProviderRequest * const q)
    : CreateIdentityProviderPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
