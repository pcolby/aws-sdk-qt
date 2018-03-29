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

#include "getidentityproviderbyidentifierrequest.h"
#include "getidentityproviderbyidentifierrequest_p.h"
#include "getidentityproviderbyidentifierresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GetIdentityProviderByIdentifierRequest
 *
 * @brief  Implements CognitoIdentityProvider GetIdentityProviderByIdentifier requests.
 *
 * @see    CognitoIdentityProviderClient::getIdentityProviderByIdentifier
 */

/**
 * @brief  Constructs a new GetIdentityProviderByIdentifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityProviderByIdentifierRequest::GetIdentityProviderByIdentifierRequest(const GetIdentityProviderByIdentifierRequest &other)
    : CognitoIdentityProviderRequest(new GetIdentityProviderByIdentifierRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityProviderByIdentifierRequest object.
 */
GetIdentityProviderByIdentifierRequest::GetIdentityProviderByIdentifierRequest()
    : CognitoIdentityProviderRequest(new GetIdentityProviderByIdentifierRequestPrivate(CognitoIdentityProviderRequest::GetIdentityProviderByIdentifierAction, this))
{

}

bool GetIdentityProviderByIdentifierRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityProviderByIdentifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityProviderByIdentifierResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityProviderByIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityProviderByIdentifierResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityProviderByIdentifierRequestPrivate
 *
 * @brief  Private implementation for GetIdentityProviderByIdentifierRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityProviderByIdentifierRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetIdentityProviderByIdentifierRequest instance.
 */
GetIdentityProviderByIdentifierRequestPrivate::GetIdentityProviderByIdentifierRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetIdentityProviderByIdentifierRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityProviderByIdentifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityProviderByIdentifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityProviderByIdentifierRequest instance.
 */
GetIdentityProviderByIdentifierRequestPrivate::GetIdentityProviderByIdentifierRequestPrivate(
    const GetIdentityProviderByIdentifierRequestPrivate &other, GetIdentityProviderByIdentifierRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
