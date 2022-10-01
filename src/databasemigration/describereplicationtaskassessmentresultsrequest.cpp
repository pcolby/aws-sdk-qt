// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationtaskassessmentresultsrequest.h"
#include "describereplicationtaskassessmentresultsrequest_p.h"
#include "describereplicationtaskassessmentresultsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentResultsRequest
 * \brief The DescribeReplicationTaskAssessmentResultsRequest class provides an interface for DatabaseMigration DescribeReplicationTaskAssessmentResults requests.
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
 * \sa DatabaseMigrationClient::describeReplicationTaskAssessmentResults
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationTaskAssessmentResultsRequest::DescribeReplicationTaskAssessmentResultsRequest(const DescribeReplicationTaskAssessmentResultsRequest &other)
    : DatabaseMigrationRequest(new DescribeReplicationTaskAssessmentResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsRequest object.
 */
DescribeReplicationTaskAssessmentResultsRequest::DescribeReplicationTaskAssessmentResultsRequest()
    : DatabaseMigrationRequest(new DescribeReplicationTaskAssessmentResultsRequestPrivate(DatabaseMigrationRequest::DescribeReplicationTaskAssessmentResultsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationTaskAssessmentResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationTaskAssessmentResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationTaskAssessmentResultsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationTaskAssessmentResultsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentResultsRequestPrivate
 * \brief The DescribeReplicationTaskAssessmentResultsRequestPrivate class provides private implementation for DescribeReplicationTaskAssessmentResultsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeReplicationTaskAssessmentResultsRequestPrivate::DescribeReplicationTaskAssessmentResultsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeReplicationTaskAssessmentResultsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationTaskAssessmentResultsRequest
 * class' copy constructor.
 */
DescribeReplicationTaskAssessmentResultsRequestPrivate::DescribeReplicationTaskAssessmentResultsRequestPrivate(
    const DescribeReplicationTaskAssessmentResultsRequestPrivate &other, DescribeReplicationTaskAssessmentResultsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
