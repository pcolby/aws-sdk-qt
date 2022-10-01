// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootreplicationinstancerequest.h"
#include "rebootreplicationinstancerequest_p.h"
#include "rebootreplicationinstanceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RebootReplicationInstanceRequest
 * \brief The RebootReplicationInstanceRequest class provides an interface for DatabaseMigration RebootReplicationInstance requests.
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
 * \sa DatabaseMigrationClient::rebootReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest(const RebootReplicationInstanceRequest &other)
    : DatabaseMigrationRequest(new RebootReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootReplicationInstanceRequest object.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest()
    : DatabaseMigrationRequest(new RebootReplicationInstanceRequestPrivate(DatabaseMigrationRequest::RebootReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RebootReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::RebootReplicationInstanceRequestPrivate
 * \brief The RebootReplicationInstanceRequestPrivate class provides private implementation for RebootReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RebootReplicationInstanceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const DatabaseMigrationRequest::Action action, RebootReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootReplicationInstanceRequest
 * class' copy constructor.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const RebootReplicationInstanceRequestPrivate &other, RebootReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
