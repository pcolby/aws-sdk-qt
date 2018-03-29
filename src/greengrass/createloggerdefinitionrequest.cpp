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

#include "createloggerdefinitionrequest.h"
#include "createloggerdefinitionrequest_p.h"
#include "createloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateLoggerDefinitionRequest
 *
 * @brief  Implements Greengrass CreateLoggerDefinition requests.
 *
 * @see    GreengrassClient::createLoggerDefinition
 */

/**
 * @brief  Constructs a new CreateLoggerDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest(const CreateLoggerDefinitionRequest &other)
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoggerDefinitionRequest object.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest()
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(GreengrassRequest::CreateLoggerDefinitionAction, this))
{

}

bool CreateLoggerDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoggerDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoggerDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggerDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoggerDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateLoggerDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoggerDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateLoggerDefinitionRequest instance.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateLoggerDefinitionRequest * const q)
    : CreateLoggerDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoggerDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggerDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoggerDefinitionRequest instance.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const CreateLoggerDefinitionRequestPrivate &other, CreateLoggerDefinitionRequest * const q)
    : CreateLoggerDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
