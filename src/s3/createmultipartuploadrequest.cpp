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

#include "createmultipartuploadrequest.h"
#include "createmultipartuploadrequest_p.h"
#include "createmultipartuploadresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  CreateMultipartUploadRequest
 *
 * @brief  Implements S3 CreateMultipartUpload requests.
 *
 * @see    S3Client::createMultipartUpload
 */

/**
 * @brief  Constructs a new CreateMultipartUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMultipartUploadRequest::CreateMultipartUploadRequest(const CreateMultipartUploadRequest &other)
    : S3Request(new CreateMultipartUploadRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMultipartUploadRequest object.
 */
CreateMultipartUploadRequest::CreateMultipartUploadRequest()
    : S3Request(new CreateMultipartUploadRequestPrivate(S3Request::CreateMultipartUploadAction, this))
{

}

bool CreateMultipartUploadRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMultipartUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMultipartUploadResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * CreateMultipartUploadRequest::response(QNetworkReply * const reply) const
{
    return new CreateMultipartUploadResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMultipartUploadRequestPrivate
 *
 * @brief  Private implementation for CreateMultipartUploadRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMultipartUploadRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public CreateMultipartUploadRequest instance.
 */
CreateMultipartUploadRequestPrivate::CreateMultipartUploadRequestPrivate(
    const S3Request::Action action, CreateMultipartUploadRequest * const q)
    : CreateMultipartUploadPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMultipartUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMultipartUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMultipartUploadRequest instance.
 */
CreateMultipartUploadRequestPrivate::CreateMultipartUploadRequestPrivate(
    const CreateMultipartUploadRequestPrivate &other, CreateMultipartUploadRequest * const q)
    : CreateMultipartUploadPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
