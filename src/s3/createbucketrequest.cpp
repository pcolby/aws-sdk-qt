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

#include "createbucketrequest.h"
#include "createbucketrequest_p.h"
#include "createbucketresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  CreateBucketRequest
 *
 * @brief  Implements S3 CreateBucket requests.
 *
 * @see    S3Client::createBucket
 */

/**
 * @brief  Constructs a new CreateBucketRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBucketRequest::CreateBucketRequest(const CreateBucketRequest &other)
    : S3Request(new CreateBucketRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBucketRequest object.
 */
CreateBucketRequest::CreateBucketRequest()
    : S3Request(new CreateBucketRequestPrivate(S3Request::CreateBucketAction, this))
{

}

bool CreateBucketRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBucketResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBucketResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * CreateBucketRequest::response(QNetworkReply * const reply) const
{
    return new CreateBucketResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBucketRequestPrivate
 *
 * @brief  Private implementation for CreateBucketRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBucketRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public CreateBucketRequest instance.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const S3Request::Action action, CreateBucketRequest * const q)
    : CreateBucketPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBucketRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBucketRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBucketRequest instance.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const CreateBucketRequestPrivate &other, CreateBucketRequest * const q)
    : CreateBucketPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
