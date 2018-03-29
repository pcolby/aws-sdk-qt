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

#include "deleteresourceserverrequest.h"
#include "deleteresourceserverrequest_p.h"
#include "deleteresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteResourceServerRequest
 *
 * @brief  Implements CognitoIdentityProvider DeleteResourceServer requests.
 *
 * @see    CognitoIdentityProviderClient::deleteResourceServer
 */

/**
 * @brief  Constructs a new DeleteResourceServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest(const DeleteResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResourceServerRequest object.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest()
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(CognitoIdentityProviderRequest::DeleteResourceServerAction, this))
{

}

bool DeleteResourceServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResourceServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResourceServerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResourceServerRequestPrivate
 *
 * @brief  Private implementation for DeleteResourceServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceServerRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DeleteResourceServerRequest instance.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteResourceServerRequest * const q)
    : DeleteResourceServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResourceServerRequest instance.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const DeleteResourceServerRequestPrivate &other, DeleteResourceServerRequest * const q)
    : DeleteResourceServerPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
