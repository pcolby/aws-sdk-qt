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

#include "createhsmconfigurationrequest.h"
#include "createhsmconfigurationrequest_p.h"
#include "createhsmconfigurationresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateHsmConfigurationRequest
 *
 * @brief  Implements Redshift CreateHsmConfiguration requests.
 *
 * @see    RedshiftClient::createHsmConfiguration
 */

/**
 * @brief  Constructs a new CreateHsmConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHsmConfigurationRequest::CreateHsmConfigurationRequest(const CreateHsmConfigurationRequest &other)
    : RedshiftRequest(new CreateHsmConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHsmConfigurationRequest object.
 */
CreateHsmConfigurationRequest::CreateHsmConfigurationRequest()
    : RedshiftRequest(new CreateHsmConfigurationRequestPrivate(RedshiftRequest::CreateHsmConfigurationAction, this))
{

}

bool CreateHsmConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHsmConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHsmConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateHsmConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateHsmConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHsmConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateHsmConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmConfigurationRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateHsmConfigurationRequest instance.
 */
CreateHsmConfigurationRequestPrivate::CreateHsmConfigurationRequestPrivate(
    const RedshiftRequest::Action action, CreateHsmConfigurationRequest * const q)
    : CreateHsmConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHsmConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHsmConfigurationRequest instance.
 */
CreateHsmConfigurationRequestPrivate::CreateHsmConfigurationRequestPrivate(
    const CreateHsmConfigurationRequestPrivate &other, CreateHsmConfigurationRequest * const q)
    : CreateHsmConfigurationPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
