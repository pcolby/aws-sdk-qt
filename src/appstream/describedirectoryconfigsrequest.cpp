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

#include "describedirectoryconfigsrequest.h"
#include "describedirectoryconfigsrequest_p.h"
#include "describedirectoryconfigsresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  DescribeDirectoryConfigsRequest
 *
 * @brief  Implements AppStream DescribeDirectoryConfigs requests.
 *
 * @see    AppStreamClient::describeDirectoryConfigs
 */

/**
 * @brief  Constructs a new DescribeDirectoryConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectoryConfigsResponse::DescribeDirectoryConfigsResponse(

/**
 * @brief  Constructs a new DescribeDirectoryConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectoryConfigsRequest::DescribeDirectoryConfigsRequest(const DescribeDirectoryConfigsRequest &other)
    : AppStreamRequest(new DescribeDirectoryConfigsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDirectoryConfigsRequest object.
 */
DescribeDirectoryConfigsRequest::DescribeDirectoryConfigsRequest()
    : AppStreamRequest(new DescribeDirectoryConfigsRequestPrivate(AppStreamRequest::DescribeDirectoryConfigsAction, this))
{

}

bool DescribeDirectoryConfigsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDirectoryConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectoryConfigsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DescribeDirectoryConfigsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectoryConfigsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDirectoryConfigsRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectoryConfigsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoryConfigsRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeDirectoryConfigsRequest instance.
 */
DescribeDirectoryConfigsRequestPrivate::DescribeDirectoryConfigsRequestPrivate(
    const AppStreamRequest::Action action, DescribeDirectoryConfigsRequest * const q)
    : DescribeDirectoryConfigsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoryConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectoryConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectoryConfigsRequest instance.
 */
DescribeDirectoryConfigsRequestPrivate::DescribeDirectoryConfigsRequestPrivate(
    const DescribeDirectoryConfigsRequestPrivate &other, DescribeDirectoryConfigsRequest * const q)
    : DescribeDirectoryConfigsPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
