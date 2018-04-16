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

#include "deleteapnschannelrequest.h"
#include "deleteapnschannelrequest_p.h"
#include "deleteapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelRequest
 *
 * \brief The DeleteApnsChannelRequest class provides an interface for Pinpoint DeleteApnsChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteApnsChannel
 */

/*!
 * @brief  Constructs a new DeleteApnsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest(const DeleteApnsChannelRequest &other)
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteApnsChannelRequest object.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest()
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(PinpointRequest::DeleteApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteApnsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApnsChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteApnsChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteApnsChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteApnsChannelRequest instance.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApnsChannelRequest instance.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const DeleteApnsChannelRequestPrivate &other, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
