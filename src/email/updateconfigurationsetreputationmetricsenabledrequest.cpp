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

#include "updateconfigurationsetreputationmetricsenabledrequest.h"
#include "updateconfigurationsetreputationmetricsenabledrequest_p.h"
#include "updateconfigurationsetreputationmetricsenabledresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  UpdateConfigurationSetReputationMetricsEnabledRequest
 *
 * @brief  Implements SES UpdateConfigurationSetReputationMetricsEnabled requests.
 *
 * @see    SESClient::updateConfigurationSetReputationMetricsEnabled
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationSetReputationMetricsEnabledRequest::UpdateConfigurationSetReputationMetricsEnabledRequest(const UpdateConfigurationSetReputationMetricsEnabledRequest &other)
    : SESRequest(new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledRequest object.
 */
UpdateConfigurationSetReputationMetricsEnabledRequest::UpdateConfigurationSetReputationMetricsEnabledRequest()
    : SESRequest(new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(SESRequest::UpdateConfigurationSetReputationMetricsEnabledAction, this))
{

}

bool UpdateConfigurationSetReputationMetricsEnabledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationSetReputationMetricsEnabledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationSetReputationMetricsEnabledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * UpdateConfigurationSetReputationMetricsEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetReputationMetricsEnabledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetReputationMetricsEnabledRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetReputationMetricsEnabledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationSetReputationMetricsEnabledRequest instance.
 */
UpdateConfigurationSetReputationMetricsEnabledRequestPrivate::UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(
    const SESRequest::Action action, UpdateConfigurationSetReputationMetricsEnabledRequest * const q)
    : UpdateConfigurationSetReputationMetricsEnabledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetReputationMetricsEnabledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationSetReputationMetricsEnabledRequest instance.
 */
UpdateConfigurationSetReputationMetricsEnabledRequestPrivate::UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(
    const UpdateConfigurationSetReputationMetricsEnabledRequestPrivate &other, UpdateConfigurationSetReputationMetricsEnabledRequest * const q)
    : UpdateConfigurationSetReputationMetricsEnabledPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
