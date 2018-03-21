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

#include "abortmultipartuploadrequest.h"
#include "abortmultipartuploadrequest_p.h"
#include "abortmultipartuploadresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  AbortMultipartUploadRequest
 *
 * @brief  Implements S3 AbortMultipartUpload requests.
 *
 * @see    S3Client::abortMultipartUpload
 */

/**
 * @brief  Constructs a new AbortMultipartUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortMultipartUploadResponse::AbortMultipartUploadResponse(

/**
 * @brief  Constructs a new AbortMultipartUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AbortMultipartUploadRequest::AbortMultipartUploadRequest(const AbortMultipartUploadRequest &other)
    : S3Request(new AbortMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AbortMultipartUploadRequest object.
 */
AbortMultipartUploadRequest::AbortMultipartUploadRequest()
    : S3Request(new AbortMultipartUploadRequestPrivate(S3Request::AbortMultipartUploadAction, this))
{

}

bool AbortMultipartUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AbortMultipartUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AbortMultipartUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * AbortMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new AbortMultipartUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AbortMultipartUploadRequestPrivate
 *
 * @brief  Private implementation for AbortMultipartUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortMultipartUploadRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public AbortMultipartUploadRequest instance.
 */
AbortMultipartUploadRequestPrivate::AbortMultipartUploadRequestPrivate(
    const S3Request::Action action, AbortMultipartUploadRequest * const q)
    : AbortMultipartUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AbortMultipartUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AbortMultipartUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AbortMultipartUploadRequest instance.
 */
AbortMultipartUploadRequestPrivate::AbortMultipartUploadRequestPrivate(
    const AbortMultipartUploadRequestPrivate &other, AbortMultipartUploadRequest * const q)
    : AbortMultipartUploadPrivate(other, q)
{

}
