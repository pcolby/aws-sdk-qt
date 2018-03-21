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

#include "deleteschemarequest.h"
#include "deleteschemarequest_p.h"
#include "deleteschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DeleteSchemaRequest
 *
 * @brief  Implements CloudDirectory DeleteSchema requests.
 *
 * @see    CloudDirectoryClient::deleteSchema
 */

/**
 * @brief  Constructs a new DeleteSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSchemaRequest::DeleteSchemaRequest(const DeleteSchemaRequest &other)
    : CloudDirectoryRequest(new DeleteSchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSchemaRequest object.
 */
DeleteSchemaRequest::DeleteSchemaRequest()
    : CloudDirectoryRequest(new DeleteSchemaRequestPrivate(CloudDirectoryRequest::DeleteSchemaAction, this))
{

}

bool DeleteSchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * DeleteSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSchemaRequestPrivate
 *
 * @brief  Private implementation for DeleteSchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSchemaRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DeleteSchemaRequest instance.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteSchemaRequest * const q)
    : DeleteSchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSchemaRequest instance.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const DeleteSchemaRequestPrivate &other, DeleteSchemaRequest * const q)
    : DeleteSchemaPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
