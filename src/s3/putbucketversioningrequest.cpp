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

#include "putbucketversioningrequest.h"
#include "putbucketversioningrequest_p.h"
#include "putbucketversioningresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketVersioningRequest
 *
 * @brief  Implements S3 PutBucketVersioning requests.
 *
 * @see    S3Client::putBucketVersioning
 */

/**
 * @brief  Constructs a new PutBucketVersioningResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketVersioningResponse::PutBucketVersioningResponse(

/**
 * @brief  Constructs a new PutBucketVersioningRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest(const PutBucketVersioningRequest &other)
    : S3Request(new PutBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketVersioningRequest object.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest()
    : S3Request(new PutBucketVersioningRequestPrivate(S3Request::PutBucketVersioningAction, this))
{

}

bool PutBucketVersioningRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketVersioningResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketVersioningResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketVersioningResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketVersioningRequestPrivate
 *
 * @brief  Private implementation for PutBucketVersioningRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketVersioningRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketVersioningRequest instance.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const S3Request::Action action, PutBucketVersioningRequest * const q)
    : PutBucketVersioningPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketVersioningRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketVersioningRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketVersioningRequest instance.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const PutBucketVersioningRequestPrivate &other, PutBucketVersioningRequest * const q)
    : PutBucketVersioningPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
