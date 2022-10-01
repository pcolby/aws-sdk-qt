// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationinstancerequest.h"
#include "createreplicationinstancerequest_p.h"
#include "createreplicationinstanceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationInstanceRequest
 * \brief The CreateReplicationInstanceRequest class provides an interface for DatabaseMigration CreateReplicationInstance requests.
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
 * \sa DatabaseMigrationClient::createReplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationInstanceRequest::CreateReplicationInstanceRequest(const CreateReplicationInstanceRequest &other)
    : DatabaseMigrationRequest(new CreateReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationInstanceRequest object.
 */
CreateReplicationInstanceRequest::CreateReplicationInstanceRequest()
    : DatabaseMigrationRequest(new CreateReplicationInstanceRequestPrivate(DatabaseMigrationRequest::CreateReplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationInstanceRequestPrivate
 * \brief The CreateReplicationInstanceRequestPrivate class provides private implementation for CreateReplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationInstanceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CreateReplicationInstanceRequestPrivate::CreateReplicationInstanceRequestPrivate(
    const DatabaseMigrationRequest::Action action, CreateReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationInstanceRequest
 * class' copy constructor.
 */
CreateReplicationInstanceRequestPrivate::CreateReplicationInstanceRequestPrivate(
    const CreateReplicationInstanceRequestPrivate &other, CreateReplicationInstanceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
