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

#include "describeobjectrequest.h"
#include "describeobjectrequest_p.h"
#include "describeobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/**
 * @class  DescribeObjectRequest
 *
 * @brief  Implements MediaStoreData DescribeObject requests.
 *
 * @see    MediaStoreDataClient::describeObject
 */

/**
 * @brief  Constructs a new DescribeObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeObjectRequest::DescribeObjectRequest(const DescribeObjectRequest &other)
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeObjectRequest object.
 */
DescribeObjectRequest::DescribeObjectRequest()
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(MediaStoreDataRequest::DescribeObjectAction, this))
{

}

bool DescribeObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreDataClient::send
 */
AwsAbstractResponse * DescribeObjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeObjectRequestPrivate
 *
 * @brief  Private implementation for DescribeObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectRequestPrivate object.
 *
 * @param  action  MediaStoreData action being performed.
 * @param  q       Pointer to this object's public DescribeObjectRequest instance.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, DescribeObjectRequest * const q)
    : DescribeObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeObjectRequest instance.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const DescribeObjectRequestPrivate &other, DescribeObjectRequest * const q)
    : DescribeObjectPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
