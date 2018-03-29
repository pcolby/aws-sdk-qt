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

#include "updateindexingconfigurationrequest.h"
#include "updateindexingconfigurationrequest_p.h"
#include "updateindexingconfigurationresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  UpdateIndexingConfigurationRequest
 *
 * @brief  Implements IoT UpdateIndexingConfiguration requests.
 *
 * @see    IoTClient::updateIndexingConfiguration
 */

/**
 * @brief  Constructs a new UpdateIndexingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIndexingConfigurationRequest::UpdateIndexingConfigurationRequest(const UpdateIndexingConfigurationRequest &other)
    : IoTRequest(new UpdateIndexingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIndexingConfigurationRequest object.
 */
UpdateIndexingConfigurationRequest::UpdateIndexingConfigurationRequest()
    : IoTRequest(new UpdateIndexingConfigurationRequestPrivate(IoTRequest::UpdateIndexingConfigurationAction, this))
{

}

bool UpdateIndexingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIndexingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIndexingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateIndexingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIndexingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIndexingConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateIndexingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIndexingConfigurationRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateIndexingConfigurationRequest instance.
 */
UpdateIndexingConfigurationRequestPrivate::UpdateIndexingConfigurationRequestPrivate(
    const IoTRequest::Action action, UpdateIndexingConfigurationRequest * const q)
    : UpdateIndexingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIndexingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIndexingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIndexingConfigurationRequest instance.
 */
UpdateIndexingConfigurationRequestPrivate::UpdateIndexingConfigurationRequestPrivate(
    const UpdateIndexingConfigurationRequestPrivate &other, UpdateIndexingConfigurationRequest * const q)
    : UpdateIndexingConfigurationPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
