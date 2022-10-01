// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorlsaanalysisrequest.h"
#include "describefleetadvisorlsaanalysisrequest_p.h"
#include "describefleetadvisorlsaanalysisresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorLsaAnalysisRequest
 * \brief The DescribeFleetAdvisorLsaAnalysisRequest class provides an interface for DatabaseMigration DescribeFleetAdvisorLsaAnalysis requests.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorLsaAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorLsaAnalysisRequest::DescribeFleetAdvisorLsaAnalysisRequest(const DescribeFleetAdvisorLsaAnalysisRequest &other)
    : DatabaseMigrationRequest(new DescribeFleetAdvisorLsaAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorLsaAnalysisRequest object.
 */
DescribeFleetAdvisorLsaAnalysisRequest::DescribeFleetAdvisorLsaAnalysisRequest()
    : DatabaseMigrationRequest(new DescribeFleetAdvisorLsaAnalysisRequestPrivate(DatabaseMigrationRequest::DescribeFleetAdvisorLsaAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorLsaAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorLsaAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorLsaAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorLsaAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorLsaAnalysisRequestPrivate
 * \brief The DescribeFleetAdvisorLsaAnalysisRequestPrivate class provides private implementation for DescribeFleetAdvisorLsaAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorLsaAnalysisRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorLsaAnalysisRequestPrivate::DescribeFleetAdvisorLsaAnalysisRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeFleetAdvisorLsaAnalysisRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorLsaAnalysisRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorLsaAnalysisRequestPrivate::DescribeFleetAdvisorLsaAnalysisRequestPrivate(
    const DescribeFleetAdvisorLsaAnalysisRequestPrivate &other, DescribeFleetAdvisorLsaAnalysisRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
