/*
    Copyright 2013-2019 Paul Colby

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

#include "describetablestatisticsrequest.h"
#include "describetablestatisticsrequest_p.h"
#include "describetablestatisticsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeTableStatisticsRequest
 * \brief The DescribeTableStatisticsRequest class provides an interface for DatabaseMigrationService DescribeTableStatistics requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::describeTableStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest(const DescribeTableStatisticsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeTableStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTableStatisticsRequest object.
 */
DescribeTableStatisticsRequest::DescribeTableStatisticsRequest()
    : DatabaseMigrationServiceRequest(new DescribeTableStatisticsRequestPrivate(DatabaseMigrationServiceRequest::DescribeTableStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTableStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTableStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTableStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeTableStatisticsRequestPrivate
 * \brief The DescribeTableStatisticsRequestPrivate class provides private implementation for DescribeTableStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeTableStatisticsRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeTableStatisticsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableStatisticsRequest
 * class' copy constructor.
 */
DescribeTableStatisticsRequestPrivate::DescribeTableStatisticsRequestPrivate(
    const DescribeTableStatisticsRequestPrivate &other, DescribeTableStatisticsRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
