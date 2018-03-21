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

#include "createconfigurationrequest.h"
#include "createconfigurationrequest_p.h"
#include "createconfigurationresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  CreateConfigurationRequest
 *
 * @brief  Implements MQ CreateConfiguration requests.
 *
 * @see    MQClient::createConfiguration
 */

/**
 * @brief  Constructs a new CreateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConfigurationRequest::CreateConfigurationRequest(const CreateConfigurationRequest &other)
    : MQRequest(new CreateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConfigurationRequest object.
 */
CreateConfigurationRequest::CreateConfigurationRequest()
    : MQRequest(new CreateConfigurationRequestPrivate(MQRequest::CreateConfigurationAction, this))
{

}

bool CreateConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * CreateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public CreateConfigurationRequest instance.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const MQRequest::Action action, CreateConfigurationRequest * const q)
    : CreateConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConfigurationRequest instance.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const CreateConfigurationRequestPrivate &other, CreateConfigurationRequest * const q)
    : CreateConfigurationPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
