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

#include "restoretabletopointintimerequest.h"
#include "restoretabletopointintimerequest_p.h"
#include "restoretabletopointintimeresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  RestoreTableToPointInTimeRequest
 *
 * @brief  Implements DynamoDB RestoreTableToPointInTime requests.
 *
 * @see    DynamoDBClient::restoreTableToPointInTime
 */

/**
 * @brief  Constructs a new RestoreTableToPointInTimeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreTableToPointInTimeRequest::RestoreTableToPointInTimeRequest(const RestoreTableToPointInTimeRequest &other)
    : DynamoDBRequest(new RestoreTableToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreTableToPointInTimeRequest object.
 */
RestoreTableToPointInTimeRequest::RestoreTableToPointInTimeRequest()
    : DynamoDBRequest(new RestoreTableToPointInTimeRequestPrivate(DynamoDBRequest::RestoreTableToPointInTimeAction, this))
{

}

bool RestoreTableToPointInTimeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreTableToPointInTimeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreTableToPointInTimeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreTableToPointInTimeRequest::response(QNetworkReply * const reply) const
{
    return new RestoreTableToPointInTimeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreTableToPointInTimeRequestPrivate
 *
 * @brief  Private implementation for RestoreTableToPointInTimeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableToPointInTimeRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public RestoreTableToPointInTimeRequest instance.
 */
RestoreTableToPointInTimeRequestPrivate::RestoreTableToPointInTimeRequestPrivate(
    const DynamoDBRequest::Action action, RestoreTableToPointInTimeRequest * const q)
    : RestoreTableToPointInTimePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableToPointInTimeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreTableToPointInTimeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreTableToPointInTimeRequest instance.
 */
RestoreTableToPointInTimeRequestPrivate::RestoreTableToPointInTimeRequestPrivate(
    const RestoreTableToPointInTimeRequestPrivate &other, RestoreTableToPointInTimeRequest * const q)
    : RestoreTableToPointInTimePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
