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

#include "reloadtablesrequest.h"
#include "reloadtablesrequest_p.h"
#include "reloadtablesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ReloadTablesRequest
 *
 * @brief  Implements DatabaseMigrationService ReloadTables requests.
 *
 * @see    DatabaseMigrationServiceClient::reloadTables
 */

/**
 * @brief  Constructs a new ReloadTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReloadTablesResponse::ReloadTablesResponse(

/**
 * @brief  Constructs a new ReloadTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReloadTablesRequest::ReloadTablesRequest(const ReloadTablesRequest &other)
    : DatabaseMigrationServiceRequest(new ReloadTablesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReloadTablesRequest object.
 */
ReloadTablesRequest::ReloadTablesRequest()
    : DatabaseMigrationServiceRequest(new ReloadTablesRequestPrivate(DatabaseMigrationServiceRequest::ReloadTablesAction, this))
{

}

bool ReloadTablesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReloadTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReloadTablesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ReloadTablesRequest::response(QNetworkReply * const reply) const
{
    return new ReloadTablesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReloadTablesRequestPrivate
 *
 * @brief  Private implementation for ReloadTablesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReloadTablesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ReloadTablesRequest instance.
 */
ReloadTablesRequestPrivate::ReloadTablesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ReloadTablesRequest * const q)
    : ReloadTablesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReloadTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReloadTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReloadTablesRequest instance.
 */
ReloadTablesRequestPrivate::ReloadTablesRequestPrivate(
    const ReloadTablesRequestPrivate &other, ReloadTablesRequest * const q)
    : ReloadTablesPrivate(other, q)
{

}
