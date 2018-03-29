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

#include "listglobaltablesrequest.h"
#include "listglobaltablesrequest_p.h"
#include "listglobaltablesresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  ListGlobalTablesRequest
 *
 * @brief  Implements DynamoDB ListGlobalTables requests.
 *
 * @see    DynamoDBClient::listGlobalTables
 */

/**
 * @brief  Constructs a new ListGlobalTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGlobalTablesRequest::ListGlobalTablesRequest(const ListGlobalTablesRequest &other)
    : DynamoDBRequest(new ListGlobalTablesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGlobalTablesRequest object.
 */
ListGlobalTablesRequest::ListGlobalTablesRequest()
    : DynamoDBRequest(new ListGlobalTablesRequestPrivate(DynamoDBRequest::ListGlobalTablesAction, this))
{

}

bool ListGlobalTablesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGlobalTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGlobalTablesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * ListGlobalTablesRequest::response(QNetworkReply * const reply) const
{
    return new ListGlobalTablesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGlobalTablesRequestPrivate
 *
 * @brief  Private implementation for ListGlobalTablesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGlobalTablesRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public ListGlobalTablesRequest instance.
 */
ListGlobalTablesRequestPrivate::ListGlobalTablesRequestPrivate(
    const DynamoDBRequest::Action action, ListGlobalTablesRequest * const q)
    : ListGlobalTablesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGlobalTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGlobalTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGlobalTablesRequest instance.
 */
ListGlobalTablesRequestPrivate::ListGlobalTablesRequestPrivate(
    const ListGlobalTablesRequestPrivate &other, ListGlobalTablesRequest * const q)
    : ListGlobalTablesPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
