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

#include "startconfigurationrecorderrequest.h"
#include "startconfigurationrecorderrequest_p.h"
#include "startconfigurationrecorderresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  StartConfigurationRecorderRequest
 *
 * @brief  Implements ConfigService StartConfigurationRecorder requests.
 *
 * @see    ConfigServiceClient::startConfigurationRecorder
 */

/**
 * @brief  Constructs a new StartConfigurationRecorderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartConfigurationRecorderRequest::StartConfigurationRecorderRequest(const StartConfigurationRecorderRequest &other)
    : ConfigServiceRequest(new StartConfigurationRecorderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartConfigurationRecorderRequest object.
 */
StartConfigurationRecorderRequest::StartConfigurationRecorderRequest()
    : ConfigServiceRequest(new StartConfigurationRecorderRequestPrivate(ConfigServiceRequest::StartConfigurationRecorderAction, this))
{

}

bool StartConfigurationRecorderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartConfigurationRecorderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartConfigurationRecorderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * StartConfigurationRecorderRequest::response(QNetworkReply * const reply) const
{
    return new StartConfigurationRecorderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartConfigurationRecorderRequestPrivate
 *
 * @brief  Private implementation for StartConfigurationRecorderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigurationRecorderRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public StartConfigurationRecorderRequest instance.
 */
StartConfigurationRecorderRequestPrivate::StartConfigurationRecorderRequestPrivate(
    const ConfigServiceRequest::Action action, StartConfigurationRecorderRequest * const q)
    : StartConfigurationRecorderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigurationRecorderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartConfigurationRecorderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartConfigurationRecorderRequest instance.
 */
StartConfigurationRecorderRequestPrivate::StartConfigurationRecorderRequestPrivate(
    const StartConfigurationRecorderRequestPrivate &other, StartConfigurationRecorderRequest * const q)
    : StartConfigurationRecorderPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
