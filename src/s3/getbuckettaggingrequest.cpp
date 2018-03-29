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

#include "getbuckettaggingrequest.h"
#include "getbuckettaggingrequest_p.h"
#include "getbuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketTaggingRequest
 *
 * @brief  Implements S3 GetBucketTagging requests.
 *
 * @see    S3Client::getBucketTagging
 */

/**
 * @brief  Constructs a new GetBucketTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest(const GetBucketTaggingRequest &other)
    : S3Request(new GetBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketTaggingRequest object.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest()
    : S3Request(new GetBucketTaggingRequestPrivate(S3Request::GetBucketTaggingAction, this))
{

}

bool GetBucketTaggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketTaggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketTaggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketTaggingRequestPrivate
 *
 * @brief  Private implementation for GetBucketTaggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketTaggingRequest instance.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const S3Request::Action action, GetBucketTaggingRequest * const q)
    : GetBucketTaggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketTaggingRequest instance.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const GetBucketTaggingRequestPrivate &other, GetBucketTaggingRequest * const q)
    : GetBucketTaggingPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
