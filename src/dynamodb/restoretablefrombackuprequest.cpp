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

#include "restoretablefrombackuprequest.h"
#include "restoretablefrombackuprequest_p.h"
#include "restoretablefrombackupresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  RestoreTableFromBackupRequest
 *
 * @brief  Implements DynamoDB RestoreTableFromBackup requests.
 *
 * @see    DynamoDBClient::restoreTableFromBackup
 */

/**
 * @brief  Constructs a new RestoreTableFromBackupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreTableFromBackupRequest::RestoreTableFromBackupRequest(const RestoreTableFromBackupRequest &other)
    : DynamoDBRequest(new RestoreTableFromBackupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreTableFromBackupRequest object.
 */
RestoreTableFromBackupRequest::RestoreTableFromBackupRequest()
    : DynamoDBRequest(new RestoreTableFromBackupRequestPrivate(DynamoDBRequest::RestoreTableFromBackupAction, this))
{

}

bool RestoreTableFromBackupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreTableFromBackupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreTableFromBackupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreTableFromBackupRequest::response(QNetworkReply * const reply) const
{
    return new RestoreTableFromBackupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreTableFromBackupRequestPrivate
 *
 * @brief  Private implementation for RestoreTableFromBackupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromBackupRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public RestoreTableFromBackupRequest instance.
 */
RestoreTableFromBackupRequestPrivate::RestoreTableFromBackupRequestPrivate(
    const DynamoDBRequest::Action action, RestoreTableFromBackupRequest * const q)
    : RestoreTableFromBackupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromBackupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreTableFromBackupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreTableFromBackupRequest instance.
 */
RestoreTableFromBackupRequestPrivate::RestoreTableFromBackupRequestPrivate(
    const RestoreTableFromBackupRequestPrivate &other, RestoreTableFromBackupRequest * const q)
    : RestoreTableFromBackupPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
