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

#include "headbucketrequest.h"
#include "headbucketrequest_p.h"
#include "headbucketresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  HeadBucketRequest
 *
 * @brief  Implements S3 HeadBucket requests.
 *
 * @see    S3Client::headBucket
 */

/**
 * @brief  Constructs a new HeadBucketRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
HeadBucketRequest::HeadBucketRequest(const HeadBucketRequest &other)
    : S3Request(new HeadBucketRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new HeadBucketRequest object.
 */
HeadBucketRequest::HeadBucketRequest()
    : S3Request(new HeadBucketRequestPrivate(S3Request::HeadBucketAction, this))
{

}

bool HeadBucketRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an HeadBucketResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An HeadBucketResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * HeadBucketRequest::response(QNetworkReply * const reply) const
{
    return new HeadBucketResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  HeadBucketRequestPrivate
 *
 * @brief  Private implementation for HeadBucketRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HeadBucketRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public HeadBucketRequest instance.
 */
HeadBucketRequestPrivate::HeadBucketRequestPrivate(
    const S3Request::Action action, HeadBucketRequest * const q)
    : HeadBucketPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new HeadBucketRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the HeadBucketRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public HeadBucketRequest instance.
 */
HeadBucketRequestPrivate::HeadBucketRequestPrivate(
    const HeadBucketRequestPrivate &other, HeadBucketRequest * const q)
    : HeadBucketPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
