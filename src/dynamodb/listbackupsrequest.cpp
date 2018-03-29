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

#include "listbackupsrequest.h"
#include "listbackupsrequest_p.h"
#include "listbackupsresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  ListBackupsRequest
 *
 * @brief  Implements DynamoDB ListBackups requests.
 *
 * @see    DynamoDBClient::listBackups
 */

/**
 * @brief  Constructs a new ListBackupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBackupsRequest::ListBackupsRequest(const ListBackupsRequest &other)
    : DynamoDBRequest(new ListBackupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBackupsRequest object.
 */
ListBackupsRequest::ListBackupsRequest()
    : DynamoDBRequest(new ListBackupsRequestPrivate(DynamoDBRequest::ListBackupsAction, this))
{

}

bool ListBackupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBackupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBackupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * ListBackupsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBackupsRequestPrivate
 *
 * @brief  Private implementation for ListBackupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBackupsRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public ListBackupsRequest instance.
 */
ListBackupsRequestPrivate::ListBackupsRequestPrivate(
    const DynamoDBRequest::Action action, ListBackupsRequest * const q)
    : ListBackupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBackupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBackupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBackupsRequest instance.
 */
ListBackupsRequestPrivate::ListBackupsRequestPrivate(
    const ListBackupsRequestPrivate &other, ListBackupsRequest * const q)
    : ListBackupsPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
