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

#include "putbucketcorsrequest.h"
#include "putbucketcorsrequest_p.h"
#include "putbucketcorsresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketCorsRequest
 *
 * @brief  Implements S3 PutBucketCors requests.
 *
 * @see    S3Client::putBucketCors
 */

/**
 * @brief  Constructs a new PutBucketCorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketCorsResponse::PutBucketCorsResponse(

/**
 * @brief  Constructs a new PutBucketCorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketCorsRequest::PutBucketCorsRequest(const PutBucketCorsRequest &other)
    : S3Request(new PutBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketCorsRequest object.
 */
PutBucketCorsRequest::PutBucketCorsRequest()
    : S3Request(new PutBucketCorsRequestPrivate(S3Request::PutBucketCorsAction, this))
{

}

bool PutBucketCorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketCorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketCorsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketCorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketCorsRequestPrivate
 *
 * @brief  Private implementation for PutBucketCorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketCorsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketCorsRequest instance.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const S3Request::Action action, PutBucketCorsRequest * const q)
    : PutBucketCorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketCorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketCorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketCorsRequest instance.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const PutBucketCorsRequestPrivate &other, PutBucketCorsRequest * const q)
    : PutBucketCorsPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
