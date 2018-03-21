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

#include "createtablerequest.h"
#include "createtablerequest_p.h"
#include "createtableresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  CreateTableRequest
 *
 * @brief  Implements DynamoDB CreateTable requests.
 *
 * @see    DynamoDBClient::createTable
 */

/**
 * @brief  Constructs a new CreateTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTableRequest::CreateTableRequest(const CreateTableRequest &other)
    : DynamoDBRequest(new CreateTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTableRequest object.
 */
CreateTableRequest::CreateTableRequest()
    : DynamoDBRequest(new CreateTableRequestPrivate(DynamoDBRequest::CreateTableAction, this))
{

}

bool CreateTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * CreateTableRequest::response(QNetworkReply * const reply) const
{
    return new CreateTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTableRequestPrivate
 *
 * @brief  Private implementation for CreateTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTableRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public CreateTableRequest instance.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const DynamoDBRequest::Action action, CreateTableRequest * const q)
    : CreateTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTableRequest instance.
 */
CreateTableRequestPrivate::CreateTableRequestPrivate(
    const CreateTableRequestPrivate &other, CreateTableRequest * const q)
    : CreateTablePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
