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

#include "enableenhancedmonitoringrequest.h"
#include "enableenhancedmonitoringrequest_p.h"
#include "enableenhancedmonitoringresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  EnableEnhancedMonitoringRequest
 *
 * @brief  Implements Kinesis EnableEnhancedMonitoring requests.
 *
 * @see    KinesisClient::enableEnhancedMonitoring
 */

/**
 * @brief  Constructs a new EnableEnhancedMonitoringRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableEnhancedMonitoringRequest::EnableEnhancedMonitoringRequest(const EnableEnhancedMonitoringRequest &other)
    : KinesisRequest(new EnableEnhancedMonitoringRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableEnhancedMonitoringRequest object.
 */
EnableEnhancedMonitoringRequest::EnableEnhancedMonitoringRequest()
    : KinesisRequest(new EnableEnhancedMonitoringRequestPrivate(KinesisRequest::EnableEnhancedMonitoringAction, this))
{

}

bool EnableEnhancedMonitoringRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableEnhancedMonitoringResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableEnhancedMonitoringResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableEnhancedMonitoringRequest::response(QNetworkReply * const reply) const
{
    return new EnableEnhancedMonitoringResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableEnhancedMonitoringRequestPrivate
 *
 * @brief  Private implementation for EnableEnhancedMonitoringRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableEnhancedMonitoringRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public EnableEnhancedMonitoringRequest instance.
 */
EnableEnhancedMonitoringRequestPrivate::EnableEnhancedMonitoringRequestPrivate(
    const KinesisRequest::Action action, EnableEnhancedMonitoringRequest * const q)
    : EnableEnhancedMonitoringPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableEnhancedMonitoringRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableEnhancedMonitoringRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableEnhancedMonitoringRequest instance.
 */
EnableEnhancedMonitoringRequestPrivate::EnableEnhancedMonitoringRequestPrivate(
    const EnableEnhancedMonitoringRequestPrivate &other, EnableEnhancedMonitoringRequest * const q)
    : EnableEnhancedMonitoringPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
