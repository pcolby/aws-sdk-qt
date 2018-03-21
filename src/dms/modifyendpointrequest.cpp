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

#include "modifyendpointrequest.h"
#include "modifyendpointrequest_p.h"
#include "modifyendpointresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyEndpointRequest
 *
 * @brief  Implements DatabaseMigrationService ModifyEndpoint requests.
 *
 * @see    DatabaseMigrationServiceClient::modifyEndpoint
 */

/**
 * @brief  Constructs a new ModifyEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyEndpointResponse::ModifyEndpointResponse(

/**
 * @brief  Constructs a new ModifyEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyEndpointRequest::ModifyEndpointRequest(const ModifyEndpointRequest &other)
    : DatabaseMigrationServiceRequest(new ModifyEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyEndpointRequest object.
 */
ModifyEndpointRequest::ModifyEndpointRequest()
    : DatabaseMigrationServiceRequest(new ModifyEndpointRequestPrivate(DatabaseMigrationServiceRequest::ModifyEndpointAction, this))
{

}

bool ModifyEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ModifyEndpointRequest::response(QNetworkReply * const reply) const
{
    return new ModifyEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyEndpointRequestPrivate
 *
 * @brief  Private implementation for ModifyEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEndpointRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ModifyEndpointRequest instance.
 */
ModifyEndpointRequestPrivate::ModifyEndpointRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ModifyEndpointRequest * const q)
    : ModifyEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyEndpointRequest instance.
 */
ModifyEndpointRequestPrivate::ModifyEndpointRequestPrivate(
    const ModifyEndpointRequestPrivate &other, ModifyEndpointRequest * const q)
    : ModifyEndpointPrivate(other, q)
{

}
