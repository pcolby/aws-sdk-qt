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

#include "putnotificationchannelrequest.h"
#include "putnotificationchannelrequest_p.h"
#include "putnotificationchannelresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/**
 * @class  PutNotificationChannelRequest
 *
 * @brief  Implements FMS PutNotificationChannel requests.
 *
 * @see    FMSClient::putNotificationChannel
 */

/**
 * @brief  Constructs a new PutNotificationChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest(const PutNotificationChannelRequest &other)
    : FMSRequest(new PutNotificationChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutNotificationChannelRequest object.
 */
PutNotificationChannelRequest::PutNotificationChannelRequest()
    : FMSRequest(new PutNotificationChannelRequestPrivate(FMSRequest::PutNotificationChannelAction, this))
{

}

bool PutNotificationChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutNotificationChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutNotificationChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * PutNotificationChannelRequest::response(QNetworkReply * const reply) const
{
    return new PutNotificationChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutNotificationChannelRequestPrivate
 *
 * @brief  Private implementation for PutNotificationChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutNotificationChannelRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public PutNotificationChannelRequest instance.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const FMSRequest::Action action, PutNotificationChannelRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutNotificationChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutNotificationChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutNotificationChannelRequest instance.
 */
PutNotificationChannelRequestPrivate::PutNotificationChannelRequestPrivate(
    const PutNotificationChannelRequestPrivate &other, PutNotificationChannelRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
