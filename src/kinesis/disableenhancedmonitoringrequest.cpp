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

#include "disableenhancedmonitoringrequest.h"
#include "disableenhancedmonitoringrequest_p.h"
#include "disableenhancedmonitoringresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  DisableEnhancedMonitoringRequest
 *
 * @brief  Implements Kinesis DisableEnhancedMonitoring requests.
 *
 * @see    KinesisClient::disableEnhancedMonitoring
 */

/**
 * @brief  Constructs a new DisableEnhancedMonitoringRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableEnhancedMonitoringRequest::DisableEnhancedMonitoringRequest(const DisableEnhancedMonitoringRequest &other)
    : KinesisRequest(new DisableEnhancedMonitoringRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableEnhancedMonitoringRequest object.
 */
DisableEnhancedMonitoringRequest::DisableEnhancedMonitoringRequest()
    : KinesisRequest(new DisableEnhancedMonitoringRequestPrivate(KinesisRequest::DisableEnhancedMonitoringAction, this))
{

}

bool DisableEnhancedMonitoringRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableEnhancedMonitoringResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableEnhancedMonitoringResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * DisableEnhancedMonitoringRequest::response(QNetworkReply * const reply) const
{
    return new DisableEnhancedMonitoringResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableEnhancedMonitoringRequestPrivate
 *
 * @brief  Private implementation for DisableEnhancedMonitoringRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableEnhancedMonitoringRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DisableEnhancedMonitoringRequest instance.
 */
DisableEnhancedMonitoringRequestPrivate::DisableEnhancedMonitoringRequestPrivate(
    const KinesisRequest::Action action, DisableEnhancedMonitoringRequest * const q)
    : DisableEnhancedMonitoringPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableEnhancedMonitoringRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableEnhancedMonitoringRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableEnhancedMonitoringRequest instance.
 */
DisableEnhancedMonitoringRequestPrivate::DisableEnhancedMonitoringRequestPrivate(
    const DisableEnhancedMonitoringRequestPrivate &other, DisableEnhancedMonitoringRequest * const q)
    : DisableEnhancedMonitoringPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace AWS
