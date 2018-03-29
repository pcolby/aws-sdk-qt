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

#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingrequest_p.h"
#include "deletebuckettaggingresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketTaggingRequest
 *
 * @brief  Implements S3 DeleteBucketTagging requests.
 *
 * @see    S3Client::deleteBucketTagging
 */

/**
 * @brief  Constructs a new DeleteBucketTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest(const DeleteBucketTaggingRequest &other)
    : S3Request(new DeleteBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketTaggingRequest object.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest()
    : S3Request(new DeleteBucketTaggingRequestPrivate(S3Request::DeleteBucketTaggingAction, this))
{

}

bool DeleteBucketTaggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketTaggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketTaggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketTaggingRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketTaggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketTaggingRequest instance.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const S3Request::Action action, DeleteBucketTaggingRequest * const q)
    : DeleteBucketTaggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketTaggingRequest instance.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const DeleteBucketTaggingRequestPrivate &other, DeleteBucketTaggingRequest * const q)
    : DeleteBucketTaggingPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
