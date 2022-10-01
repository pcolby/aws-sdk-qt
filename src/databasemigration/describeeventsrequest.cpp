// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsrequest.h"
#include "describeeventsrequest_p.h"
#include "describeeventsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEventsRequest
 * \brief The DescribeEventsRequest class provides an interface for DatabaseMigration DescribeEvents requests.
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
 * \sa DatabaseMigrationClient::describeEvents
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventsRequest::DescribeEventsRequest(const DescribeEventsRequest &other)
    : DatabaseMigrationRequest(new DescribeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventsRequest object.
 */
DescribeEventsRequest::DescribeEventsRequest()
    : DatabaseMigrationRequest(new DescribeEventsRequestPrivate(DatabaseMigrationRequest::DescribeEventsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEventsRequestPrivate
 * \brief The DescribeEventsRequestPrivate class provides private implementation for DescribeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEventsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeEventsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsRequest
 * class' copy constructor.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DescribeEventsRequestPrivate &other, DescribeEventsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
