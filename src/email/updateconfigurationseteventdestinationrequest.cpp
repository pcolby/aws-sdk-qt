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

#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationrequest_p.h"
#include "updateconfigurationseteventdestinationresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  UpdateConfigurationSetEventDestinationRequest
 *
 * @brief  Implements SES UpdateConfigurationSetEventDestination requests.
 *
 * @see    SESClient::updateConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest(const UpdateConfigurationSetEventDestinationRequest &other)
    : SESRequest(new UpdateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationRequest object.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest()
    : SESRequest(new UpdateConfigurationSetEventDestinationRequestPrivate(SESRequest::UpdateConfigurationSetEventDestinationAction, this))
{

}

bool UpdateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationSetEventDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationSetEventDestinationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetEventDestinationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetEventDestinationRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetEventDestinationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationSetEventDestinationRequest instance.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const SESRequest::Action action, UpdateConfigurationSetEventDestinationRequest * const q)
    : UpdateConfigurationSetEventDestinationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationSetEventDestinationRequest instance.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const UpdateConfigurationSetEventDestinationRequestPrivate &other, UpdateConfigurationSetEventDestinationRequest * const q)
    : UpdateConfigurationSetEventDestinationPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
