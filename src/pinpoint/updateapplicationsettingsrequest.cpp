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

#include "updateapplicationsettingsrequest.h"
#include "updateapplicationsettingsrequest_p.h"
#include "updateapplicationsettingsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateApplicationSettingsRequest
 *
 * @brief  Implements Pinpoint UpdateApplicationSettings requests.
 *
 * @see    PinpointClient::updateApplicationSettings
 */

/**
 * @brief  Constructs a new UpdateApplicationSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApplicationSettingsRequest::UpdateApplicationSettingsRequest(const UpdateApplicationSettingsRequest &other)
    : PinpointRequest(new UpdateApplicationSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApplicationSettingsRequest object.
 */
UpdateApplicationSettingsRequest::UpdateApplicationSettingsRequest()
    : PinpointRequest(new UpdateApplicationSettingsRequestPrivate(PinpointRequest::UpdateApplicationSettingsAction, this))
{

}

bool UpdateApplicationSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApplicationSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApplicationSettingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApplicationSettingsRequestPrivate
 *
 * @brief  Private implementation for UpdateApplicationSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationSettingsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateApplicationSettingsRequest instance.
 */
UpdateApplicationSettingsRequestPrivate::UpdateApplicationSettingsRequestPrivate(
    const PinpointRequest::Action action, UpdateApplicationSettingsRequest * const q)
    : UpdateApplicationSettingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApplicationSettingsRequest instance.
 */
UpdateApplicationSettingsRequestPrivate::UpdateApplicationSettingsRequestPrivate(
    const UpdateApplicationSettingsRequestPrivate &other, UpdateApplicationSettingsRequest * const q)
    : UpdateApplicationSettingsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
