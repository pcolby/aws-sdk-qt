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

#include "uploadpartrequest.h"
#include "uploadpartrequest_p.h"
#include "uploadpartresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  UploadPartRequest
 *
 * @brief  Implements S3 UploadPart requests.
 *
 * @see    S3Client::uploadPart
 */

/**
 * @brief  Constructs a new UploadPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadPartRequest::UploadPartRequest(const UploadPartRequest &other)
    : S3Request(new UploadPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadPartRequest object.
 */
UploadPartRequest::UploadPartRequest()
    : S3Request(new UploadPartRequestPrivate(S3Request::UploadPartAction, this))
{

}

bool UploadPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadPartResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * UploadPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadPartRequestPrivate
 *
 * @brief  Private implementation for UploadPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public UploadPartRequest instance.
 */
UploadPartRequestPrivate::UploadPartRequestPrivate(
    const S3Request::Action action, UploadPartRequest * const q)
    : UploadPartPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadPartRequest instance.
 */
UploadPartRequestPrivate::UploadPartRequestPrivate(
    const UploadPartRequestPrivate &other, UploadPartRequest * const q)
    : UploadPartPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
