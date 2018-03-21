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

#include "updateaccountsendingenabledrequest.h"
#include "updateaccountsendingenabledrequest_p.h"
#include "updateaccountsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  UpdateAccountSendingEnabledRequest
 *
 * @brief  Implements SES UpdateAccountSendingEnabled requests.
 *
 * @see    SESClient::updateAccountSendingEnabled
 */

/**
 * @brief  Constructs a new UpdateAccountSendingEnabledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAccountSendingEnabledRequest::UpdateAccountSendingEnabledRequest(const UpdateAccountSendingEnabledRequest &other)
    : SESRequest(new UpdateAccountSendingEnabledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAccountSendingEnabledRequest object.
 */
UpdateAccountSendingEnabledRequest::UpdateAccountSendingEnabledRequest()
    : SESRequest(new UpdateAccountSendingEnabledRequestPrivate(SESRequest::UpdateAccountSendingEnabledAction, this))
{

}

bool UpdateAccountSendingEnabledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAccountSendingEnabledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAccountSendingEnabledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateAccountSendingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountSendingEnabledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAccountSendingEnabledRequestPrivate
 *
 * @brief  Private implementation for UpdateAccountSendingEnabledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountSendingEnabledRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateAccountSendingEnabledRequest instance.
 */
UpdateAccountSendingEnabledRequestPrivate::UpdateAccountSendingEnabledRequestPrivate(
    const SESRequest::Action action, UpdateAccountSendingEnabledRequest * const q)
    : UpdateAccountSendingEnabledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountSendingEnabledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountSendingEnabledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAccountSendingEnabledRequest instance.
 */
UpdateAccountSendingEnabledRequestPrivate::UpdateAccountSendingEnabledRequestPrivate(
    const UpdateAccountSendingEnabledRequestPrivate &other, UpdateAccountSendingEnabledRequest * const q)
    : UpdateAccountSendingEnabledPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
