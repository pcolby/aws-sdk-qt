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

#include "getcertificateauthoritycsrrequest.h"
#include "getcertificateauthoritycsrrequest_p.h"
#include "getcertificateauthoritycsrresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  GetCertificateAuthorityCsrRequest
 *
 * @brief  Implements ACMPCA GetCertificateAuthorityCsr requests.
 *
 * @see    ACMPCAClient::getCertificateAuthorityCsr
 */

/**
 * @brief  Constructs a new GetCertificateAuthorityCsrRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCertificateAuthorityCsrRequest::GetCertificateAuthorityCsrRequest(const GetCertificateAuthorityCsrRequest &other)
    : ACMPCARequest(new GetCertificateAuthorityCsrRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCertificateAuthorityCsrRequest object.
 */
GetCertificateAuthorityCsrRequest::GetCertificateAuthorityCsrRequest()
    : ACMPCARequest(new GetCertificateAuthorityCsrRequestPrivate(ACMPCARequest::GetCertificateAuthorityCsrAction, this))
{

}

bool GetCertificateAuthorityCsrRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCertificateAuthorityCsrResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCertificateAuthorityCsrResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCertificateAuthorityCsrRequest::response(QNetworkReply * const reply) const
{
    return new GetCertificateAuthorityCsrResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCertificateAuthorityCsrRequestPrivate
 *
 * @brief  Private implementation for GetCertificateAuthorityCsrRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCsrRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public GetCertificateAuthorityCsrRequest instance.
 */
GetCertificateAuthorityCsrRequestPrivate::GetCertificateAuthorityCsrRequestPrivate(
    const ACMPCARequest::Action action, GetCertificateAuthorityCsrRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCertificateAuthorityCsrRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCertificateAuthorityCsrRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCertificateAuthorityCsrRequest instance.
 */
GetCertificateAuthorityCsrRequestPrivate::GetCertificateAuthorityCsrRequestPrivate(
    const GetCertificateAuthorityCsrRequestPrivate &other, GetCertificateAuthorityCsrRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
