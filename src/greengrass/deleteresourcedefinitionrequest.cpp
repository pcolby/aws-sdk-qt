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

#include "deleteresourcedefinitionrequest.h"
#include "deleteresourcedefinitionrequest_p.h"
#include "deleteresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteResourceDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteResourceDefinition requests.
 *
 * @see    GreengrassClient::deleteResourceDefinition
 */

/**
 * @brief  Constructs a new DeleteResourceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResourceDefinitionRequest::DeleteResourceDefinitionRequest(const DeleteResourceDefinitionRequest &other)
    : GreengrassRequest(new DeleteResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResourceDefinitionRequest object.
 */
DeleteResourceDefinitionRequest::DeleteResourceDefinitionRequest()
    : GreengrassRequest(new DeleteResourceDefinitionRequestPrivate(GreengrassRequest::DeleteResourceDefinitionAction, this))
{

}

bool DeleteResourceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResourceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResourceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResourceDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteResourceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteResourceDefinitionRequest instance.
 */
DeleteResourceDefinitionRequestPrivate::DeleteResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteResourceDefinitionRequest * const q)
    : DeleteResourceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResourceDefinitionRequest instance.
 */
DeleteResourceDefinitionRequestPrivate::DeleteResourceDefinitionRequestPrivate(
    const DeleteResourceDefinitionRequestPrivate &other, DeleteResourceDefinitionRequest * const q)
    : DeleteResourceDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
