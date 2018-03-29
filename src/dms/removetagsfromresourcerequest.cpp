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

#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourcerequest_p.h"
#include "removetagsfromresourceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  RemoveTagsFromResourceRequest
 *
 * @brief  Implements DatabaseMigrationService RemoveTagsFromResource requests.
 *
 * @see    DatabaseMigrationServiceClient::removeTagsFromResource
 */

/**
 * @brief  Constructs a new RemoveTagsFromResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other)
    : DatabaseMigrationServiceRequest(new RemoveTagsFromResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromResourceRequest object.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest()
    : DatabaseMigrationServiceRequest(new RemoveTagsFromResourceRequestPrivate(DatabaseMigrationServiceRequest::RemoveTagsFromResourceAction, this))
{

}

bool RemoveTagsFromResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * RemoveTagsFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromResourceRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromResourceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromResourceRequest instance.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, RemoveTagsFromResourceRequest * const q)
    : RemoveTagsFromResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromResourceRequest instance.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const RemoveTagsFromResourceRequestPrivate &other, RemoveTagsFromResourceRequest * const q)
    : RemoveTagsFromResourcePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
