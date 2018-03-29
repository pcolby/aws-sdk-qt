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

#include "describeeventtopicsrequest.h"
#include "describeeventtopicsrequest_p.h"
#include "describeeventtopicsresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  DescribeEventTopicsRequest
 *
 * @brief  Implements DirectoryService DescribeEventTopics requests.
 *
 * @see    DirectoryServiceClient::describeEventTopics
 */

/**
 * @brief  Constructs a new DescribeEventTopicsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventTopicsRequest::DescribeEventTopicsRequest(const DescribeEventTopicsRequest &other)
    : DirectoryServiceRequest(new DescribeEventTopicsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventTopicsRequest object.
 */
DescribeEventTopicsRequest::DescribeEventTopicsRequest()
    : DirectoryServiceRequest(new DescribeEventTopicsRequestPrivate(DirectoryServiceRequest::DescribeEventTopicsAction, this))
{

}

bool DescribeEventTopicsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventTopicsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventTopicsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DescribeEventTopicsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventTopicsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventTopicsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventTopicsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTopicsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeEventTopicsRequest instance.
 */
DescribeEventTopicsRequestPrivate::DescribeEventTopicsRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeEventTopicsRequest * const q)
    : DescribeEventTopicsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTopicsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventTopicsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventTopicsRequest instance.
 */
DescribeEventTopicsRequestPrivate::DescribeEventTopicsRequestPrivate(
    const DescribeEventTopicsRequestPrivate &other, DescribeEventTopicsRequest * const q)
    : DescribeEventTopicsPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
