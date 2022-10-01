// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationinstancetasklogsrequest.h"
#include "describereplicationinstancetasklogsrequest_p.h"
#include "describereplicationinstancetasklogsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstanceTaskLogsRequest
 * \brief The DescribeReplicationInstanceTaskLogsRequest class provides an interface for DatabaseMigration DescribeReplicationInstanceTaskLogs requests.
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
 * \sa DatabaseMigrationClient::describeReplicationInstanceTaskLogs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationInstanceTaskLogsRequest::DescribeReplicationInstanceTaskLogsRequest(const DescribeReplicationInstanceTaskLogsRequest &other)
    : DatabaseMigrationRequest(new DescribeReplicationInstanceTaskLogsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsRequest object.
 */
DescribeReplicationInstanceTaskLogsRequest::DescribeReplicationInstanceTaskLogsRequest()
    : DatabaseMigrationRequest(new DescribeReplicationInstanceTaskLogsRequestPrivate(DatabaseMigrationRequest::DescribeReplicationInstanceTaskLogsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationInstanceTaskLogsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationInstanceTaskLogsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationInstanceTaskLogsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationInstanceTaskLogsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstanceTaskLogsRequestPrivate
 * \brief The DescribeReplicationInstanceTaskLogsRequestPrivate class provides private implementation for DescribeReplicationInstanceTaskLogsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeReplicationInstanceTaskLogsRequestPrivate::DescribeReplicationInstanceTaskLogsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeReplicationInstanceTaskLogsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationInstanceTaskLogsRequest
 * class' copy constructor.
 */
DescribeReplicationInstanceTaskLogsRequestPrivate::DescribeReplicationInstanceTaskLogsRequestPrivate(
    const DescribeReplicationInstanceTaskLogsRequestPrivate &other, DescribeReplicationInstanceTaskLogsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
