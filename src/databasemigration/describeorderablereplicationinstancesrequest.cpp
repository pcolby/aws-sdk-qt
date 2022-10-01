// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeorderablereplicationinstancesrequest.h"
#include "describeorderablereplicationinstancesrequest_p.h"
#include "describeorderablereplicationinstancesresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeOrderableReplicationInstancesRequest
 * \brief The DescribeOrderableReplicationInstancesRequest class provides an interface for DatabaseMigration DescribeOrderableReplicationInstances requests.
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
 * \sa DatabaseMigrationClient::describeOrderableReplicationInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest(const DescribeOrderableReplicationInstancesRequest &other)
    : DatabaseMigrationRequest(new DescribeOrderableReplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrderableReplicationInstancesRequest object.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest()
    : DatabaseMigrationRequest(new DescribeOrderableReplicationInstancesRequestPrivate(DatabaseMigrationRequest::DescribeOrderableReplicationInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOrderableReplicationInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOrderableReplicationInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrderableReplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableReplicationInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeOrderableReplicationInstancesRequestPrivate
 * \brief The DescribeOrderableReplicationInstancesRequestPrivate class provides private implementation for DescribeOrderableReplicationInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableReplicationInstancesRequest
 * class' copy constructor.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DescribeOrderableReplicationInstancesRequestPrivate &other, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
