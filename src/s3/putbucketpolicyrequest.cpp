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

#include "putbucketpolicyrequest.h"
#include "putbucketpolicyrequest_p.h"
#include "putbucketpolicyresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketPolicyRequest
 *
 * @brief  Implements S3 PutBucketPolicy requests.
 *
 * @see    S3Client::putBucketPolicy
 */

/**
 * @brief  Constructs a new PutBucketPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketPolicyResponse::PutBucketPolicyResponse(

/**
 * @brief  Constructs a new PutBucketPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest(const PutBucketPolicyRequest &other)
    : S3Request(new PutBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketPolicyRequest object.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest()
    : S3Request(new PutBucketPolicyRequestPrivate(S3Request::PutBucketPolicyAction, this))
{

}

bool PutBucketPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketPolicyRequestPrivate
 *
 * @brief  Private implementation for PutBucketPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketPolicyRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketPolicyRequest instance.
 */
PutBucketPolicyRequestPrivate::PutBucketPolicyRequestPrivate(
    const S3Request::Action action, PutBucketPolicyRequest * const q)
    : PutBucketPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketPolicyRequest instance.
 */
PutBucketPolicyRequestPrivate::PutBucketPolicyRequestPrivate(
    const PutBucketPolicyRequestPrivate &other, PutBucketPolicyRequest * const q)
    : PutBucketPolicyPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
