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

#include "globalsignoutrequest.h"
#include "globalsignoutrequest_p.h"
#include "globalsignoutresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GlobalSignOutRequest
 *
 * @brief  Implements CognitoIdentityProvider GlobalSignOut requests.
 *
 * @see    CognitoIdentityProviderClient::globalSignOut
 */

/**
 * @brief  Constructs a new GlobalSignOutRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GlobalSignOutRequest::GlobalSignOutRequest(const GlobalSignOutRequest &other)
    : CognitoIdentityProviderRequest(new GlobalSignOutRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GlobalSignOutRequest object.
 */
GlobalSignOutRequest::GlobalSignOutRequest()
    : CognitoIdentityProviderRequest(new GlobalSignOutRequestPrivate(CognitoIdentityProviderRequest::GlobalSignOutAction, this))
{

}

bool GlobalSignOutRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GlobalSignOutResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GlobalSignOutResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * GlobalSignOutRequest::response(QNetworkReply * const reply) const
{
    return new GlobalSignOutResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GlobalSignOutRequestPrivate
 *
 * @brief  Private implementation for GlobalSignOutRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlobalSignOutRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GlobalSignOutRequest instance.
 */
GlobalSignOutRequestPrivate::GlobalSignOutRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GlobalSignOutRequest * const q)
    : GlobalSignOutPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GlobalSignOutRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GlobalSignOutRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GlobalSignOutRequest instance.
 */
GlobalSignOutRequestPrivate::GlobalSignOutRequestPrivate(
    const GlobalSignOutRequestPrivate &other, GlobalSignOutRequest * const q)
    : GlobalSignOutPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
