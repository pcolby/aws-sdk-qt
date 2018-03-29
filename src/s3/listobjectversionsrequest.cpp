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

#include "listobjectversionsrequest.h"
#include "listobjectversionsrequest_p.h"
#include "listobjectversionsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  ListObjectVersionsRequest
 *
 * @brief  Implements S3 ListObjectVersions requests.
 *
 * @see    S3Client::listObjectVersions
 */

/**
 * @brief  Constructs a new ListObjectVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectVersionsRequest::ListObjectVersionsRequest(const ListObjectVersionsRequest &other)
    : S3Request(new ListObjectVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListObjectVersionsRequest object.
 */
ListObjectVersionsRequest::ListObjectVersionsRequest()
    : S3Request(new ListObjectVersionsRequestPrivate(S3Request::ListObjectVersionsAction, this))
{

}

bool ListObjectVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListObjectVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListObjectVersionsRequestPrivate
 *
 * @brief  Private implementation for ListObjectVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectVersionsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListObjectVersionsRequest instance.
 */
ListObjectVersionsRequestPrivate::ListObjectVersionsRequestPrivate(
    const S3Request::Action action, ListObjectVersionsRequest * const q)
    : ListObjectVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectVersionsRequest instance.
 */
ListObjectVersionsRequestPrivate::ListObjectVersionsRequestPrivate(
    const ListObjectVersionsRequestPrivate &other, ListObjectVersionsRequest * const q)
    : ListObjectVersionsPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
