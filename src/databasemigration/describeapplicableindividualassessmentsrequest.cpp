// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicableindividualassessmentsrequest.h"
#include "describeapplicableindividualassessmentsrequest_p.h"
#include "describeapplicableindividualassessmentsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeApplicableIndividualAssessmentsRequest
 * \brief The DescribeApplicableIndividualAssessmentsRequest class provides an interface for DatabaseMigration DescribeApplicableIndividualAssessments requests.
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
 * \sa DatabaseMigrationClient::describeApplicableIndividualAssessments
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicableIndividualAssessmentsRequest::DescribeApplicableIndividualAssessmentsRequest(const DescribeApplicableIndividualAssessmentsRequest &other)
    : DatabaseMigrationRequest(new DescribeApplicableIndividualAssessmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicableIndividualAssessmentsRequest object.
 */
DescribeApplicableIndividualAssessmentsRequest::DescribeApplicableIndividualAssessmentsRequest()
    : DatabaseMigrationRequest(new DescribeApplicableIndividualAssessmentsRequestPrivate(DatabaseMigrationRequest::DescribeApplicableIndividualAssessmentsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicableIndividualAssessmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicableIndividualAssessmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicableIndividualAssessmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicableIndividualAssessmentsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeApplicableIndividualAssessmentsRequestPrivate
 * \brief The DescribeApplicableIndividualAssessmentsRequestPrivate class provides private implementation for DescribeApplicableIndividualAssessmentsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeApplicableIndividualAssessmentsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeApplicableIndividualAssessmentsRequestPrivate::DescribeApplicableIndividualAssessmentsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeApplicableIndividualAssessmentsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicableIndividualAssessmentsRequest
 * class' copy constructor.
 */
DescribeApplicableIndividualAssessmentsRequestPrivate::DescribeApplicableIndividualAssessmentsRequestPrivate(
    const DescribeApplicableIndividualAssessmentsRequestPrivate &other, DescribeApplicableIndividualAssessmentsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
