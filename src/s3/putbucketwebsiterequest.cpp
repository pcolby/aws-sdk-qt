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

#include "putbucketwebsiterequest.h"
#include "putbucketwebsiterequest_p.h"
#include "putbucketwebsiteresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketWebsiteRequest
 *
 * @brief  Implements S3 PutBucketWebsite requests.
 *
 * @see    S3Client::putBucketWebsite
 */

/**
 * @brief  Constructs a new PutBucketWebsiteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketWebsiteRequest::PutBucketWebsiteRequest(const PutBucketWebsiteRequest &other)
    : S3Request(new PutBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketWebsiteRequest object.
 */
PutBucketWebsiteRequest::PutBucketWebsiteRequest()
    : S3Request(new PutBucketWebsiteRequestPrivate(S3Request::PutBucketWebsiteAction, this))
{

}

bool PutBucketWebsiteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketWebsiteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketWebsiteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketWebsiteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketWebsiteRequestPrivate
 *
 * @brief  Private implementation for PutBucketWebsiteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketWebsiteRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketWebsiteRequest instance.
 */
PutBucketWebsiteRequestPrivate::PutBucketWebsiteRequestPrivate(
    const S3Request::Action action, PutBucketWebsiteRequest * const q)
    : PutBucketWebsitePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketWebsiteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketWebsiteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketWebsiteRequest instance.
 */
PutBucketWebsiteRequestPrivate::PutBucketWebsiteRequestPrivate(
    const PutBucketWebsiteRequestPrivate &other, PutBucketWebsiteRequest * const q)
    : PutBucketWebsitePrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
