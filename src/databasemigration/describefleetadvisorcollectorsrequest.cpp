// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorcollectorsrequest.h"
#include "describefleetadvisorcollectorsrequest_p.h"
#include "describefleetadvisorcollectorsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorCollectorsRequest
 * \brief The DescribeFleetAdvisorCollectorsRequest class provides an interface for DatabaseMigration DescribeFleetAdvisorCollectors requests.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorCollectors
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorCollectorsRequest::DescribeFleetAdvisorCollectorsRequest(const DescribeFleetAdvisorCollectorsRequest &other)
    : DatabaseMigrationRequest(new DescribeFleetAdvisorCollectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorCollectorsRequest object.
 */
DescribeFleetAdvisorCollectorsRequest::DescribeFleetAdvisorCollectorsRequest()
    : DatabaseMigrationRequest(new DescribeFleetAdvisorCollectorsRequestPrivate(DatabaseMigrationRequest::DescribeFleetAdvisorCollectorsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorCollectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorCollectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorCollectorsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorCollectorsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorCollectorsRequestPrivate
 * \brief The DescribeFleetAdvisorCollectorsRequestPrivate class provides private implementation for DescribeFleetAdvisorCollectorsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorCollectorsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorCollectorsRequestPrivate::DescribeFleetAdvisorCollectorsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeFleetAdvisorCollectorsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorCollectorsRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorCollectorsRequestPrivate::DescribeFleetAdvisorCollectorsRequestPrivate(
    const DescribeFleetAdvisorCollectorsRequestPrivate &other, DescribeFleetAdvisorCollectorsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
