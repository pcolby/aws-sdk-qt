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

#include "createreplicationsubnetgrouprequest.h"
#include "createreplicationsubnetgrouprequest_p.h"
#include "createreplicationsubnetgroupresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationSubnetGroupRequest
 * \brief The CreateReplicationSubnetGroupRequest class provides an interface for DatabaseMigration CreateReplicationSubnetGroup requests.
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
 * \sa DatabaseMigrationClient::createReplicationSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationSubnetGroupRequest::CreateReplicationSubnetGroupRequest(const CreateReplicationSubnetGroupRequest &other)
    : DatabaseMigrationRequest(new CreateReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationSubnetGroupRequest object.
 */
CreateReplicationSubnetGroupRequest::CreateReplicationSubnetGroupRequest()
    : DatabaseMigrationRequest(new CreateReplicationSubnetGroupRequestPrivate(DatabaseMigrationRequest::CreateReplicationSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationSubnetGroupRequestPrivate
 * \brief The CreateReplicationSubnetGroupRequestPrivate class provides private implementation for CreateReplicationSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationSubnetGroupRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CreateReplicationSubnetGroupRequestPrivate::CreateReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationRequest::Action action, CreateReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationSubnetGroupRequest
 * class' copy constructor.
 */
CreateReplicationSubnetGroupRequestPrivate::CreateReplicationSubnetGroupRequestPrivate(
    const CreateReplicationSubnetGroupRequestPrivate &other, CreateReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
