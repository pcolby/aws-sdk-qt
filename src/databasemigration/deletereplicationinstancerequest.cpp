// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationinstancerequest.h"
#include "deletereplicationinstancerequest_p.h"
#include "deletereplicationinstanceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationInstanceRequest
 * \brief The DeleteReplicationInstanceRequest class provides an interface for DatabaseMigration DeleteReplicationInstance requests.
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
 * \sa DatabaseMigrationClient::deleteReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest(const DeleteReplicationInstanceRequest &other)
    : DatabaseMigrationRequest(new DeleteReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationInstanceRequest object.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest()
    : DatabaseMigrationRequest(new DeleteReplicationInstanceRequestPrivate(DatabaseMigrationRequest::DeleteReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationInstanceRequestPrivate
 * \brief The DeleteReplicationInstanceRequestPrivate class provides private implementation for DeleteReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationInstanceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationInstanceRequest
 * class' copy constructor.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DeleteReplicationInstanceRequestPrivate &other, DeleteReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
