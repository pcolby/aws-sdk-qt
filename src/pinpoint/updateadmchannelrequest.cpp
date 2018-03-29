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

#include "updateadmchannelrequest.h"
#include "updateadmchannelrequest_p.h"
#include "updateadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateAdmChannelRequest
 *
 * @brief  Implements Pinpoint UpdateAdmChannel requests.
 *
 * @see    PinpointClient::updateAdmChannel
 */

/**
 * @brief  Constructs a new UpdateAdmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest(const UpdateAdmChannelRequest &other)
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAdmChannelRequest object.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest()
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(PinpointRequest::UpdateAdmChannelAction, this))
{

}

bool UpdateAdmChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAdmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAdmChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAdmChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAdmChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateAdmChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAdmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateAdmChannelRequest instance.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateAdmChannelRequest * const q)
    : UpdateAdmChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAdmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAdmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAdmChannelRequest instance.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const UpdateAdmChannelRequestPrivate &other, UpdateAdmChannelRequest * const q)
    : UpdateAdmChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
