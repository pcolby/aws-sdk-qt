// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationtaskassessmentrequest.h"
#include "startreplicationtaskassessmentrequest_p.h"
#include "startreplicationtaskassessmentresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRequest
 * \brief The StartReplicationTaskAssessmentRequest class provides an interface for DatabaseMigration StartReplicationTaskAssessment requests.
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
 * \sa DatabaseMigrationClient::startReplicationTaskAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
StartReplicationTaskAssessmentRequest::StartReplicationTaskAssessmentRequest(const StartReplicationTaskAssessmentRequest &other)
    : DatabaseMigrationRequest(new StartReplicationTaskAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReplicationTaskAssessmentRequest object.
 */
StartReplicationTaskAssessmentRequest::StartReplicationTaskAssessmentRequest()
    : DatabaseMigrationRequest(new StartReplicationTaskAssessmentRequestPrivate(DatabaseMigrationRequest::StartReplicationTaskAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool StartReplicationTaskAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReplicationTaskAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReplicationTaskAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationTaskAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRequestPrivate
 * \brief The StartReplicationTaskAssessmentRequestPrivate class provides private implementation for StartReplicationTaskAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
StartReplicationTaskAssessmentRequestPrivate::StartReplicationTaskAssessmentRequestPrivate(
    const DatabaseMigrationRequest::Action action, StartReplicationTaskAssessmentRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationTaskAssessmentRequest
 * class' copy constructor.
 */
StartReplicationTaskAssessmentRequestPrivate::StartReplicationTaskAssessmentRequestPrivate(
    const StartReplicationTaskAssessmentRequestPrivate &other, StartReplicationTaskAssessmentRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
