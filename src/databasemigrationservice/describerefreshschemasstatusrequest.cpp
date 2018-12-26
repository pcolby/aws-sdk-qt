/*
    Copyright 2013-2018 Paul Colby

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

#include "describerefreshschemasstatusrequest.h"
#include "describerefreshschemasstatusrequest_p.h"
#include "describerefreshschemasstatusresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeRefreshSchemasStatusRequest
 * \brief The DescribeRefreshSchemasStatusRequest class provides an interface for DatabaseMigrationService DescribeRefreshSchemasStatus requests.
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
 *  For more information about AWS DMS, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::describeRefreshSchemasStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRefreshSchemasStatusRequest::DescribeRefreshSchemasStatusRequest(const DescribeRefreshSchemasStatusRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeRefreshSchemasStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRefreshSchemasStatusRequest object.
 */
DescribeRefreshSchemasStatusRequest::DescribeRefreshSchemasStatusRequest()
    : DatabaseMigrationServiceRequest(new DescribeRefreshSchemasStatusRequestPrivate(DatabaseMigrationServiceRequest::DescribeRefreshSchemasStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRefreshSchemasStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRefreshSchemasStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRefreshSchemasStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRefreshSchemasStatusResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeRefreshSchemasStatusRequestPrivate
 * \brief The DescribeRefreshSchemasStatusRequestPrivate class provides private implementation for DescribeRefreshSchemasStatusRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeRefreshSchemasStatusRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DescribeRefreshSchemasStatusRequestPrivate::DescribeRefreshSchemasStatusRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeRefreshSchemasStatusRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRefreshSchemasStatusRequest
 * class' copy constructor.
 */
DescribeRefreshSchemasStatusRequestPrivate::DescribeRefreshSchemasStatusRequestPrivate(
    const DescribeRefreshSchemasStatusRequestPrivate &other, DescribeRefreshSchemasStatusRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
