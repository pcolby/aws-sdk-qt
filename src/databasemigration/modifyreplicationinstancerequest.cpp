// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationinstancerequest.h"
#include "modifyreplicationinstancerequest_p.h"
#include "modifyreplicationinstanceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationInstanceRequest
 * \brief The ModifyReplicationInstanceRequest class provides an interface for DatabaseMigration ModifyReplicationInstance requests.
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
 * \sa DatabaseMigrationClient::modifyReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest(const ModifyReplicationInstanceRequest &other)
    : DatabaseMigrationRequest(new ModifyReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReplicationInstanceRequest object.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest()
    : DatabaseMigrationRequest(new ModifyReplicationInstanceRequestPrivate(DatabaseMigrationRequest::ModifyReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationInstanceRequestPrivate
 * \brief The ModifyReplicationInstanceRequestPrivate class provides private implementation for ModifyReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyReplicationInstanceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const DatabaseMigrationRequest::Action action, ModifyReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationInstanceRequest
 * class' copy constructor.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const ModifyReplicationInstanceRequestPrivate &other, ModifyReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
