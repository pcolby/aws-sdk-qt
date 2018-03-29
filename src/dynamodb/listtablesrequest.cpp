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

#include "listtablesrequest.h"
#include "listtablesrequest_p.h"
#include "listtablesresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  ListTablesRequest
 *
 * @brief  Implements DynamoDB ListTables requests.
 *
 * @see    DynamoDBClient::listTables
 */

/**
 * @brief  Constructs a new ListTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTablesRequest::ListTablesRequest(const ListTablesRequest &other)
    : DynamoDBRequest(new ListTablesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTablesRequest object.
 */
ListTablesRequest::ListTablesRequest()
    : DynamoDBRequest(new ListTablesRequestPrivate(DynamoDBRequest::ListTablesAction, this))
{

}

bool ListTablesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTablesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * ListTablesRequest::response(QNetworkReply * const reply) const
{
    return new ListTablesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTablesRequestPrivate
 *
 * @brief  Private implementation for ListTablesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTablesRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public ListTablesRequest instance.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const DynamoDBRequest::Action action, ListTablesRequest * const q)
    : ListTablesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTablesRequest instance.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const ListTablesRequestPrivate &other, ListTablesRequest * const q)
    : ListTablesPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
