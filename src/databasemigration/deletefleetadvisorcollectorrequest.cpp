// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetadvisorcollectorrequest.h"
#include "deletefleetadvisorcollectorrequest_p.h"
#include "deletefleetadvisorcollectorresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorCollectorRequest
 * \brief The DeleteFleetAdvisorCollectorRequest class provides an interface for DatabaseMigration DeleteFleetAdvisorCollector requests.
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
 * \sa DatabaseMigrationClient::deleteFleetAdvisorCollector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFleetAdvisorCollectorRequest::DeleteFleetAdvisorCollectorRequest(const DeleteFleetAdvisorCollectorRequest &other)
    : DatabaseMigrationRequest(new DeleteFleetAdvisorCollectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFleetAdvisorCollectorRequest object.
 */
DeleteFleetAdvisorCollectorRequest::DeleteFleetAdvisorCollectorRequest()
    : DatabaseMigrationRequest(new DeleteFleetAdvisorCollectorRequestPrivate(DatabaseMigrationRequest::DeleteFleetAdvisorCollectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFleetAdvisorCollectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFleetAdvisorCollectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetAdvisorCollectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetAdvisorCollectorResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorCollectorRequestPrivate
 * \brief The DeleteFleetAdvisorCollectorRequestPrivate class provides private implementation for DeleteFleetAdvisorCollectorRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteFleetAdvisorCollectorRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteFleetAdvisorCollectorRequestPrivate::DeleteFleetAdvisorCollectorRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteFleetAdvisorCollectorRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetAdvisorCollectorRequest
 * class' copy constructor.
 */
DeleteFleetAdvisorCollectorRequestPrivate::DeleteFleetAdvisorCollectorRequestPrivate(
    const DeleteFleetAdvisorCollectorRequestPrivate &other, DeleteFleetAdvisorCollectorRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
