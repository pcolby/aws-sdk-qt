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

#include "uploadpartcopyrequest.h"
#include "uploadpartcopyrequest_p.h"
#include "uploadpartcopyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  UploadPartCopyRequest
 *
 * @brief  Implements S3 UploadPartCopy requests.
 *
 * @see    S3Client::uploadPartCopy
 */

/**
 * @brief  Constructs a new UploadPartCopyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadPartCopyRequest::UploadPartCopyRequest(const UploadPartCopyRequest &other)
    : S3Request(new UploadPartCopyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadPartCopyRequest object.
 */
UploadPartCopyRequest::UploadPartCopyRequest()
    : S3Request(new UploadPartCopyRequestPrivate(S3Request::UploadPartCopyAction, this))
{

}

bool UploadPartCopyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadPartCopyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadPartCopyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * UploadPartCopyRequest::response(QNetworkReply * const reply) const
{
    return new UploadPartCopyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadPartCopyRequestPrivate
 *
 * @brief  Private implementation for UploadPartCopyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartCopyRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public UploadPartCopyRequest instance.
 */
UploadPartCopyRequestPrivate::UploadPartCopyRequestPrivate(
    const S3Request::Action action, UploadPartCopyRequest * const q)
    : UploadPartCopyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartCopyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadPartCopyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadPartCopyRequest instance.
 */
UploadPartCopyRequestPrivate::UploadPartCopyRequestPrivate(
    const UploadPartCopyRequestPrivate &other, UploadPartCopyRequest * const q)
    : UploadPartCopyPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
