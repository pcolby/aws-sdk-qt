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

#include "describesessionsrequest.h"
#include "describesessionsrequest_p.h"
#include "describesessionsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  DescribeSessionsRequest
 *
 * @brief  Implements AppStream DescribeSessions requests.
 *
 * @see    AppStreamClient::describeSessions
 */

/**
 * @brief  Constructs a new DescribeSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSessionsRequest::DescribeSessionsRequest(const DescribeSessionsRequest &other)
    : AppStreamRequest(new DescribeSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSessionsRequest object.
 */
DescribeSessionsRequest::DescribeSessionsRequest()
    : AppStreamRequest(new DescribeSessionsRequestPrivate(AppStreamRequest::DescribeSessionsAction, this))
{

}

bool DescribeSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DescribeSessionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSessionsRequestPrivate
 *
 * @brief  Private implementation for DescribeSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSessionsRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeSessionsRequest instance.
 */
DescribeSessionsRequestPrivate::DescribeSessionsRequestPrivate(
    const AppStreamRequest::Action action, DescribeSessionsRequest * const q)
    : DescribeSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSessionsRequest instance.
 */
DescribeSessionsRequestPrivate::DescribeSessionsRequestPrivate(
    const DescribeSessionsRequestPrivate &other, DescribeSessionsRequest * const q)
    : DescribeSessionsPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
