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

#include "updateapnsvoipsandboxchannelrequest.h"
#include "updateapnsvoipsandboxchannelrequest_p.h"
#include "updateapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelRequest
 *
 * \brief The UpdateApnsVoipSandboxChannelRequest class provides an interface for Pinpoint UpdateApnsVoipSandboxChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::updateApnsVoipSandboxChannel
 */

/*!
 * @brief  Constructs a new UpdateApnsVoipSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest(const UpdateApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateApnsVoipSandboxChannelRequest object.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateApnsVoipSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApnsVoipSandboxChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateApnsVoipSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateApnsVoipSandboxChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateApnsVoipSandboxChannelRequest instance.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApnsVoipSandboxChannelRequest instance.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const UpdateApnsVoipSandboxChannelRequestPrivate &other, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
