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

#include "getbucketcorsrequest.h"
#include "getbucketcorsrequest_p.h"
#include "getbucketcorsresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketCorsRequest
 *
 * @brief  Implements S3 GetBucketCors requests.
 *
 * @see    S3Client::getBucketCors
 */

/**
 * @brief  Constructs a new GetBucketCorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketCorsResponse::GetBucketCorsResponse(

/**
 * @brief  Constructs a new GetBucketCorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketCorsRequest::GetBucketCorsRequest(const GetBucketCorsRequest &other)
    : S3Request(new GetBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketCorsRequest object.
 */
GetBucketCorsRequest::GetBucketCorsRequest()
    : S3Request(new GetBucketCorsRequestPrivate(S3Request::GetBucketCorsAction, this))
{

}

bool GetBucketCorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketCorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketCorsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketCorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketCorsRequestPrivate
 *
 * @brief  Private implementation for GetBucketCorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketCorsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketCorsRequest instance.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const S3Request::Action action, GetBucketCorsRequest * const q)
    : GetBucketCorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketCorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketCorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketCorsRequest instance.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const GetBucketCorsRequestPrivate &other, GetBucketCorsRequest * const q)
    : GetBucketCorsPrivate(other, q)
{

}
