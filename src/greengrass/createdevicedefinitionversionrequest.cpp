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

#include "createdevicedefinitionversionrequest.h"
#include "createdevicedefinitionversionrequest_p.h"
#include "createdevicedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateDeviceDefinitionVersionRequest
 *
 * @brief  Implements Greengrass CreateDeviceDefinitionVersion requests.
 *
 * @see    GreengrassClient::createDeviceDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateDeviceDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeviceDefinitionVersionRequest::CreateDeviceDefinitionVersionRequest(const CreateDeviceDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateDeviceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeviceDefinitionVersionRequest object.
 */
CreateDeviceDefinitionVersionRequest::CreateDeviceDefinitionVersionRequest()
    : GreengrassRequest(new CreateDeviceDefinitionVersionRequestPrivate(GreengrassRequest::CreateDeviceDefinitionVersionAction, this))
{

}

bool CreateDeviceDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeviceDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeviceDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateDeviceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeviceDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for CreateDeviceDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateDeviceDefinitionVersionRequest instance.
 */
CreateDeviceDefinitionVersionRequestPrivate::CreateDeviceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateDeviceDefinitionVersionRequest * const q)
    : CreateDeviceDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeviceDefinitionVersionRequest instance.
 */
CreateDeviceDefinitionVersionRequestPrivate::CreateDeviceDefinitionVersionRequestPrivate(
    const CreateDeviceDefinitionVersionRequestPrivate &other, CreateDeviceDefinitionVersionRequest * const q)
    : CreateDeviceDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
