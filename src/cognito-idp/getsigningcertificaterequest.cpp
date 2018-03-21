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

#include "getsigningcertificaterequest.h"
#include "getsigningcertificaterequest_p.h"
#include "getsigningcertificateresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetSigningCertificateRequest
 *
 * @brief  Implements CognitoIdentityProvider GetSigningCertificate requests.
 *
 * @see    CognitoIdentityProviderClient::getSigningCertificate
 */

/**
 * @brief  Constructs a new GetSigningCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSigningCertificateResponse::GetSigningCertificateResponse(

/**
 * @brief  Constructs a new GetSigningCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSigningCertificateRequest::GetSigningCertificateRequest(const GetSigningCertificateRequest &other)
    : CognitoIdentityProviderRequest(new GetSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSigningCertificateRequest object.
 */
GetSigningCertificateRequest::GetSigningCertificateRequest()
    : CognitoIdentityProviderRequest(new GetSigningCertificateRequestPrivate(CognitoIdentityProviderRequest::GetSigningCertificateAction, this))
{

}

bool GetSigningCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSigningCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSigningCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetSigningCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSigningCertificateRequestPrivate
 *
 * @brief  Private implementation for GetSigningCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSigningCertificateRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetSigningCertificateRequest instance.
 */
GetSigningCertificateRequestPrivate::GetSigningCertificateRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetSigningCertificateRequest * const q)
    : GetSigningCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSigningCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSigningCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSigningCertificateRequest instance.
 */
GetSigningCertificateRequestPrivate::GetSigningCertificateRequestPrivate(
    const GetSigningCertificateRequestPrivate &other, GetSigningCertificateRequest * const q)
    : GetSigningCertificatePrivate(other, q)
{

}
