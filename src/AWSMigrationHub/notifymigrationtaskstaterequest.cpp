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

#include "notifymigrationtaskstaterequest.h"
#include "notifymigrationtaskstaterequest_p.h"
#include "notifymigrationtaskstateresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  NotifyMigrationTaskStateRequest
 *
 * @brief  Implements MigrationHub NotifyMigrationTaskState requests.
 *
 * @see    MigrationHubClient::notifyMigrationTaskState
 */

/**
 * @brief  Constructs a new NotifyMigrationTaskStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
NotifyMigrationTaskStateResponse::NotifyMigrationTaskStateResponse(

/**
 * @brief  Constructs a new NotifyMigrationTaskStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest(const NotifyMigrationTaskStateRequest &other)
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new NotifyMigrationTaskStateRequest object.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest()
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(MigrationHubRequest::NotifyMigrationTaskStateAction, this))
{

}

bool NotifyMigrationTaskStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an NotifyMigrationTaskStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An NotifyMigrationTaskStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * NotifyMigrationTaskStateRequest::response(QNetworkReply * const reply) const
{
    return new NotifyMigrationTaskStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  NotifyMigrationTaskStateRequestPrivate
 *
 * @brief  Private implementation for NotifyMigrationTaskStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyMigrationTaskStateRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public NotifyMigrationTaskStateRequest instance.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const MigrationHubRequest::Action action, NotifyMigrationTaskStateRequest * const q)
    : NotifyMigrationTaskStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new NotifyMigrationTaskStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the NotifyMigrationTaskStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public NotifyMigrationTaskStateRequest instance.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const NotifyMigrationTaskStateRequestPrivate &other, NotifyMigrationTaskStateRequest * const q)
    : NotifyMigrationTaskStatePrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace AWS
