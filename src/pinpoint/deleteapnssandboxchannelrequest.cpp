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

#include "deleteapnssandboxchannelrequest.h"
#include "deleteapnssandboxchannelrequest_p.h"
#include "deleteapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelRequest
 *
 * \brief The DeleteApnsSandboxChannelRequest class provides an interface for Pinpoint DeleteApnsSandboxChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * @brief  Constructs a new DeleteApnsSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest(const DeleteApnsSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteApnsSandboxChannelRequest object.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteApnsSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApnsSandboxChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsSandboxChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteApnsSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteApnsSandboxChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteApnsSandboxChannelRequest instance.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApnsSandboxChannelRequest instance.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const DeleteApnsSandboxChannelRequestPrivate &other, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
