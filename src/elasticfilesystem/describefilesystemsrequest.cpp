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

#include "describefilesystemsrequest.h"
#include "describefilesystemsrequest_p.h"
#include "describefilesystemsresponse.h"
#include "efsrequest_p.h"

namespace AWS {
namespace EFS {

/**
 * @class  DescribeFileSystemsRequest
 *
 * @brief  Implements EFS DescribeFileSystems requests.
 *
 * @see    EFSClient::describeFileSystems
 */

/**
 * @brief  Constructs a new DescribeFileSystemsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest(const DescribeFileSystemsRequest &other)
    : EFSRequest(new DescribeFileSystemsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFileSystemsRequest object.
 */
DescribeFileSystemsRequest::DescribeFileSystemsRequest()
    : EFSRequest(new DescribeFileSystemsRequestPrivate(EFSRequest::DescribeFileSystemsAction, this))
{

}

bool DescribeFileSystemsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFileSystemsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFileSystemsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EFSClient::send
 */
AwsAbstractResponse * DescribeFileSystemsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFileSystemsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFileSystemsRequestPrivate
 *
 * @brief  Private implementation for DescribeFileSystemsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFileSystemsRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public DescribeFileSystemsRequest instance.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const EFSRequest::Action action, DescribeFileSystemsRequest * const q)
    : DescribeFileSystemsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFileSystemsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFileSystemsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFileSystemsRequest instance.
 */
DescribeFileSystemsRequestPrivate::DescribeFileSystemsRequestPrivate(
    const DescribeFileSystemsRequestPrivate &other, DescribeFileSystemsRequest * const q)
    : DescribeFileSystemsPrivate(other, q)
{

}

} // namespace EFS
} // namespace AWS
