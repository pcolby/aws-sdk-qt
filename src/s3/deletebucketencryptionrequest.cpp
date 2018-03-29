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

#include "deletebucketencryptionrequest.h"
#include "deletebucketencryptionrequest_p.h"
#include "deletebucketencryptionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketEncryptionRequest
 *
 * @brief  Implements S3 DeleteBucketEncryption requests.
 *
 * @see    S3Client::deleteBucketEncryption
 */

/**
 * @brief  Constructs a new DeleteBucketEncryptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketEncryptionRequest::DeleteBucketEncryptionRequest(const DeleteBucketEncryptionRequest &other)
    : S3Request(new DeleteBucketEncryptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketEncryptionRequest object.
 */
DeleteBucketEncryptionRequest::DeleteBucketEncryptionRequest()
    : S3Request(new DeleteBucketEncryptionRequestPrivate(S3Request::DeleteBucketEncryptionAction, this))
{

}

bool DeleteBucketEncryptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketEncryptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketEncryptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketEncryptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketEncryptionRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketEncryptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketEncryptionRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketEncryptionRequest instance.
 */
DeleteBucketEncryptionRequestPrivate::DeleteBucketEncryptionRequestPrivate(
    const S3Request::Action action, DeleteBucketEncryptionRequest * const q)
    : DeleteBucketEncryptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketEncryptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketEncryptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketEncryptionRequest instance.
 */
DeleteBucketEncryptionRequestPrivate::DeleteBucketEncryptionRequestPrivate(
    const DeleteBucketEncryptionRequestPrivate &other, DeleteBucketEncryptionRequest * const q)
    : DeleteBucketEncryptionPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
