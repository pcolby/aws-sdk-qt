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

#include "updateconfigurationsettrackingoptionsrequest.h"
#include "updateconfigurationsettrackingoptionsrequest_p.h"
#include "updateconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  UpdateConfigurationSetTrackingOptionsRequest
 *
 * @brief  Implements SES UpdateConfigurationSetTrackingOptions requests.
 *
 * @see    SESClient::updateConfigurationSetTrackingOptions
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetTrackingOptionsResponse::UpdateConfigurationSetTrackingOptionsResponse(

/**
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationSetTrackingOptionsRequest::UpdateConfigurationSetTrackingOptionsRequest(const UpdateConfigurationSetTrackingOptionsRequest &other)
    : SESRequest(new UpdateConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsRequest object.
 */
UpdateConfigurationSetTrackingOptionsRequest::UpdateConfigurationSetTrackingOptionsRequest()
    : SESRequest(new UpdateConfigurationSetTrackingOptionsRequestPrivate(SESRequest::UpdateConfigurationSetTrackingOptionsAction, this))
{

}

bool UpdateConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationSetTrackingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationSetTrackingOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetTrackingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetTrackingOptionsRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetTrackingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationSetTrackingOptionsRequest instance.
 */
UpdateConfigurationSetTrackingOptionsRequestPrivate::UpdateConfigurationSetTrackingOptionsRequestPrivate(
    const SESRequest::Action action, UpdateConfigurationSetTrackingOptionsRequest * const q)
    : UpdateConfigurationSetTrackingOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationSetTrackingOptionsRequest instance.
 */
UpdateConfigurationSetTrackingOptionsRequestPrivate::UpdateConfigurationSetTrackingOptionsRequestPrivate(
    const UpdateConfigurationSetTrackingOptionsRequestPrivate &other, UpdateConfigurationSetTrackingOptionsRequest * const q)
    : UpdateConfigurationSetTrackingOptionsPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
