// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorschemaobjectsummaryrequest.h"
#include "describefleetadvisorschemaobjectsummaryrequest_p.h"
#include "describefleetadvisorschemaobjectsummaryresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemaObjectSummaryRequest
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryRequest class provides an interface for DatabaseMigration DescribeFleetAdvisorSchemaObjectSummary requests.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorSchemaObjectSummary
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequest::DescribeFleetAdvisorSchemaObjectSummaryRequest(const DescribeFleetAdvisorSchemaObjectSummaryRequest &other)
    : DatabaseMigrationRequest(new DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryRequest object.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequest::DescribeFleetAdvisorSchemaObjectSummaryRequest()
    : DatabaseMigrationRequest(new DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(DatabaseMigrationRequest::DescribeFleetAdvisorSchemaObjectSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorSchemaObjectSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorSchemaObjectSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorSchemaObjectSummaryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorSchemaObjectSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate class provides private implementation for DescribeFleetAdvisorSchemaObjectSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate::DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeFleetAdvisorSchemaObjectSummaryRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorSchemaObjectSummaryRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate::DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(
    const DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate &other, DescribeFleetAdvisorSchemaObjectSummaryRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
