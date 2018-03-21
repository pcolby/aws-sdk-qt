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

#include "describetablerequest.h"
#include "describetablerequest_p.h"
#include "describetableresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  DescribeTableRequest
 *
 * @brief  Implements DynamoDB DescribeTable requests.
 *
 * @see    DynamoDBClient::describeTable
 */

/**
 * @brief  Constructs a new DescribeTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTableResponse::DescribeTableResponse(

/**
 * @brief  Constructs a new DescribeTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTableRequest::DescribeTableRequest(const DescribeTableRequest &other)
    : DynamoDBRequest(new DescribeTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTableRequest object.
 */
DescribeTableRequest::DescribeTableRequest()
    : DynamoDBRequest(new DescribeTableRequestPrivate(DynamoDBRequest::DescribeTableAction, this))
{

}

bool DescribeTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * DescribeTableRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTableRequestPrivate
 *
 * @brief  Private implementation for DescribeTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DescribeTableRequest instance.
 */
DescribeTableRequestPrivate::DescribeTableRequestPrivate(
    const DynamoDBRequest::Action action, DescribeTableRequest * const q)
    : DescribeTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTableRequest instance.
 */
DescribeTableRequestPrivate::DescribeTableRequestPrivate(
    const DescribeTableRequestPrivate &other, DescribeTableRequest * const q)
    : DescribeTablePrivate(other, q)
{

}
