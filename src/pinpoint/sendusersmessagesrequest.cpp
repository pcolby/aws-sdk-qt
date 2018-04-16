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

#include "sendusersmessagesrequest.h"
#include "sendusersmessagesrequest_p.h"
#include "sendusersmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesRequest
 *
 * \brief The SendUsersMessagesRequest class provides an interface for Pinpoint SendUsersMessages requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::sendUsersMessages
 */

/*!
 * @brief  Constructs a new SendUsersMessagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest(const SendUsersMessagesRequest &other)
    : PinpointRequest(new SendUsersMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SendUsersMessagesRequest object.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest()
    : PinpointRequest(new SendUsersMessagesRequestPrivate(PinpointRequest::SendUsersMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool SendUsersMessagesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SendUsersMessagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendUsersMessagesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * SendUsersMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendUsersMessagesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SendUsersMessagesRequestPrivate
 *
 * @brief  Private implementation for SendUsersMessagesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SendUsersMessagesRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public SendUsersMessagesRequest instance.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const PinpointRequest::Action action, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SendUsersMessagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendUsersMessagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendUsersMessagesRequest instance.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const SendUsersMessagesRequestPrivate &other, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
