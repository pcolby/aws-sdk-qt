// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisordatabasesrequest.h"
#include "describefleetadvisordatabasesrequest_p.h"
#include "describefleetadvisordatabasesresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorDatabasesRequest
 * \brief The DescribeFleetAdvisorDatabasesRequest class provides an interface for DatabaseMigration DescribeFleetAdvisorDatabases requests.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorDatabasesRequest::DescribeFleetAdvisorDatabasesRequest(const DescribeFleetAdvisorDatabasesRequest &other)
    : DatabaseMigrationRequest(new DescribeFleetAdvisorDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorDatabasesRequest object.
 */
DescribeFleetAdvisorDatabasesRequest::DescribeFleetAdvisorDatabasesRequest()
    : DatabaseMigrationRequest(new DescribeFleetAdvisorDatabasesRequestPrivate(DatabaseMigrationRequest::DescribeFleetAdvisorDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorDatabasesRequestPrivate
 * \brief The DescribeFleetAdvisorDatabasesRequestPrivate class provides private implementation for DescribeFleetAdvisorDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorDatabasesRequestPrivate::DescribeFleetAdvisorDatabasesRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorDatabasesRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorDatabasesRequestPrivate::DescribeFleetAdvisorDatabasesRequestPrivate(
    const DescribeFleetAdvisorDatabasesRequestPrivate &other, DescribeFleetAdvisorDatabasesRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
