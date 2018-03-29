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

#include "deletebucketreplicationrequest.h"
#include "deletebucketreplicationrequest_p.h"
#include "deletebucketreplicationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketReplicationRequest
 *
 * @brief  Implements S3 DeleteBucketReplication requests.
 *
 * @see    S3Client::deleteBucketReplication
 */

/**
 * @brief  Constructs a new DeleteBucketReplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketReplicationRequest::DeleteBucketReplicationRequest(const DeleteBucketReplicationRequest &other)
    : S3Request(new DeleteBucketReplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketReplicationRequest object.
 */
DeleteBucketReplicationRequest::DeleteBucketReplicationRequest()
    : S3Request(new DeleteBucketReplicationRequestPrivate(S3Request::DeleteBucketReplicationAction, this))
{

}

bool DeleteBucketReplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketReplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketReplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteBucketReplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketReplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketReplicationRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketReplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketReplicationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketReplicationRequest instance.
 */
DeleteBucketReplicationRequestPrivate::DeleteBucketReplicationRequestPrivate(
    const S3Request::Action action, DeleteBucketReplicationRequest * const q)
    : DeleteBucketReplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketReplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketReplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketReplicationRequest instance.
 */
DeleteBucketReplicationRequestPrivate::DeleteBucketReplicationRequestPrivate(
    const DeleteBucketReplicationRequestPrivate &other, DeleteBucketReplicationRequest * const q)
    : DeleteBucketReplicationPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
