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

#include "getbucketversioningrequest.h"
#include "getbucketversioningrequest_p.h"
#include "getbucketversioningresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketVersioningRequest
 *
 * @brief  Implements S3 GetBucketVersioning requests.
 *
 * @see    S3Client::getBucketVersioning
 */

/**
 * @brief  Constructs a new GetBucketVersioningResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketVersioningResponse::GetBucketVersioningResponse(

/**
 * @brief  Constructs a new GetBucketVersioningRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest(const GetBucketVersioningRequest &other)
    : S3Request(new GetBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketVersioningRequest object.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest()
    : S3Request(new GetBucketVersioningRequestPrivate(S3Request::GetBucketVersioningAction, this))
{

}

bool GetBucketVersioningRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketVersioningResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketVersioningResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketVersioningResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketVersioningRequestPrivate
 *
 * @brief  Private implementation for GetBucketVersioningRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketVersioningRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketVersioningRequest instance.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const S3Request::Action action, GetBucketVersioningRequest * const q)
    : GetBucketVersioningPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketVersioningRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketVersioningRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketVersioningRequest instance.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const GetBucketVersioningRequestPrivate &other, GetBucketVersioningRequest * const q)
    : GetBucketVersioningPrivate(other, q)
{

}
