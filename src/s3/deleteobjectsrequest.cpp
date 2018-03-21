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

#include "deleteobjectsrequest.h"
#include "deleteobjectsrequest_p.h"
#include "deleteobjectsresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  DeleteObjectsRequest
 *
 * @brief  Implements S3 DeleteObjects requests.
 *
 * @see    S3Client::deleteObjects
 */

/**
 * @brief  Constructs a new DeleteObjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteObjectsResponse::DeleteObjectsResponse(

/**
 * @brief  Constructs a new DeleteObjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteObjectsRequest::DeleteObjectsRequest(const DeleteObjectsRequest &other)
    : S3Request(new DeleteObjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteObjectsRequest object.
 */
DeleteObjectsRequest::DeleteObjectsRequest()
    : S3Request(new DeleteObjectsRequestPrivate(S3Request::DeleteObjectsAction, this))
{

}

bool DeleteObjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteObjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteObjectsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteObjectsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteObjectsRequestPrivate
 *
 * @brief  Private implementation for DeleteObjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteObjectsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteObjectsRequest instance.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const S3Request::Action action, DeleteObjectsRequest * const q)
    : DeleteObjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteObjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteObjectsRequest instance.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const DeleteObjectsRequestPrivate &other, DeleteObjectsRequest * const q)
    : DeleteObjectsPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
