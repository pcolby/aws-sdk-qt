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

#include "describecontainerrequest.h"
#include "describecontainerrequest_p.h"
#include "describecontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/**
 * @class  DescribeContainerRequest
 *
 * @brief  Implements MediaStore DescribeContainer requests.
 *
 * @see    MediaStoreClient::describeContainer
 */

/**
 * @brief  Constructs a new DescribeContainerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeContainerRequest::DescribeContainerRequest(const DescribeContainerRequest &other)
    : MediaStoreRequest(new DescribeContainerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeContainerRequest object.
 */
DescribeContainerRequest::DescribeContainerRequest()
    : MediaStoreRequest(new DescribeContainerRequestPrivate(MediaStoreRequest::DescribeContainerAction, this))
{

}

bool DescribeContainerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeContainerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeContainerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
AwsAbstractResponse * DescribeContainerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContainerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeContainerRequestPrivate
 *
 * @brief  Private implementation for DescribeContainerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public DescribeContainerRequest instance.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const MediaStoreRequest::Action action, DescribeContainerRequest * const q)
    : DescribeContainerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeContainerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeContainerRequest instance.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const DescribeContainerRequestPrivate &other, DescribeContainerRequest * const q)
    : DescribeContainerPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
