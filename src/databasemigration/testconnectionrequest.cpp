// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testconnectionrequest.h"
#include "testconnectionrequest_p.h"
#include "testconnectionresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::TestConnectionRequest
 * \brief The TestConnectionRequest class provides an interface for DatabaseMigration TestConnection requests.
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
 * \sa DatabaseMigrationClient::testConnection
 */

/*!
 * Constructs a copy of \a other.
 */
TestConnectionRequest::TestConnectionRequest(const TestConnectionRequest &other)
    : DatabaseMigrationRequest(new TestConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestConnectionRequest object.
 */
TestConnectionRequest::TestConnectionRequest()
    : DatabaseMigrationRequest(new TestConnectionRequestPrivate(DatabaseMigrationRequest::TestConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool TestConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestConnectionRequest::response(QNetworkReply * const reply) const
{
    return new TestConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::TestConnectionRequestPrivate
 * \brief The TestConnectionRequestPrivate class provides private implementation for TestConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a TestConnectionRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
TestConnectionRequestPrivate::TestConnectionRequestPrivate(
    const DatabaseMigrationRequest::Action action, TestConnectionRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestConnectionRequest
 * class' copy constructor.
 */
TestConnectionRequestPrivate::TestConnectionRequestPrivate(
    const TestConnectionRequestPrivate &other, TestConnectionRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
