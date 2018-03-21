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

#include "deleteloggerdefinitionrequest.h"
#include "deleteloggerdefinitionrequest_p.h"
#include "deleteloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteLoggerDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteLoggerDefinition requests.
 *
 * @see    GreengrassClient::deleteLoggerDefinition
 */

/**
 * @brief  Constructs a new DeleteLoggerDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoggerDefinitionResponse::DeleteLoggerDefinitionResponse(

/**
 * @brief  Constructs a new DeleteLoggerDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest(const DeleteLoggerDefinitionRequest &other)
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoggerDefinitionRequest object.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest()
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(GreengrassRequest::DeleteLoggerDefinitionAction, this))
{

}

bool DeleteLoggerDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoggerDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoggerDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoggerDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoggerDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteLoggerDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoggerDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteLoggerDefinitionRequest instance.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteLoggerDefinitionRequest * const q)
    : DeleteLoggerDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoggerDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoggerDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoggerDefinitionRequest instance.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const DeleteLoggerDefinitionRequestPrivate &other, DeleteLoggerDefinitionRequest * const q)
    : DeleteLoggerDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
