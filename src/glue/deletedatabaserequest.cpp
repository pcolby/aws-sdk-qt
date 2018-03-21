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

#include "deletedatabaserequest.h"
#include "deletedatabaserequest_p.h"
#include "deletedatabaseresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteDatabaseRequest
 *
 * @brief  Implements Glue DeleteDatabase requests.
 *
 * @see    GlueClient::deleteDatabase
 */

/**
 * @brief  Constructs a new DeleteDatabaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDatabaseResponse::DeleteDatabaseResponse(

/**
 * @brief  Constructs a new DeleteDatabaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest(const DeleteDatabaseRequest &other)
    : GlueRequest(new DeleteDatabaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDatabaseRequest object.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest()
    : GlueRequest(new DeleteDatabaseRequestPrivate(GlueRequest::DeleteDatabaseAction, this))
{

}

bool DeleteDatabaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDatabaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDatabaseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatabaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDatabaseRequestPrivate
 *
 * @brief  Private implementation for DeleteDatabaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatabaseRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteDatabaseRequest instance.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const GlueRequest::Action action, DeleteDatabaseRequest * const q)
    : DeleteDatabasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatabaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatabaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDatabaseRequest instance.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const DeleteDatabaseRequestPrivate &other, DeleteDatabaseRequest * const q)
    : DeleteDatabasePrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
