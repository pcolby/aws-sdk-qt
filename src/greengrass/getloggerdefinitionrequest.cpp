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

#include "getloggerdefinitionrequest.h"
#include "getloggerdefinitionrequest_p.h"
#include "getloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetLoggerDefinitionRequest
 *
 * @brief  Implements Greengrass GetLoggerDefinition requests.
 *
 * @see    GreengrassClient::getLoggerDefinition
 */

/**
 * @brief  Constructs a new GetLoggerDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoggerDefinitionRequest::GetLoggerDefinitionRequest(const GetLoggerDefinitionRequest &other)
    : GreengrassRequest(new GetLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoggerDefinitionRequest object.
 */
GetLoggerDefinitionRequest::GetLoggerDefinitionRequest()
    : GreengrassRequest(new GetLoggerDefinitionRequestPrivate(GreengrassRequest::GetLoggerDefinitionAction, this))
{

}

bool GetLoggerDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoggerDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoggerDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggerDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoggerDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetLoggerDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggerDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetLoggerDefinitionRequest instance.
 */
GetLoggerDefinitionRequestPrivate::GetLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggerDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoggerDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoggerDefinitionRequest instance.
 */
GetLoggerDefinitionRequestPrivate::GetLoggerDefinitionRequestPrivate(
    const GetLoggerDefinitionRequestPrivate &other, GetLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
