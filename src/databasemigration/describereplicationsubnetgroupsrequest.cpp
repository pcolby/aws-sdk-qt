// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationsubnetgroupsrequest.h"
#include "describereplicationsubnetgroupsrequest_p.h"
#include "describereplicationsubnetgroupsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationSubnetGroupsRequest
 * \brief The DescribeReplicationSubnetGroupsRequest class provides an interface for DatabaseMigration DescribeReplicationSubnetGroups requests.
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
 * \sa DatabaseMigrationClient::describeReplicationSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest(const DescribeReplicationSubnetGroupsRequest &other)
    : DatabaseMigrationRequest(new DescribeReplicationSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationSubnetGroupsRequest object.
 */
DescribeReplicationSubnetGroupsRequest::DescribeReplicationSubnetGroupsRequest()
    : DatabaseMigrationRequest(new DescribeReplicationSubnetGroupsRequestPrivate(DatabaseMigrationRequest::DescribeReplicationSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationSubnetGroupsRequestPrivate
 * \brief The DescribeReplicationSubnetGroupsRequestPrivate class provides private implementation for DescribeReplicationSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationSubnetGroupsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeReplicationSubnetGroupsRequestPrivate::DescribeReplicationSubnetGroupsRequestPrivate(
    const DescribeReplicationSubnetGroupsRequestPrivate &other, DescribeReplicationSubnetGroupsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
