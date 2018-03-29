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

#include "updatecontinuousbackupsrequest.h"
#include "updatecontinuousbackupsrequest_p.h"
#include "updatecontinuousbackupsresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  UpdateContinuousBackupsRequest
 *
 * @brief  Implements DynamoDB UpdateContinuousBackups requests.
 *
 * @see    DynamoDBClient::updateContinuousBackups
 */

/**
 * @brief  Constructs a new UpdateContinuousBackupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateContinuousBackupsRequest::UpdateContinuousBackupsRequest(const UpdateContinuousBackupsRequest &other)
    : DynamoDBRequest(new UpdateContinuousBackupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateContinuousBackupsRequest object.
 */
UpdateContinuousBackupsRequest::UpdateContinuousBackupsRequest()
    : DynamoDBRequest(new UpdateContinuousBackupsRequestPrivate(DynamoDBRequest::UpdateContinuousBackupsAction, this))
{

}

bool UpdateContinuousBackupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateContinuousBackupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateContinuousBackupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * UpdateContinuousBackupsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContinuousBackupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateContinuousBackupsRequestPrivate
 *
 * @brief  Private implementation for UpdateContinuousBackupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContinuousBackupsRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UpdateContinuousBackupsRequest instance.
 */
UpdateContinuousBackupsRequestPrivate::UpdateContinuousBackupsRequestPrivate(
    const DynamoDBRequest::Action action, UpdateContinuousBackupsRequest * const q)
    : UpdateContinuousBackupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContinuousBackupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateContinuousBackupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateContinuousBackupsRequest instance.
 */
UpdateContinuousBackupsRequestPrivate::UpdateContinuousBackupsRequestPrivate(
    const UpdateContinuousBackupsRequestPrivate &other, UpdateContinuousBackupsRequest * const q)
    : UpdateContinuousBackupsPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
