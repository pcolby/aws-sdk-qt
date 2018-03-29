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

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateSchemaRequest
 *
 * @brief  Implements CloudDirectory CreateSchema requests.
 *
 * @see    CloudDirectoryClient::createSchema
 */

/**
 * @brief  Constructs a new CreateSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : CloudDirectoryRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : CloudDirectoryRequest(new CreateSchemaRequestPrivate(CloudDirectoryRequest::CreateSchemaAction, this))
{

}

bool CreateSchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSchemaRequestPrivate
 *
 * @brief  Private implementation for CreateSchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSchemaRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateSchemaRequest instance.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateSchemaRequest * const q)
    : CreateSchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSchemaRequest instance.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : CreateSchemaPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
