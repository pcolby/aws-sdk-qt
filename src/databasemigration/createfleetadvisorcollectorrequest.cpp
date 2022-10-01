// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfleetadvisorcollectorrequest.h"
#include "createfleetadvisorcollectorrequest_p.h"
#include "createfleetadvisorcollectorresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateFleetAdvisorCollectorRequest
 * \brief The CreateFleetAdvisorCollectorRequest class provides an interface for DatabaseMigration CreateFleetAdvisorCollector requests.
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
 * \sa DatabaseMigrationClient::createFleetAdvisorCollector
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFleetAdvisorCollectorRequest::CreateFleetAdvisorCollectorRequest(const CreateFleetAdvisorCollectorRequest &other)
    : DatabaseMigrationRequest(new CreateFleetAdvisorCollectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFleetAdvisorCollectorRequest object.
 */
CreateFleetAdvisorCollectorRequest::CreateFleetAdvisorCollectorRequest()
    : DatabaseMigrationRequest(new CreateFleetAdvisorCollectorRequestPrivate(DatabaseMigrationRequest::CreateFleetAdvisorCollectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFleetAdvisorCollectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFleetAdvisorCollectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFleetAdvisorCollectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateFleetAdvisorCollectorResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CreateFleetAdvisorCollectorRequestPrivate
 * \brief The CreateFleetAdvisorCollectorRequestPrivate class provides private implementation for CreateFleetAdvisorCollectorRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateFleetAdvisorCollectorRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CreateFleetAdvisorCollectorRequestPrivate::CreateFleetAdvisorCollectorRequestPrivate(
    const DatabaseMigrationRequest::Action action, CreateFleetAdvisorCollectorRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFleetAdvisorCollectorRequest
 * class' copy constructor.
 */
CreateFleetAdvisorCollectorRequestPrivate::CreateFleetAdvisorCollectorRequestPrivate(
    const CreateFleetAdvisorCollectorRequestPrivate &other, CreateFleetAdvisorCollectorRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
