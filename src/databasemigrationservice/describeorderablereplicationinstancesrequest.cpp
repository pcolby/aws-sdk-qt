/*
    Copyright 2013-2020 Paul Colby

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

#include "describeorderablereplicationinstancesrequest.h"
#include "describeorderablereplicationinstancesrequest_p.h"
#include "describeorderablereplicationinstancesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeOrderableReplicationInstancesRequest
 * \brief The DescribeOrderableReplicationInstancesRequest class provides an interface for DatabaseMigrationService DescribeOrderableReplicationInstances requests.
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
 * \sa DatabaseMigrationServiceClient::describeOrderableReplicationInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest(const DescribeOrderableReplicationInstancesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeOrderableReplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrderableReplicationInstancesRequest object.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest()
    : DatabaseMigrationServiceRequest(new DescribeOrderableReplicationInstancesRequestPrivate(DatabaseMigrationServiceRequest::DescribeOrderableReplicationInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOrderableReplicationInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOrderableReplicationInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrderableReplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableReplicationInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeOrderableReplicationInstancesRequestPrivate
 * \brief The DescribeOrderableReplicationInstancesRequestPrivate class provides private implementation for DescribeOrderableReplicationInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableReplicationInstancesRequest
 * class' copy constructor.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DescribeOrderableReplicationInstancesRequestPrivate &other, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
