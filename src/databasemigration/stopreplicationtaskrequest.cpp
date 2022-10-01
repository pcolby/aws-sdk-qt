// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopreplicationtaskrequest.h"
#include "stopreplicationtaskrequest_p.h"
#include "stopreplicationtaskresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StopReplicationTaskRequest
 * \brief The StopReplicationTaskRequest class provides an interface for DatabaseMigration StopReplicationTask requests.
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
 * \sa DatabaseMigrationClient::stopReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
StopReplicationTaskRequest::StopReplicationTaskRequest(const StopReplicationTaskRequest &other)
    : DatabaseMigrationRequest(new StopReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopReplicationTaskRequest object.
 */
StopReplicationTaskRequest::StopReplicationTaskRequest()
    : DatabaseMigrationRequest(new StopReplicationTaskRequestPrivate(DatabaseMigrationRequest::StopReplicationTaskAction, this))
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
 * \class QtAws::DatabaseMigration::StopReplicationTaskRequestPrivate
 * \brief The StopReplicationTaskRequestPrivate class provides private implementation for StopReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StopReplicationTaskRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
StopReplicationTaskRequestPrivate::StopReplicationTaskRequestPrivate(
    const DatabaseMigrationRequest::Action action, StopReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
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
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
