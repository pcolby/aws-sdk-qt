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

#include "refreshschemasrequest.h"
#include "refreshschemasrequest_p.h"
#include "refreshschemasresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  RefreshSchemasRequest
 *
 * @brief  Implements DatabaseMigrationService RefreshSchemas requests.
 *
 * @see    DatabaseMigrationServiceClient::refreshSchemas
 */

/**
 * @brief  Constructs a new RefreshSchemasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RefreshSchemasRequest::RefreshSchemasRequest(const RefreshSchemasRequest &other)
    : DatabaseMigrationServiceRequest(new RefreshSchemasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RefreshSchemasRequest object.
 */
RefreshSchemasRequest::RefreshSchemasRequest()
    : DatabaseMigrationServiceRequest(new RefreshSchemasRequestPrivate(DatabaseMigrationServiceRequest::RefreshSchemasAction, this))
{

}

bool RefreshSchemasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RefreshSchemasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RefreshSchemasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * RefreshSchemasRequest::response(QNetworkReply * const reply) const
{
    return new RefreshSchemasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RefreshSchemasRequestPrivate
 *
 * @brief  Private implementation for RefreshSchemasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshSchemasRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public RefreshSchemasRequest instance.
 */
RefreshSchemasRequestPrivate::RefreshSchemasRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, RefreshSchemasRequest * const q)
    : RefreshSchemasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RefreshSchemasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RefreshSchemasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RefreshSchemasRequest instance.
 */
RefreshSchemasRequestPrivate::RefreshSchemasRequestPrivate(
    const RefreshSchemasRequestPrivate &other, RefreshSchemasRequest * const q)
    : RefreshSchemasPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
