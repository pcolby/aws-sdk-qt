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

#include "getbucketpolicyrequest.h"
#include "getbucketpolicyrequest_p.h"
#include "getbucketpolicyresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketPolicyRequest
 *
 * @brief  Implements S3 GetBucketPolicy requests.
 *
 * @see    S3Client::getBucketPolicy
 */

/**
 * @brief  Constructs a new GetBucketPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketPolicyResponse::GetBucketPolicyResponse(

/**
 * @brief  Constructs a new GetBucketPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest(const GetBucketPolicyRequest &other)
    : S3Request(new GetBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketPolicyRequest object.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest()
    : S3Request(new GetBucketPolicyRequestPrivate(S3Request::GetBucketPolicyAction, this))
{

}

bool GetBucketPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketPolicyRequestPrivate
 *
 * @brief  Private implementation for GetBucketPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketPolicyRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketPolicyRequest instance.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const S3Request::Action action, GetBucketPolicyRequest * const q)
    : GetBucketPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketPolicyRequest instance.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const GetBucketPolicyRequestPrivate &other, GetBucketPolicyRequest * const q)
    : GetBucketPolicyPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
