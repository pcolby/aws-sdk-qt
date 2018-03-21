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

#include "sendtesteventnotificationrequest.h"
#include "sendtesteventnotificationrequest_p.h"
#include "sendtesteventnotificationresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  SendTestEventNotificationRequest
 *
 * @brief  Implements MTurk SendTestEventNotification requests.
 *
 * @see    MTurkClient::sendTestEventNotification
 */

/**
 * @brief  Constructs a new SendTestEventNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTestEventNotificationResponse::SendTestEventNotificationResponse(

/**
 * @brief  Constructs a new SendTestEventNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendTestEventNotificationRequest::SendTestEventNotificationRequest(const SendTestEventNotificationRequest &other)
    : MTurkRequest(new SendTestEventNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendTestEventNotificationRequest object.
 */
SendTestEventNotificationRequest::SendTestEventNotificationRequest()
    : MTurkRequest(new SendTestEventNotificationRequestPrivate(MTurkRequest::SendTestEventNotificationAction, this))
{

}

bool SendTestEventNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendTestEventNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendTestEventNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * SendTestEventNotificationRequest::response(QNetworkReply * const reply) const
{
    return new SendTestEventNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendTestEventNotificationRequestPrivate
 *
 * @brief  Private implementation for SendTestEventNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTestEventNotificationRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public SendTestEventNotificationRequest instance.
 */
SendTestEventNotificationRequestPrivate::SendTestEventNotificationRequestPrivate(
    const MTurkRequest::Action action, SendTestEventNotificationRequest * const q)
    : SendTestEventNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendTestEventNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendTestEventNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendTestEventNotificationRequest instance.
 */
SendTestEventNotificationRequestPrivate::SendTestEventNotificationRequestPrivate(
    const SendTestEventNotificationRequestPrivate &other, SendTestEventNotificationRequest * const q)
    : SendTestEventNotificationPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
