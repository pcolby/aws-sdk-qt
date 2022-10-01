/*
    Copyright 2013-2021 Paul Colby

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

#include "movereplicationtaskrequest.h"
#include "movereplicationtaskrequest_p.h"
#include "movereplicationtaskresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::MoveReplicationTaskRequest
 * \brief The MoveReplicationTaskRequest class provides an interface for DatabaseMigration MoveReplicationTask requests.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::moveReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
MoveReplicationTaskRequest::MoveReplicationTaskRequest(const MoveReplicationTaskRequest &other)
    : DatabaseMigrationRequest(new MoveReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MoveReplicationTaskRequest object.
 */
MoveReplicationTaskRequest::MoveReplicationTaskRequest()
    : DatabaseMigrationRequest(new MoveReplicationTaskRequestPrivate(DatabaseMigrationRequest::MoveReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool MoveReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MoveReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MoveReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new MoveReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::MoveReplicationTaskRequestPrivate
 * \brief The MoveReplicationTaskRequestPrivate class provides private implementation for MoveReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a MoveReplicationTaskRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
MoveReplicationTaskRequestPrivate::MoveReplicationTaskRequestPrivate(
    const DatabaseMigrationRequest::Action action, MoveReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MoveReplicationTaskRequest
 * class' copy constructor.
 */
MoveReplicationTaskRequestPrivate::MoveReplicationTaskRequestPrivate(
    const MoveReplicationTaskRequestPrivate &other, MoveReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
