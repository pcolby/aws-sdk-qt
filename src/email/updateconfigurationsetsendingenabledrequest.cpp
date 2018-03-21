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

#include "updateconfigurationsetsendingenabledrequest.h"
#include "updateconfigurationsetsendingenabledrequest_p.h"
#include "updateconfigurationsetsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  UpdateConfigurationSetSendingEnabledRequest
 *
 * @brief  Implements SES UpdateConfigurationSetSendingEnabled requests.
 *
 * @see    SESClient::updateConfigurationSetSendingEnabled
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetSendingEnabledResponse::UpdateConfigurationSetSendingEnabledResponse(

/**
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationSetSendingEnabledRequest::UpdateConfigurationSetSendingEnabledRequest(const UpdateConfigurationSetSendingEnabledRequest &other)
    : SESRequest(new UpdateConfigurationSetSendingEnabledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledRequest object.
 */
UpdateConfigurationSetSendingEnabledRequest::UpdateConfigurationSetSendingEnabledRequest()
    : SESRequest(new UpdateConfigurationSetSendingEnabledRequestPrivate(SESRequest::UpdateConfigurationSetSendingEnabledAction, this))
{

}

bool UpdateConfigurationSetSendingEnabledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationSetSendingEnabledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationSetSendingEnabledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateConfigurationSetSendingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetSendingEnabledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetSendingEnabledRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetSendingEnabledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationSetSendingEnabledRequest instance.
 */
UpdateConfigurationSetSendingEnabledRequestPrivate::UpdateConfigurationSetSendingEnabledRequestPrivate(
    const SESRequest::Action action, UpdateConfigurationSetSendingEnabledRequest * const q)
    : UpdateConfigurationSetSendingEnabledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetSendingEnabledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationSetSendingEnabledRequest instance.
 */
UpdateConfigurationSetSendingEnabledRequestPrivate::UpdateConfigurationSetSendingEnabledRequestPrivate(
    const UpdateConfigurationSetSendingEnabledRequestPrivate &other, UpdateConfigurationSetSendingEnabledRequest * const q)
    : UpdateConfigurationSetSendingEnabledPrivate(other, q)
{

}
