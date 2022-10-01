// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationsubnetgrouprequest.h"
#include "deletereplicationsubnetgrouprequest_p.h"
#include "deletereplicationsubnetgroupresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationSubnetGroupRequest
 * \brief The DeleteReplicationSubnetGroupRequest class provides an interface for DatabaseMigration DeleteReplicationSubnetGroup requests.
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
 * \sa DatabaseMigrationClient::deleteReplicationSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationSubnetGroupRequest::DeleteReplicationSubnetGroupRequest(const DeleteReplicationSubnetGroupRequest &other)
    : DatabaseMigrationRequest(new DeleteReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationSubnetGroupRequest object.
 */
DeleteReplicationSubnetGroupRequest::DeleteReplicationSubnetGroupRequest()
    : DatabaseMigrationRequest(new DeleteReplicationSubnetGroupRequestPrivate(DatabaseMigrationRequest::DeleteReplicationSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationSubnetGroupRequestPrivate
 * \brief The DeleteReplicationSubnetGroupRequestPrivate class provides private implementation for DeleteReplicationSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationSubnetGroupRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteReplicationSubnetGroupRequestPrivate::DeleteReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationSubnetGroupRequest
 * class' copy constructor.
 */
DeleteReplicationSubnetGroupRequestPrivate::DeleteReplicationSubnetGroupRequestPrivate(
    const DeleteReplicationSubnetGroupRequestPrivate &other, DeleteReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
