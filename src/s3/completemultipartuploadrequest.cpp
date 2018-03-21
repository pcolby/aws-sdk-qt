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

#include "completemultipartuploadrequest.h"
#include "completemultipartuploadrequest_p.h"
#include "completemultipartuploadresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  CompleteMultipartUploadRequest
 *
 * @brief  Implements S3 CompleteMultipartUpload requests.
 *
 * @see    S3Client::completeMultipartUpload
 */

/**
 * @brief  Constructs a new CompleteMultipartUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CompleteMultipartUploadRequest::CompleteMultipartUploadRequest(const CompleteMultipartUploadRequest &other)
    : S3Request(new CompleteMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CompleteMultipartUploadRequest object.
 */
CompleteMultipartUploadRequest::CompleteMultipartUploadRequest()
    : S3Request(new CompleteMultipartUploadRequestPrivate(S3Request::CompleteMultipartUploadAction, this))
{

}

bool CompleteMultipartUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CompleteMultipartUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CompleteMultipartUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * CompleteMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteMultipartUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CompleteMultipartUploadRequestPrivate
 *
 * @brief  Private implementation for CompleteMultipartUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteMultipartUploadRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public CompleteMultipartUploadRequest instance.
 */
CompleteMultipartUploadRequestPrivate::CompleteMultipartUploadRequestPrivate(
    const S3Request::Action action, CompleteMultipartUploadRequest * const q)
    : CompleteMultipartUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CompleteMultipartUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CompleteMultipartUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CompleteMultipartUploadRequest instance.
 */
CompleteMultipartUploadRequestPrivate::CompleteMultipartUploadRequestPrivate(
    const CompleteMultipartUploadRequestPrivate &other, CompleteMultipartUploadRequest * const q)
    : CompleteMultipartUploadPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
