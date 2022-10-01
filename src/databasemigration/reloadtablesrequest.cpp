// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reloadtablesrequest.h"
#include "reloadtablesrequest_p.h"
#include "reloadtablesresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ReloadTablesRequest
 * \brief The ReloadTablesRequest class provides an interface for DatabaseMigration ReloadTables requests.
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
 * \sa DatabaseMigrationClient::reloadTables
 */

/*!
 * Constructs a copy of \a other.
 */
ReloadTablesRequest::ReloadTablesRequest(const ReloadTablesRequest &other)
    : DatabaseMigrationRequest(new ReloadTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReloadTablesRequest object.
 */
ReloadTablesRequest::ReloadTablesRequest()
    : DatabaseMigrationRequest(new ReloadTablesRequestPrivate(DatabaseMigrationRequest::ReloadTablesAction, this))
{

}

/*!
 * \reimp
 */
bool ReloadTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReloadTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReloadTablesRequest::response(QNetworkReply * const reply) const
{
    return new ReloadTablesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ReloadTablesRequestPrivate
 * \brief The ReloadTablesRequestPrivate class provides private implementation for ReloadTablesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ReloadTablesRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ReloadTablesRequestPrivate::ReloadTablesRequestPrivate(
    const DatabaseMigrationRequest::Action action, ReloadTablesRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReloadTablesRequest
 * class' copy constructor.
 */
ReloadTablesRequestPrivate::ReloadTablesRequestPrivate(
    const ReloadTablesRequestPrivate &other, ReloadTablesRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
