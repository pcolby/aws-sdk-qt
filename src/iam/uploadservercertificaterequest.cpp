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

#include "uploadservercertificaterequest.h"
#include "uploadservercertificaterequest_p.h"
#include "uploadservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UploadServerCertificateRequest
 *
 * @brief  Implements IAM UploadServerCertificate requests.
 *
 * @see    IAMClient::uploadServerCertificate
 */

/**
 * @brief  Constructs a new UploadServerCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest(const UploadServerCertificateRequest &other)
    : IAMRequest(new UploadServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadServerCertificateRequest object.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest()
    : IAMRequest(new UploadServerCertificateRequestPrivate(IAMRequest::UploadServerCertificateAction, this))
{

}

bool UploadServerCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadServerCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadServerCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UploadServerCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadServerCertificateRequestPrivate
 *
 * @brief  Private implementation for UploadServerCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadServerCertificateRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UploadServerCertificateRequest instance.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const IAMRequest::Action action, UploadServerCertificateRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadServerCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadServerCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadServerCertificateRequest instance.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const UploadServerCertificateRequestPrivate &other, UploadServerCertificateRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
