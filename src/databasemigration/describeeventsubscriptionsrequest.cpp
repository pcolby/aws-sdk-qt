// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsrequest_p.h"
#include "describeeventsubscriptionsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEventSubscriptionsRequest
 * \brief The DescribeEventSubscriptionsRequest class provides an interface for DatabaseMigration DescribeEventSubscriptions requests.
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
 * \sa DatabaseMigrationClient::describeEventSubscriptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other)
    : DatabaseMigrationRequest(new DescribeEventSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventSubscriptionsRequest object.
 */
DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest()
    : DatabaseMigrationRequest(new DescribeEventSubscriptionsRequestPrivate(DatabaseMigrationRequest::DescribeEventSubscriptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventSubscriptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventSubscriptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventSubscriptionsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEventSubscriptionsRequestPrivate
 * \brief The DescribeEventSubscriptionsRequestPrivate class provides private implementation for DescribeEventSubscriptionsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEventSubscriptionsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeEventSubscriptionsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventSubscriptionsRequest
 * class' copy constructor.
 */
DescribeEventSubscriptionsRequestPrivate::DescribeEventSubscriptionsRequestPrivate(
    const DescribeEventSubscriptionsRequestPrivate &other, DescribeEventSubscriptionsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
