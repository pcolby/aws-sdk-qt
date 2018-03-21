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

#include "updatenotificationsettingsrequest.h"
#include "updatenotificationsettingsrequest_p.h"
#include "updatenotificationsettingsresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateNotificationSettingsRequest
 *
 * @brief  Implements MTurk UpdateNotificationSettings requests.
 *
 * @see    MTurkClient::updateNotificationSettings
 */

/**
 * @brief  Constructs a new UpdateNotificationSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotificationSettingsResponse::UpdateNotificationSettingsResponse(

/**
 * @brief  Constructs a new UpdateNotificationSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNotificationSettingsRequest::UpdateNotificationSettingsRequest(const UpdateNotificationSettingsRequest &other)
    : MTurkRequest(new UpdateNotificationSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNotificationSettingsRequest object.
 */
UpdateNotificationSettingsRequest::UpdateNotificationSettingsRequest()
    : MTurkRequest(new UpdateNotificationSettingsRequestPrivate(MTurkRequest::UpdateNotificationSettingsAction, this))
{

}

bool UpdateNotificationSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNotificationSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNotificationSettingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * UpdateNotificationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotificationSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNotificationSettingsRequestPrivate
 *
 * @brief  Private implementation for UpdateNotificationSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationSettingsRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateNotificationSettingsRequest instance.
 */
UpdateNotificationSettingsRequestPrivate::UpdateNotificationSettingsRequestPrivate(
    const MTurkRequest::Action action, UpdateNotificationSettingsRequest * const q)
    : UpdateNotificationSettingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotificationSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNotificationSettingsRequest instance.
 */
UpdateNotificationSettingsRequestPrivate::UpdateNotificationSettingsRequestPrivate(
    const UpdateNotificationSettingsRequestPrivate &other, UpdateNotificationSettingsRequest * const q)
    : UpdateNotificationSettingsPrivate(other, q)
{

}
