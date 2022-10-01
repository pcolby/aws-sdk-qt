// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "refreshschemasrequest.h"
#include "refreshschemasrequest_p.h"
#include "refreshschemasresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RefreshSchemasRequest
 * \brief The RefreshSchemasRequest class provides an interface for DatabaseMigration RefreshSchemas requests.
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
 * \sa DatabaseMigrationClient::refreshSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
RefreshSchemasRequest::RefreshSchemasRequest(const RefreshSchemasRequest &other)
    : DatabaseMigrationRequest(new RefreshSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RefreshSchemasRequest object.
 */
RefreshSchemasRequest::RefreshSchemasRequest()
    : DatabaseMigrationRequest(new RefreshSchemasRequestPrivate(DatabaseMigrationRequest::RefreshSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool RefreshSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RefreshSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RefreshSchemasRequest::response(QNetworkReply * const reply) const
{
    return new RefreshSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::RefreshSchemasRequestPrivate
 * \brief The RefreshSchemasRequestPrivate class provides private implementation for RefreshSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RefreshSchemasRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
RefreshSchemasRequestPrivate::RefreshSchemasRequestPrivate(
    const DatabaseMigrationRequest::Action action, RefreshSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RefreshSchemasRequest
 * class' copy constructor.
 */
RefreshSchemasRequestPrivate::RefreshSchemasRequestPrivate(
    const RefreshSchemasRequestPrivate &other, RefreshSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
