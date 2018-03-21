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

#include "notifyapplicationstaterequest.h"
#include "notifyapplicationstaterequest_p.h"
#include "notifyapplicationstateresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  NotifyApplicationStateRequest
 *
 * @brief  Implements MigrationHub NotifyApplicationState requests.
 *
 * @see    MigrationHubClient::notifyApplicationState
 */

/**
 * @brief  Constructs a new NotifyApplicationStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
NotifyApplicationStateResponse::NotifyApplicationStateResponse(

/**
 * @brief  Constructs a new NotifyApplicationStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
NotifyApplicationStateRequest::NotifyApplicationStateRequest(const NotifyApplicationStateRequest &other)
    : MigrationHubRequest(new NotifyApplicationStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new NotifyApplicationStateRequest object.
 */
NotifyApplicationStateRequest::NotifyApplicationStateRequest()
    : MigrationHubRequest(new NotifyApplicationStateRequestPrivate(MigrationHubRequest::NotifyApplicationStateAction, this))
{

}

bool NotifyApplicationStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an NotifyApplicationStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An NotifyApplicationStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * NotifyApplicationStateRequest::response(QNetworkReply * const reply) const
{
    return new NotifyApplicationStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  NotifyApplicationStateRequestPrivate
 *
 * @brief  Private implementation for NotifyApplicationStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyApplicationStateRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public NotifyApplicationStateRequest instance.
 */
NotifyApplicationStateRequestPrivate::NotifyApplicationStateRequestPrivate(
    const MigrationHubRequest::Action action, NotifyApplicationStateRequest * const q)
    : NotifyApplicationStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new NotifyApplicationStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the NotifyApplicationStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public NotifyApplicationStateRequest instance.
 */
NotifyApplicationStateRequestPrivate::NotifyApplicationStateRequestPrivate(
    const NotifyApplicationStateRequestPrivate &other, NotifyApplicationStateRequest * const q)
    : NotifyApplicationStatePrivate(other, q)
{

}
