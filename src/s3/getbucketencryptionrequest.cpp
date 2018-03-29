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

#include "getbucketencryptionrequest.h"
#include "getbucketencryptionrequest_p.h"
#include "getbucketencryptionresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketEncryptionRequest
 *
 * @brief  Implements S3 GetBucketEncryption requests.
 *
 * @see    S3Client::getBucketEncryption
 */

/**
 * @brief  Constructs a new GetBucketEncryptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketEncryptionRequest::GetBucketEncryptionRequest(const GetBucketEncryptionRequest &other)
    : S3Request(new GetBucketEncryptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketEncryptionRequest object.
 */
GetBucketEncryptionRequest::GetBucketEncryptionRequest()
    : S3Request(new GetBucketEncryptionRequestPrivate(S3Request::GetBucketEncryptionAction, this))
{

}

bool GetBucketEncryptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketEncryptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketEncryptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketEncryptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketEncryptionRequestPrivate
 *
 * @brief  Private implementation for GetBucketEncryptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketEncryptionRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketEncryptionRequest instance.
 */
GetBucketEncryptionRequestPrivate::GetBucketEncryptionRequestPrivate(
    const S3Request::Action action, GetBucketEncryptionRequest * const q)
    : GetBucketEncryptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketEncryptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketEncryptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketEncryptionRequest instance.
 */
GetBucketEncryptionRequestPrivate::GetBucketEncryptionRequestPrivate(
    const GetBucketEncryptionRequestPrivate &other, GetBucketEncryptionRequest * const q)
    : GetBucketEncryptionPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
