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

#include "updatedatabaserequest.h"
#include "updatedatabaserequest_p.h"
#include "updatedatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateDatabaseRequest
 *
 * @brief  Implements Glue UpdateDatabase requests.
 *
 * @see    GlueClient::updateDatabase
 */

/**
 * @brief  Constructs a new UpdateDatabaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest(const UpdateDatabaseRequest &other)
    : GlueRequest(new UpdateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDatabaseRequest object.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest()
    : GlueRequest(new UpdateDatabaseRequestPrivate(GlueRequest::UpdateDatabaseAction, this))
{

}

bool UpdateDatabaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDatabaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDatabaseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatabaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDatabaseRequestPrivate
 *
 * @brief  Private implementation for UpdateDatabaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDatabaseRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateDatabaseRequest instance.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const GlueRequest::Action action, UpdateDatabaseRequest * const q)
    : UpdateDatabasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDatabaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatabaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDatabaseRequest instance.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const UpdateDatabaseRequestPrivate &other, UpdateDatabaseRequest * const q)
    : UpdateDatabasePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
