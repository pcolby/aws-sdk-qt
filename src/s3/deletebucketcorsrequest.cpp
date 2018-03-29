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

#include "deletebucketcorsrequest.h"
#include "deletebucketcorsrequest_p.h"
#include "deletebucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketCorsRequest
 *
 * @brief  Implements S3 DeleteBucketCors requests.
 *
 * @see    S3Client::deleteBucketCors
 */

/**
 * @brief  Constructs a new DeleteBucketCorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest(const DeleteBucketCorsRequest &other)
    : S3Request(new DeleteBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketCorsRequest object.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest()
    : S3Request(new DeleteBucketCorsRequestPrivate(S3Request::DeleteBucketCorsAction, this))
{

}

bool DeleteBucketCorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketCorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketCorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketCorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketCorsRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketCorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketCorsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketCorsRequest instance.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const S3Request::Action action, DeleteBucketCorsRequest * const q)
    : DeleteBucketCorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketCorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketCorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketCorsRequest instance.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const DeleteBucketCorsRequestPrivate &other, DeleteBucketCorsRequest * const q)
    : DeleteBucketCorsPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
