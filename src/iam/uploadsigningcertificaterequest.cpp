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

#include "uploadsigningcertificaterequest.h"
#include "uploadsigningcertificaterequest_p.h"
#include "uploadsigningcertificateresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UploadSigningCertificateRequest
 *
 * @brief  Implements IAM UploadSigningCertificate requests.
 *
 * @see    IAMClient::uploadSigningCertificate
 */

/**
 * @brief  Constructs a new UploadSigningCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadSigningCertificateRequest::UploadSigningCertificateRequest(const UploadSigningCertificateRequest &other)
    : IAMRequest(new UploadSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadSigningCertificateRequest object.
 */
UploadSigningCertificateRequest::UploadSigningCertificateRequest()
    : IAMRequest(new UploadSigningCertificateRequestPrivate(IAMRequest::UploadSigningCertificateAction, this))
{

}

bool UploadSigningCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadSigningCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadSigningCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UploadSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UploadSigningCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadSigningCertificateRequestPrivate
 *
 * @brief  Private implementation for UploadSigningCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadSigningCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UploadSigningCertificateRequest instance.
 */
UploadSigningCertificateRequestPrivate::UploadSigningCertificateRequestPrivate(
    const IAMRequest::Action action, UploadSigningCertificateRequest * const q)
    : UploadSigningCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadSigningCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadSigningCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadSigningCertificateRequest instance.
 */
UploadSigningCertificateRequestPrivate::UploadSigningCertificateRequestPrivate(
    const UploadSigningCertificateRequestPrivate &other, UploadSigningCertificateRequest * const q)
    : UploadSigningCertificatePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
