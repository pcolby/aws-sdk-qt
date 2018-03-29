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

#include "createdevicedefinitionrequest.h"
#include "createdevicedefinitionrequest_p.h"
#include "createdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateDeviceDefinitionRequest
 *
 * @brief  Implements Greengrass CreateDeviceDefinition requests.
 *
 * @see    GreengrassClient::createDeviceDefinition
 */

/**
 * @brief  Constructs a new CreateDeviceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest(const CreateDeviceDefinitionRequest &other)
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeviceDefinitionRequest object.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest()
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(GreengrassRequest::CreateDeviceDefinitionAction, this))
{

}

bool CreateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeviceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeviceDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeviceDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateDeviceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateDeviceDefinitionRequest instance.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeviceDefinitionRequest instance.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const CreateDeviceDefinitionRequestPrivate &other, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
