// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationtaskrequest.h"
#include "createreplicationtaskrequest_p.h"
#include "createreplicationtaskresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationTaskRequest
 * \brief The CreateReplicationTaskRequest class provides an interface for DatabaseMigration CreateReplicationTask requests.
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
 * \sa DatabaseMigrationClient::createReplicationTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationTaskRequest::CreateReplicationTaskRequest(const CreateReplicationTaskRequest &other)
    : DatabaseMigrationRequest(new CreateReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationTaskRequest object.
 */
CreateReplicationTaskRequest::CreateReplicationTaskRequest()
    : DatabaseMigrationRequest(new CreateReplicationTaskRequestPrivate(DatabaseMigrationRequest::CreateReplicationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationTaskRequestPrivate
 * \brief The CreateReplicationTaskRequestPrivate class provides private implementation for CreateReplicationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationTaskRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CreateReplicationTaskRequestPrivate::CreateReplicationTaskRequestPrivate(
    const DatabaseMigrationRequest::Action action, CreateReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationTaskRequest
 * class' copy constructor.
 */
CreateReplicationTaskRequestPrivate::CreateReplicationTaskRequestPrivate(
    const CreateReplicationTaskRequestPrivate &other, CreateReplicationTaskRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
