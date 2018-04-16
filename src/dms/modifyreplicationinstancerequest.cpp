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

#include "modifyreplicationinstancerequest.h"
#include "modifyreplicationinstancerequest_p.h"
#include "modifyreplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::ModifyReplicationInstanceRequest
 *
 * \brief The ModifyReplicationInstanceRequest class provides an interface for DatabaseMigrationService ModifyReplicationInstance requests.
 *
 * \ingroup DatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::modifyReplicationInstance
 */

/*!
 * @brief  Constructs a new ModifyReplicationInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest(const ModifyReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new ModifyReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyReplicationInstanceRequest object.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new ModifyReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::ModifyReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyReplicationInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyReplicationInstanceRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationInstanceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationInstanceRequest instance.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ModifyReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationInstanceRequest instance.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const ModifyReplicationInstanceRequestPrivate &other, ModifyReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
