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

#include "createreplicationinstancerequest.h"
#include "createreplicationinstancerequest_p.h"
#include "createreplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationInstanceRequest
 *
 * @brief  Implements DatabaseMigrationService CreateReplicationInstance requests.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationInstance
 */

/**
 * @brief  Constructs a new CreateReplicationInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationInstanceResponse::CreateReplicationInstanceResponse(

/**
 * @brief  Constructs a new CreateReplicationInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReplicationInstanceRequest::CreateReplicationInstanceRequest(const CreateReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new CreateReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReplicationInstanceRequest object.
 */
CreateReplicationInstanceRequest::CreateReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new CreateReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::CreateReplicationInstanceAction, this))
{

}

bool CreateReplicationInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReplicationInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReplicationInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * CreateReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReplicationInstanceRequestPrivate
 *
 * @brief  Private implementation for CreateReplicationInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationInstanceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public CreateReplicationInstanceRequest instance.
 */
CreateReplicationInstanceRequestPrivate::CreateReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, CreateReplicationInstanceRequest * const q)
    : CreateReplicationInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReplicationInstanceRequest instance.
 */
CreateReplicationInstanceRequestPrivate::CreateReplicationInstanceRequestPrivate(
    const CreateReplicationInstanceRequestPrivate &other, CreateReplicationInstanceRequest * const q)
    : CreateReplicationInstancePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
