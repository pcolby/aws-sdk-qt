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

#include "describeglobaltablerequest.h"
#include "describeglobaltablerequest_p.h"
#include "describeglobaltableresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  DescribeGlobalTableRequest
 *
 * @brief  Implements DynamoDB DescribeGlobalTable requests.
 *
 * @see    DynamoDBClient::describeGlobalTable
 */

/**
 * @brief  Constructs a new DescribeGlobalTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGlobalTableRequest::DescribeGlobalTableRequest(const DescribeGlobalTableRequest &other)
    : DynamoDBRequest(new DescribeGlobalTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGlobalTableRequest object.
 */
DescribeGlobalTableRequest::DescribeGlobalTableRequest()
    : DynamoDBRequest(new DescribeGlobalTableRequestPrivate(DynamoDBRequest::DescribeGlobalTableAction, this))
{

}

bool DescribeGlobalTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGlobalTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGlobalTableResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalTableRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGlobalTableRequestPrivate
 *
 * @brief  Private implementation for DescribeGlobalTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGlobalTableRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DescribeGlobalTableRequest instance.
 */
DescribeGlobalTableRequestPrivate::DescribeGlobalTableRequestPrivate(
    const DynamoDBRequest::Action action, DescribeGlobalTableRequest * const q)
    : DescribeGlobalTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGlobalTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGlobalTableRequest instance.
 */
DescribeGlobalTableRequestPrivate::DescribeGlobalTableRequestPrivate(
    const DescribeGlobalTableRequestPrivate &other, DescribeGlobalTableRequest * const q)
    : DescribeGlobalTablePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
