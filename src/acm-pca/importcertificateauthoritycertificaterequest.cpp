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

#include "importcertificateauthoritycertificaterequest.h"
#include "importcertificateauthoritycertificaterequest_p.h"
#include "importcertificateauthoritycertificateresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/**
 * @class  ImportCertificateAuthorityCertificateRequest
 *
 * @brief  Implements ACMPCA ImportCertificateAuthorityCertificate requests.
 *
 * @see    ACMPCAClient::importCertificateAuthorityCertificate
 */

/**
 * @brief  Constructs a new ImportCertificateAuthorityCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest(const ImportCertificateAuthorityCertificateRequest &other)
    : ACMPCARequest(new ImportCertificateAuthorityCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportCertificateAuthorityCertificateRequest object.
 */
ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest()
    : ACMPCARequest(new ImportCertificateAuthorityCertificateRequestPrivate(ACMPCARequest::ImportCertificateAuthorityCertificateAction, this))
{

}

bool ImportCertificateAuthorityCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportCertificateAuthorityCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportCertificateAuthorityCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCertificateAuthorityCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ImportCertificateAuthorityCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportCertificateAuthorityCertificateRequestPrivate
 *
 * @brief  Private implementation for ImportCertificateAuthorityCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateAuthorityCertificateRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public ImportCertificateAuthorityCertificateRequest instance.
 */
ImportCertificateAuthorityCertificateRequestPrivate::ImportCertificateAuthorityCertificateRequestPrivate(
    const ACMPCARequest::Action action, ImportCertificateAuthorityCertificateRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateAuthorityCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportCertificateAuthorityCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportCertificateAuthorityCertificateRequest instance.
 */
ImportCertificateAuthorityCertificateRequestPrivate::ImportCertificateAuthorityCertificateRequestPrivate(
    const ImportCertificateAuthorityCertificateRequestPrivate &other, ImportCertificateAuthorityCertificateRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
