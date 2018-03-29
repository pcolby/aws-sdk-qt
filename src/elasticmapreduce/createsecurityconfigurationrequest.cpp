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

#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationrequest_p.h"
#include "createsecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  CreateSecurityConfigurationRequest
 *
 * @brief  Implements EMR CreateSecurityConfiguration requests.
 *
 * @see    EMRClient::createSecurityConfiguration
 */

/**
 * @brief  Constructs a new CreateSecurityConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other)
    : EMRRequest(new CreateSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSecurityConfigurationRequest object.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest()
    : EMRRequest(new CreateSecurityConfigurationRequestPrivate(EMRRequest::CreateSecurityConfigurationAction, this))
{

}

bool CreateSecurityConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSecurityConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSecurityConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * CreateSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSecurityConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateSecurityConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecurityConfigurationRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public CreateSecurityConfigurationRequest instance.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const EMRRequest::Action action, CreateSecurityConfigurationRequest * const q)
    : CreateSecurityConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecurityConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSecurityConfigurationRequest instance.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const CreateSecurityConfigurationRequestPrivate &other, CreateSecurityConfigurationRequest * const q)
    : CreateSecurityConfigurationPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
