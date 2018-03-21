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

#include "updateglobaltablerequest.h"
#include "updateglobaltablerequest_p.h"
#include "updateglobaltableresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  UpdateGlobalTableRequest
 *
 * @brief  Implements DynamoDB UpdateGlobalTable requests.
 *
 * @see    DynamoDBClient::updateGlobalTable
 */

/**
 * @brief  Constructs a new UpdateGlobalTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGlobalTableResponse::UpdateGlobalTableResponse(

/**
 * @brief  Constructs a new UpdateGlobalTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGlobalTableRequest::UpdateGlobalTableRequest(const UpdateGlobalTableRequest &other)
    : DynamoDBRequest(new UpdateGlobalTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGlobalTableRequest object.
 */
UpdateGlobalTableRequest::UpdateGlobalTableRequest()
    : DynamoDBRequest(new UpdateGlobalTableRequestPrivate(DynamoDBRequest::UpdateGlobalTableAction, this))
{

}

bool UpdateGlobalTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGlobalTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGlobalTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * UpdateGlobalTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGlobalTableRequestPrivate
 *
 * @brief  Private implementation for UpdateGlobalTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGlobalTableRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UpdateGlobalTableRequest instance.
 */
UpdateGlobalTableRequestPrivate::UpdateGlobalTableRequestPrivate(
    const DynamoDBRequest::Action action, UpdateGlobalTableRequest * const q)
    : UpdateGlobalTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGlobalTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGlobalTableRequest instance.
 */
UpdateGlobalTableRequestPrivate::UpdateGlobalTableRequestPrivate(
    const UpdateGlobalTableRequestPrivate &other, UpdateGlobalTableRequest * const q)
    : UpdateGlobalTablePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
