/*
    Copyright 2013-2018 Paul Colby

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

#include "startreplicationtaskrequest.h"
#include "startreplicationtaskrequest_p.h"
#include "startreplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::StartReplicationTaskRequest
 * \brief The StartReplicationTaskRequest class provides an interface for DatabaseMigrationService StartReplicationTask requests.
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
 *  For more information about AWS DMS, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::startReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
StartReplicationTaskRequest::StartReplicationTaskRequest(const StartReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new StartReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReplicationTaskRequest object.
 */
StartReplicationTaskRequest::StartReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new StartReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::StartReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool StartReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::StartReplicationTaskRequestPrivate
 * \brief The StartReplicationTaskRequestPrivate class provides private implementation for StartReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a StartReplicationTaskRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
StartReplicationTaskRequestPrivate::StartReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, StartReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationTaskRequest
 * class' copy constructor.
 */
StartReplicationTaskRequestPrivate::StartReplicationTaskRequestPrivate(
    const StartReplicationTaskRequestPrivate &other, StartReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
