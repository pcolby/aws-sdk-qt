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

#include "resendconfirmationcoderequest.h"
#include "resendconfirmationcoderequest_p.h"
#include "resendconfirmationcoderesponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ResendConfirmationCodeRequest
 *
 * @brief  Implements CognitoIdentityProvider ResendConfirmationCode requests.
 *
 * @see    CognitoIdentityProviderClient::resendConfirmationCode
 */

/**
 * @brief  Constructs a new ResendConfirmationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResendConfirmationCodeResponse::ResendConfirmationCodeResponse(

/**
 * @brief  Constructs a new ResendConfirmationCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResendConfirmationCodeRequest::ResendConfirmationCodeRequest(const ResendConfirmationCodeRequest &other)
    : CognitoIdentityProviderRequest(new ResendConfirmationCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResendConfirmationCodeRequest object.
 */
ResendConfirmationCodeRequest::ResendConfirmationCodeRequest()
    : CognitoIdentityProviderRequest(new ResendConfirmationCodeRequestPrivate(CognitoIdentityProviderRequest::ResendConfirmationCodeAction, this))
{

}

bool ResendConfirmationCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResendConfirmationCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResendConfirmationCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ResendConfirmationCodeRequest::response(QNetworkReply * const reply) const
{
    return new ResendConfirmationCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResendConfirmationCodeRequestPrivate
 *
 * @brief  Private implementation for ResendConfirmationCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendConfirmationCodeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ResendConfirmationCodeRequest instance.
 */
ResendConfirmationCodeRequestPrivate::ResendConfirmationCodeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ResendConfirmationCodeRequest * const q)
    : ResendConfirmationCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResendConfirmationCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResendConfirmationCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResendConfirmationCodeRequest instance.
 */
ResendConfirmationCodeRequestPrivate::ResendConfirmationCodeRequestPrivate(
    const ResendConfirmationCodeRequestPrivate &other, ResendConfirmationCodeRequest * const q)
    : ResendConfirmationCodePrivate(other, q)
{

}
