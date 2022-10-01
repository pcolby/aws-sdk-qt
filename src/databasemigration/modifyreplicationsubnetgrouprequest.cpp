// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationsubnetgrouprequest.h"
#include "modifyreplicationsubnetgrouprequest_p.h"
#include "modifyreplicationsubnetgroupresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationSubnetGroupRequest
 * \brief The ModifyReplicationSubnetGroupRequest class provides an interface for DatabaseMigration ModifyReplicationSubnetGroup requests.
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
 * \sa DatabaseMigrationClient::modifyReplicationSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReplicationSubnetGroupRequest::ModifyReplicationSubnetGroupRequest(const ModifyReplicationSubnetGroupRequest &other)
    : DatabaseMigrationRequest(new ModifyReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReplicationSubnetGroupRequest object.
 */
ModifyReplicationSubnetGroupRequest::ModifyReplicationSubnetGroupRequest()
    : DatabaseMigrationRequest(new ModifyReplicationSubnetGroupRequestPrivate(DatabaseMigrationRequest::ModifyReplicationSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReplicationSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationSubnetGroupRequestPrivate
 * \brief The ModifyReplicationSubnetGroupRequestPrivate class provides private implementation for ModifyReplicationSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyReplicationSubnetGroupRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ModifyReplicationSubnetGroupRequestPrivate::ModifyReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationRequest::Action action, ModifyReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationSubnetGroupRequest
 * class' copy constructor.
 */
ModifyReplicationSubnetGroupRequestPrivate::ModifyReplicationSubnetGroupRequestPrivate(
    const ModifyReplicationSubnetGroupRequestPrivate &other, ModifyReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
