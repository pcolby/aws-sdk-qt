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

#include "createglobaltablerequest.h"
#include "createglobaltablerequest_p.h"
#include "createglobaltableresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  CreateGlobalTableRequest
 *
 * @brief  Implements DynamoDB CreateGlobalTable requests.
 *
 * @see    DynamoDBClient::createGlobalTable
 */

/**
 * @brief  Constructs a new CreateGlobalTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGlobalTableRequest::CreateGlobalTableRequest(const CreateGlobalTableRequest &other)
    : DynamoDBRequest(new CreateGlobalTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGlobalTableRequest object.
 */
CreateGlobalTableRequest::CreateGlobalTableRequest()
    : DynamoDBRequest(new CreateGlobalTableRequestPrivate(DynamoDBRequest::CreateGlobalTableAction, this))
{

}

bool CreateGlobalTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGlobalTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGlobalTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * CreateGlobalTableRequest::response(QNetworkReply * const reply) const
{
    return new CreateGlobalTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGlobalTableRequestPrivate
 *
 * @brief  Private implementation for CreateGlobalTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGlobalTableRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public CreateGlobalTableRequest instance.
 */
CreateGlobalTableRequestPrivate::CreateGlobalTableRequestPrivate(
    const DynamoDBRequest::Action action, CreateGlobalTableRequest * const q)
    : CreateGlobalTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGlobalTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGlobalTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGlobalTableRequest instance.
 */
CreateGlobalTableRequestPrivate::CreateGlobalTableRequestPrivate(
    const CreateGlobalTableRequestPrivate &other, CreateGlobalTableRequest * const q)
    : CreateGlobalTablePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
