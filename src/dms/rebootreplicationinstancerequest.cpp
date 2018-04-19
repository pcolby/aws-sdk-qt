/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rebootreplicationinstancerequest.h"
#include "rebootreplicationinstancerequest_p.h"
#include "rebootreplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::RebootReplicationInstanceRequest
 * \brief The RebootReplicationInstanceRequest class provides an interface for DatabaseMigrationService RebootReplicationInstance requests.
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
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::rebootReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest(const RebootReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new RebootReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootReplicationInstanceRequest object.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new RebootReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::RebootReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RebootReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigrationService::RebootReplicationInstanceRequestPrivate
 * \brief The RebootReplicationInstanceRequestPrivate class provides private implementation for RebootReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 *
 * Constructs a RebootReplicationInstanceRequestPrivate object for DatabaseMigrationService \a action with,
 * public implementation \a q.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, RebootReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootReplicationInstanceRequest
 * class' copy constructor.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const RebootReplicationInstanceRequestPrivate &other, RebootReplicationInstanceRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
