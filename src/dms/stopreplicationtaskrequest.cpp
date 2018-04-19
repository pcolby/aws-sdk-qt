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

#include "stopreplicationtaskrequest.h"
#include "stopreplicationtaskrequest_p.h"
#include "stopreplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::StopReplicationTaskRequest
 * \brief The StopReplicationTaskRequest class provides an interface for DatabaseMigrationService StopReplicationTask requests.
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
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::stopReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
StopReplicationTaskRequest::StopReplicationTaskRequest(const StopReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new StopReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopReplicationTaskRequest object.
 */
StopReplicationTaskRequest::StopReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new StopReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::StopReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool StopReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new StopReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::StopReplicationTaskRequestPrivate
 * \brief The StopReplicationTaskRequestPrivate class provides private implementation for StopReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 *
 * Constructs a StopReplicationTaskRequestPrivate object for DatabaseMigrationService \a action with,
 * public implementation \a q.
 */
StopReplicationTaskRequestPrivate::StopReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, StopReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopReplicationTaskRequest
 * class' copy constructor.
 */
StopReplicationTaskRequestPrivate::StopReplicationTaskRequestPrivate(
    const StopReplicationTaskRequestPrivate &other, StopReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
