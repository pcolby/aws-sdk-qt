/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describefleetadvisorschemaobjectsummaryrequest.h"
#include "describefleetadvisorschemaobjectsummaryrequest_p.h"
#include "describefleetadvisorschemaobjectsummaryresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorSchemaObjectSummaryRequest
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryRequest class provides an interface for DatabaseMigrationService DescribeFleetAdvisorSchemaObjectSummary requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
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
 * \sa DatabaseMigrationServiceClient::describeFleetAdvisorSchemaObjectSummary
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequest::DescribeFleetAdvisorSchemaObjectSummaryRequest(const DescribeFleetAdvisorSchemaObjectSummaryRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryRequest object.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequest::DescribeFleetAdvisorSchemaObjectSummaryRequest()
    : DatabaseMigrationServiceRequest(new DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(DatabaseMigrationServiceRequest::DescribeFleetAdvisorSchemaObjectSummaryAction, this))
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
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate class provides private implementation for DescribeFleetAdvisorSchemaObjectSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate::DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeFleetAdvisorSchemaObjectSummaryRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
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
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
