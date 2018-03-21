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

#include "verifysoftwaretokenrequest.h"
#include "verifysoftwaretokenrequest_p.h"
#include "verifysoftwaretokenresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  VerifySoftwareTokenRequest
 *
 * @brief  Implements CognitoIdentityProvider VerifySoftwareToken requests.
 *
 * @see    CognitoIdentityProviderClient::verifySoftwareToken
 */

/**
 * @brief  Constructs a new VerifySoftwareTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifySoftwareTokenResponse::VerifySoftwareTokenResponse(

/**
 * @brief  Constructs a new VerifySoftwareTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifySoftwareTokenRequest::VerifySoftwareTokenRequest(const VerifySoftwareTokenRequest &other)
    : CognitoIdentityProviderRequest(new VerifySoftwareTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifySoftwareTokenRequest object.
 */
VerifySoftwareTokenRequest::VerifySoftwareTokenRequest()
    : CognitoIdentityProviderRequest(new VerifySoftwareTokenRequestPrivate(CognitoIdentityProviderRequest::VerifySoftwareTokenAction, this))
{

}

bool VerifySoftwareTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifySoftwareTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifySoftwareTokenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * VerifySoftwareTokenRequest::response(QNetworkReply * const reply) const
{
    return new VerifySoftwareTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifySoftwareTokenRequestPrivate
 *
 * @brief  Private implementation for VerifySoftwareTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifySoftwareTokenRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public VerifySoftwareTokenRequest instance.
 */
VerifySoftwareTokenRequestPrivate::VerifySoftwareTokenRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, VerifySoftwareTokenRequest * const q)
    : VerifySoftwareTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifySoftwareTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifySoftwareTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifySoftwareTokenRequest instance.
 */
VerifySoftwareTokenRequestPrivate::VerifySoftwareTokenRequestPrivate(
    const VerifySoftwareTokenRequestPrivate &other, VerifySoftwareTokenRequest * const q)
    : VerifySoftwareTokenPrivate(other, q)
{

}
