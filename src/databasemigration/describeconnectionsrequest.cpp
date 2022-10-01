// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionsrequest.h"
#include "describeconnectionsrequest_p.h"
#include "describeconnectionsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeConnectionsRequest
 * \brief The DescribeConnectionsRequest class provides an interface for DatabaseMigration DescribeConnections requests.
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
 * \sa DatabaseMigrationClient::describeConnections
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest(const DescribeConnectionsRequest &other)
    : DatabaseMigrationRequest(new DescribeConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectionsRequest object.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest()
    : DatabaseMigrationRequest(new DescribeConnectionsRequestPrivate(DatabaseMigrationRequest::DescribeConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeConnectionsRequestPrivate
 * \brief The DescribeConnectionsRequestPrivate class provides private implementation for DescribeConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeConnectionsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeConnectionsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionsRequest
 * class' copy constructor.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DescribeConnectionsRequestPrivate &other, DescribeConnectionsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
