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

#include "getcertificateauthoritycertificaterequest.h"
#include "getcertificateauthoritycertificaterequest_p.h"
#include "getcertificateauthoritycertificateresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  GetCertificateAuthorityCertificateRequest
 *
 * @brief  Implements ACMPCA GetCertificateAuthorityCertificate requests.
 *
 * @see    ACMPCAClient::getCertificateAuthorityCertificate
 */

/**
 * @brief  Constructs a new GetCertificateAuthorityCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCertificateAuthorityCertificateRequest::GetCertificateAuthorityCertificateRequest(const GetCertificateAuthorityCertificateRequest &other)
    : ACMPCARequest(new GetCertificateAuthorityCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCertificateAuthorityCertificateRequest object.
 */
GetCertificateAuthorityCertificateRequest::GetCertificateAuthorityCertificateRequest()
    : ACMPCARequest(new GetCertificateAuthorityCertificateRequestPrivate(ACMPCARequest::GetCertificateAuthorityCertificateAction, this))
{

}

bool GetCertificateAuthorityCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCertificateAuthorityCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCertificateAuthorityCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCertificateAuthorityCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetCertificateAuthorityCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCertificateAuthorityCertificateRequestPrivate
 *
 * @brief  Private implementation for GetCertificateAuthorityCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCertificateRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public GetCertificateAuthorityCertificateRequest instance.
 */
GetCertificateAuthorityCertificateRequestPrivate::GetCertificateAuthorityCertificateRequestPrivate(
    const ACMPCARequest::Action action, GetCertificateAuthorityCertificateRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCertificateAuthorityCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCertificateAuthorityCertificateRequest instance.
 */
GetCertificateAuthorityCertificateRequestPrivate::GetCertificateAuthorityCertificateRequestPrivate(
    const GetCertificateAuthorityCertificateRequestPrivate &other, GetCertificateAuthorityCertificateRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
