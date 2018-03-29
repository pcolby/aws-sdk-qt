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

#include "listobjectsrequest.h"
#include "listobjectsrequest_p.h"
#include "listobjectsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  ListObjectsRequest
 *
 * @brief  Implements S3 ListObjects requests.
 *
 * @see    S3Client::listObjects
 */

/**
 * @brief  Constructs a new ListObjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectsRequest::ListObjectsRequest(const ListObjectsRequest &other)
    : S3Request(new ListObjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectsRequest object.
 */
ListObjectsRequest::ListObjectsRequest()
    : S3Request(new ListObjectsRequestPrivate(S3Request::ListObjectsAction, this))
{

}

bool ListObjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectsRequestPrivate
 *
 * @brief  Private implementation for ListObjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListObjectsRequest instance.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const S3Request::Action action, ListObjectsRequest * const q)
    : ListObjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectsRequest instance.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const ListObjectsRequestPrivate &other, ListObjectsRequest * const q)
    : ListObjectsPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
