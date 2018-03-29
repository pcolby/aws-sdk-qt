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

#include "listobjectsv2request.h"
#include "listobjectsv2request_p.h"
#include "listobjectsv2response.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  ListObjectsV2Request
 *
 * @brief  Implements S3 ListObjectsV2 requests.
 *
 * @see    S3Client::listObjectsV2
 */

/**
 * @brief  Constructs a new ListObjectsV2Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectsV2Request::ListObjectsV2Request(const ListObjectsV2Request &other)
    : S3Request(new ListObjectsV2RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectsV2Request object.
 */
ListObjectsV2Request::ListObjectsV2Request()
    : S3Request(new ListObjectsV2RequestPrivate(S3Request::ListObjectsV2Action, this))
{

}

bool ListObjectsV2Request::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectsV2Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectsV2Response instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsV2Request::response(QNetworkReply * const reply) const
{
    return new ListObjectsV2Response(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectsV2RequestPrivate
 *
 * @brief  Private implementation for ListObjectsV2Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsV2RequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListObjectsV2Request instance.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const S3Request::Action action, ListObjectsV2Request * const q)
    : ListObjectsV2Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectsV2RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsV2Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectsV2Request instance.
 */
ListObjectsV2RequestPrivate::ListObjectsV2RequestPrivate(
    const ListObjectsV2RequestPrivate &other, ListObjectsV2Request * const q)
    : ListObjectsV2Private(other, q)
{

}

} // namespace S3
} // namespace QtAws
