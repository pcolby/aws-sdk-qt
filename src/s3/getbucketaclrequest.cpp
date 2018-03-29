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

#include "getbucketaclrequest.h"
#include "getbucketaclrequest_p.h"
#include "getbucketaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketAclRequest
 *
 * @brief  Implements S3 GetBucketAcl requests.
 *
 * @see    S3Client::getBucketAcl
 */

/**
 * @brief  Constructs a new GetBucketAclRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketAclRequest::GetBucketAclRequest(const GetBucketAclRequest &other)
    : S3Request(new GetBucketAclRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketAclRequest object.
 */
GetBucketAclRequest::GetBucketAclRequest()
    : S3Request(new GetBucketAclRequestPrivate(S3Request::GetBucketAclAction, this))
{

}

bool GetBucketAclRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketAclResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketAclResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketAclRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAclResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketAclRequestPrivate
 *
 * @brief  Private implementation for GetBucketAclRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAclRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketAclRequest instance.
 */
GetBucketAclRequestPrivate::GetBucketAclRequestPrivate(
    const S3Request::Action action, GetBucketAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAclRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAclRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketAclRequest instance.
 */
GetBucketAclRequestPrivate::GetBucketAclRequestPrivate(
    const GetBucketAclRequestPrivate &other, GetBucketAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
