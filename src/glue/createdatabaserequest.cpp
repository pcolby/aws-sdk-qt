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

#include "createdatabaserequest.h"
#include "createdatabaserequest_p.h"
#include "createdatabaseresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  CreateDatabaseRequest
 *
 * @brief  Implements Glue CreateDatabase requests.
 *
 * @see    GlueClient::createDatabase
 */

/**
 * @brief  Constructs a new CreateDatabaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDatabaseRequest::CreateDatabaseRequest(const CreateDatabaseRequest &other)
    : GlueRequest(new CreateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDatabaseRequest object.
 */
CreateDatabaseRequest::CreateDatabaseRequest()
    : GlueRequest(new CreateDatabaseRequestPrivate(GlueRequest::CreateDatabaseAction, this))
{

}

bool CreateDatabaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDatabaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDatabaseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * CreateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatabaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDatabaseRequestPrivate
 *
 * @brief  Private implementation for CreateDatabaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDatabaseRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateDatabaseRequest instance.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const GlueRequest::Action action, CreateDatabaseRequest * const q)
    : CreateDatabasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDatabaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDatabaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDatabaseRequest instance.
 */
CreateDatabaseRequestPrivate::CreateDatabaseRequestPrivate(
    const CreateDatabaseRequestPrivate &other, CreateDatabaseRequest * const q)
    : CreateDatabasePrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
