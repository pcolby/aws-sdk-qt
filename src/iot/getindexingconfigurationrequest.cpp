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

#include "getindexingconfigurationrequest.h"
#include "getindexingconfigurationrequest_p.h"
#include "getindexingconfigurationresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetIndexingConfigurationRequest
 *
 * @brief  Implements IoT GetIndexingConfiguration requests.
 *
 * @see    IoTClient::getIndexingConfiguration
 */

/**
 * @brief  Constructs a new GetIndexingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIndexingConfigurationRequest::GetIndexingConfigurationRequest(const GetIndexingConfigurationRequest &other)
    : IoTRequest(new GetIndexingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIndexingConfigurationRequest object.
 */
GetIndexingConfigurationRequest::GetIndexingConfigurationRequest()
    : IoTRequest(new GetIndexingConfigurationRequestPrivate(IoTRequest::GetIndexingConfigurationAction, this))
{

}

bool GetIndexingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIndexingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIndexingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetIndexingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetIndexingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIndexingConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetIndexingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIndexingConfigurationRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetIndexingConfigurationRequest instance.
 */
GetIndexingConfigurationRequestPrivate::GetIndexingConfigurationRequestPrivate(
    const IoTRequest::Action action, GetIndexingConfigurationRequest * const q)
    : GetIndexingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIndexingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIndexingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIndexingConfigurationRequest instance.
 */
GetIndexingConfigurationRequestPrivate::GetIndexingConfigurationRequestPrivate(
    const GetIndexingConfigurationRequestPrivate &other, GetIndexingConfigurationRequest * const q)
    : GetIndexingConfigurationPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
