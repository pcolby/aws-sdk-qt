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

#include "describetimetoliverequest.h"
#include "describetimetoliverequest_p.h"
#include "describetimetoliveresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  DescribeTimeToLiveRequest
 *
 * @brief  Implements DynamoDB DescribeTimeToLive requests.
 *
 * @see    DynamoDBClient::describeTimeToLive
 */

/**
 * @brief  Constructs a new DescribeTimeToLiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTimeToLiveRequest::DescribeTimeToLiveRequest(const DescribeTimeToLiveRequest &other)
    : DynamoDBRequest(new DescribeTimeToLiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTimeToLiveRequest object.
 */
DescribeTimeToLiveRequest::DescribeTimeToLiveRequest()
    : DynamoDBRequest(new DescribeTimeToLiveRequestPrivate(DynamoDBRequest::DescribeTimeToLiveAction, this))
{

}

bool DescribeTimeToLiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTimeToLiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTimeToLiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * DescribeTimeToLiveRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTimeToLiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTimeToLiveRequestPrivate
 *
 * @brief  Private implementation for DescribeTimeToLiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeToLiveRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DescribeTimeToLiveRequest instance.
 */
DescribeTimeToLiveRequestPrivate::DescribeTimeToLiveRequestPrivate(
    const DynamoDBRequest::Action action, DescribeTimeToLiveRequest * const q)
    : DescribeTimeToLivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeToLiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTimeToLiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTimeToLiveRequest instance.
 */
DescribeTimeToLiveRequestPrivate::DescribeTimeToLiveRequestPrivate(
    const DescribeTimeToLiveRequestPrivate &other, DescribeTimeToLiveRequest * const q)
    : DescribeTimeToLivePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
