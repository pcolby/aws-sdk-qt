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

#include "deleteapnsvoipchannelrequest.h"
#include "deleteapnsvoipchannelrequest_p.h"
#include "deleteapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelRequest
 *
 * \brief The DeleteApnsVoipChannelRequest class provides an interface for Pinpoint DeleteApnsVoipChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * @brief  Constructs a new DeleteApnsVoipChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest(const DeleteApnsVoipChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteApnsVoipChannelRequest object.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest()
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(PinpointRequest::DeleteApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteApnsVoipChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApnsVoipChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteApnsVoipChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteApnsVoipChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteApnsVoipChannelRequest instance.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApnsVoipChannelRequest instance.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const DeleteApnsVoipChannelRequestPrivate &other, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
