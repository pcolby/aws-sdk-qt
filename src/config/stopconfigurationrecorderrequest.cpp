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

#include "stopconfigurationrecorderrequest.h"
#include "stopconfigurationrecorderrequest_p.h"
#include "stopconfigurationrecorderresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  StopConfigurationRecorderRequest
 *
 * @brief  Implements ConfigService StopConfigurationRecorder requests.
 *
 * @see    ConfigServiceClient::stopConfigurationRecorder
 */

/**
 * @brief  Constructs a new StopConfigurationRecorderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopConfigurationRecorderRequest::StopConfigurationRecorderRequest(const StopConfigurationRecorderRequest &other)
    : ConfigServiceRequest(new StopConfigurationRecorderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopConfigurationRecorderRequest object.
 */
StopConfigurationRecorderRequest::StopConfigurationRecorderRequest()
    : ConfigServiceRequest(new StopConfigurationRecorderRequestPrivate(ConfigServiceRequest::StopConfigurationRecorderAction, this))
{

}

bool StopConfigurationRecorderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopConfigurationRecorderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopConfigurationRecorderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * StopConfigurationRecorderRequest::response(QNetworkReply * const reply) const
{
    return new StopConfigurationRecorderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopConfigurationRecorderRequestPrivate
 *
 * @brief  Private implementation for StopConfigurationRecorderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopConfigurationRecorderRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public StopConfigurationRecorderRequest instance.
 */
StopConfigurationRecorderRequestPrivate::StopConfigurationRecorderRequestPrivate(
    const ConfigServiceRequest::Action action, StopConfigurationRecorderRequest * const q)
    : StopConfigurationRecorderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopConfigurationRecorderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopConfigurationRecorderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopConfigurationRecorderRequest instance.
 */
StopConfigurationRecorderRequestPrivate::StopConfigurationRecorderRequestPrivate(
    const StopConfigurationRecorderRequestPrivate &other, StopConfigurationRecorderRequest * const q)
    : StopConfigurationRecorderPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
