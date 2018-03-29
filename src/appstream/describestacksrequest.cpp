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

#include "describestacksrequest.h"
#include "describestacksrequest_p.h"
#include "describestacksresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  DescribeStacksRequest
 *
 * @brief  Implements AppStream DescribeStacks requests.
 *
 * @see    AppStreamClient::describeStacks
 */

/**
 * @brief  Constructs a new DescribeStacksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStacksRequest::DescribeStacksRequest(const DescribeStacksRequest &other)
    : AppStreamRequest(new DescribeStacksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStacksRequest object.
 */
DescribeStacksRequest::DescribeStacksRequest()
    : AppStreamRequest(new DescribeStacksRequestPrivate(AppStreamRequest::DescribeStacksAction, this))
{

}

bool DescribeStacksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStacksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStacksResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStacksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStacksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStacksRequestPrivate
 *
 * @brief  Private implementation for DescribeStacksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeStacksRequest instance.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const AppStreamRequest::Action action, DescribeStacksRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStacksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStacksRequest instance.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const DescribeStacksRequestPrivate &other, DescribeStacksRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
