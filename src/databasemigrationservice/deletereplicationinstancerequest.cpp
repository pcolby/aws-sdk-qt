/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletereplicationinstancerequest.h"
#include "deletereplicationinstancerequest_p.h"
#include "deletereplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationInstanceRequest
 * \brief The DeleteReplicationInstanceRequest class provides an interface for DatabaseMigrationService DeleteReplicationInstance requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
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
 *  For more information about AWS DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::deleteReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest(const DeleteReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationInstanceRequest object.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new DeleteReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::DeleteReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationInstanceRequestPrivate
 * \brief The DeleteReplicationInstanceRequestPrivate class provides private implementation for DeleteReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DeleteReplicationInstanceRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationInstanceRequest
 * class' copy constructor.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DeleteReplicationInstanceRequestPrivate &other, DeleteReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
