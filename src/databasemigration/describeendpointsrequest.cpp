// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointsrequest.h"
#include "describeendpointsrequest_p.h"
#include "describeendpointsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointsRequest
 * \brief The DescribeEndpointsRequest class provides an interface for DatabaseMigration DescribeEndpoints requests.
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
 * \sa DatabaseMigrationClient::describeEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest(const DescribeEndpointsRequest &other)
    : DatabaseMigrationRequest(new DescribeEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointsRequest object.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest()
    : DatabaseMigrationRequest(new DescribeEndpointsRequestPrivate(DatabaseMigrationRequest::DescribeEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointsRequestPrivate
 * \brief The DescribeEndpointsRequestPrivate class provides private implementation for DescribeEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEndpointsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeEndpointsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointsRequest
 * class' copy constructor.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DescribeEndpointsRequestPrivate &other, DescribeEndpointsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
