// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationinstancesrequest.h"
#include "describereplicationinstancesrequest_p.h"
#include "describereplicationinstancesresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstancesRequest
 * \brief The DescribeReplicationInstancesRequest class provides an interface for DatabaseMigration DescribeReplicationInstances requests.
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
 * \sa DatabaseMigrationClient::describeReplicationInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationInstancesRequest::DescribeReplicationInstancesRequest(const DescribeReplicationInstancesRequest &other)
    : DatabaseMigrationRequest(new DescribeReplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationInstancesRequest object.
 */
DescribeReplicationInstancesRequest::DescribeReplicationInstancesRequest()
    : DatabaseMigrationRequest(new DescribeReplicationInstancesRequestPrivate(DatabaseMigrationRequest::DescribeReplicationInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstancesRequestPrivate
 * \brief The DescribeReplicationInstancesRequestPrivate class provides private implementation for DescribeReplicationInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationInstancesRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeReplicationInstancesRequestPrivate::DescribeReplicationInstancesRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeReplicationInstancesRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationInstancesRequest
 * class' copy constructor.
 */
DescribeReplicationInstancesRequestPrivate::DescribeReplicationInstancesRequestPrivate(
    const DescribeReplicationInstancesRequestPrivate &other, DescribeReplicationInstancesRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
