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

#include "putbucketaclrequest.h"
#include "putbucketaclrequest_p.h"
#include "putbucketaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketAclRequest
 *
 * @brief  Implements S3 PutBucketAcl requests.
 *
 * @see    S3Client::putBucketAcl
 */

/**
 * @brief  Constructs a new PutBucketAclRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketAclRequest::PutBucketAclRequest(const PutBucketAclRequest &other)
    : S3Request(new PutBucketAclRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketAclRequest object.
 */
PutBucketAclRequest::PutBucketAclRequest()
    : S3Request(new PutBucketAclRequestPrivate(S3Request::PutBucketAclAction, this))
{

}

bool PutBucketAclRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketAclResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketAclResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketAclRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAclResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketAclRequestPrivate
 *
 * @brief  Private implementation for PutBucketAclRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAclRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketAclRequest instance.
 */
PutBucketAclRequestPrivate::PutBucketAclRequestPrivate(
    const S3Request::Action action, PutBucketAclRequest * const q)
    : PutBucketAclPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAclRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAclRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketAclRequest instance.
 */
PutBucketAclRequestPrivate::PutBucketAclRequestPrivate(
    const PutBucketAclRequestPrivate &other, PutBucketAclRequest * const q)
    : PutBucketAclPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
