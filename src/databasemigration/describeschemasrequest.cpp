// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschemasrequest.h"
#include "describeschemasrequest_p.h"
#include "describeschemasresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasRequest
 * \brief The DescribeSchemasRequest class provides an interface for DatabaseMigration DescribeSchemas requests.
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
 * \sa DatabaseMigrationClient::describeSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSchemasRequest::DescribeSchemasRequest(const DescribeSchemasRequest &other)
    : DatabaseMigrationRequest(new DescribeSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSchemasRequest object.
 */
DescribeSchemasRequest::DescribeSchemasRequest()
    : DatabaseMigrationRequest(new DescribeSchemasRequestPrivate(DatabaseMigrationRequest::DescribeSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSchemasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasRequestPrivate
 * \brief The DescribeSchemasRequestPrivate class provides private implementation for DescribeSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeSchemasRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeSchemasRequestPrivate::DescribeSchemasRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSchemasRequest
 * class' copy constructor.
 */
DescribeSchemasRequestPrivate::DescribeSchemasRequestPrivate(
    const DescribeSchemasRequestPrivate &other, DescribeSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
