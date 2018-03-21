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

#include "setidentityheadersinnotificationsenabledrequest.h"
#include "setidentityheadersinnotificationsenabledrequest_p.h"
#include "setidentityheadersinnotificationsenabledresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityHeadersInNotificationsEnabledRequest
 *
 * @brief  Implements SES SetIdentityHeadersInNotificationsEnabled requests.
 *
 * @see    SESClient::setIdentityHeadersInNotificationsEnabled
 */

/**
 * @brief  Constructs a new SetIdentityHeadersInNotificationsEnabledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIdentityHeadersInNotificationsEnabledRequest::SetIdentityHeadersInNotificationsEnabledRequest(const SetIdentityHeadersInNotificationsEnabledRequest &other)
    : SESRequest(new SetIdentityHeadersInNotificationsEnabledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIdentityHeadersInNotificationsEnabledRequest object.
 */
SetIdentityHeadersInNotificationsEnabledRequest::SetIdentityHeadersInNotificationsEnabledRequest()
    : SESRequest(new SetIdentityHeadersInNotificationsEnabledRequestPrivate(SESRequest::SetIdentityHeadersInNotificationsEnabledAction, this))
{

}

bool SetIdentityHeadersInNotificationsEnabledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIdentityHeadersInNotificationsEnabledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIdentityHeadersInNotificationsEnabledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * SetIdentityHeadersInNotificationsEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityHeadersInNotificationsEnabledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIdentityHeadersInNotificationsEnabledRequestPrivate
 *
 * @brief  Private implementation for SetIdentityHeadersInNotificationsEnabledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityHeadersInNotificationsEnabledRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SetIdentityHeadersInNotificationsEnabledRequest instance.
 */
SetIdentityHeadersInNotificationsEnabledRequestPrivate::SetIdentityHeadersInNotificationsEnabledRequestPrivate(
    const SESRequest::Action action, SetIdentityHeadersInNotificationsEnabledRequest * const q)
    : SetIdentityHeadersInNotificationsEnabledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityHeadersInNotificationsEnabledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityHeadersInNotificationsEnabledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIdentityHeadersInNotificationsEnabledRequest instance.
 */
SetIdentityHeadersInNotificationsEnabledRequestPrivate::SetIdentityHeadersInNotificationsEnabledRequestPrivate(
    const SetIdentityHeadersInNotificationsEnabledRequestPrivate &other, SetIdentityHeadersInNotificationsEnabledRequest * const q)
    : SetIdentityHeadersInNotificationsEnabledPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
