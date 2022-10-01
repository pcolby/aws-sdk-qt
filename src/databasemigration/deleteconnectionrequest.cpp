// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectionrequest.h"
#include "deleteconnectionrequest_p.h"
#include "deleteconnectionresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteConnectionRequest
 * \brief The DeleteConnectionRequest class provides an interface for DatabaseMigration DeleteConnection requests.
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
 * \sa DatabaseMigrationClient::deleteConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectionRequest::DeleteConnectionRequest(const DeleteConnectionRequest &other)
    : DatabaseMigrationRequest(new DeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectionRequest object.
 */
DeleteConnectionRequest::DeleteConnectionRequest()
    : DatabaseMigrationRequest(new DeleteConnectionRequestPrivate(DatabaseMigrationRequest::DeleteConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteConnectionRequestPrivate
 * \brief The DeleteConnectionRequestPrivate class provides private implementation for DeleteConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteConnectionRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteConnectionRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionRequest
 * class' copy constructor.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DeleteConnectionRequestPrivate &other, DeleteConnectionRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
