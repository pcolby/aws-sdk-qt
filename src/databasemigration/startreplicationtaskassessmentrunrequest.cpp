// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationtaskassessmentrunrequest.h"
#include "startreplicationtaskassessmentrunrequest_p.h"
#include "startreplicationtaskassessmentrunresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRunRequest
 * \brief The StartReplicationTaskAssessmentRunRequest class provides an interface for DatabaseMigration StartReplicationTaskAssessmentRun requests.
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
 * \sa DatabaseMigrationClient::startReplicationTaskAssessmentRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartReplicationTaskAssessmentRunRequest::StartReplicationTaskAssessmentRunRequest(const StartReplicationTaskAssessmentRunRequest &other)
    : DatabaseMigrationRequest(new StartReplicationTaskAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReplicationTaskAssessmentRunRequest object.
 */
StartReplicationTaskAssessmentRunRequest::StartReplicationTaskAssessmentRunRequest()
    : DatabaseMigrationRequest(new StartReplicationTaskAssessmentRunRequestPrivate(DatabaseMigrationRequest::StartReplicationTaskAssessmentRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartReplicationTaskAssessmentRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReplicationTaskAssessmentRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReplicationTaskAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationTaskAssessmentRunResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRunRequestPrivate
 * \brief The StartReplicationTaskAssessmentRunRequestPrivate class provides private implementation for StartReplicationTaskAssessmentRunRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRunRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
StartReplicationTaskAssessmentRunRequestPrivate::StartReplicationTaskAssessmentRunRequestPrivate(
    const DatabaseMigrationRequest::Action action, StartReplicationTaskAssessmentRunRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationTaskAssessmentRunRequest
 * class' copy constructor.
 */
StartReplicationTaskAssessmentRunRequestPrivate::StartReplicationTaskAssessmentRunRequestPrivate(
    const StartReplicationTaskAssessmentRunRequestPrivate &other, StartReplicationTaskAssessmentRunRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
