// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionrequest_p.h"
#include "applypendingmaintenanceactionresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ApplyPendingMaintenanceActionRequest
 * \brief The ApplyPendingMaintenanceActionRequest class provides an interface for DatabaseMigration ApplyPendingMaintenanceAction requests.
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
 * \sa DatabaseMigrationClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other)
    : DatabaseMigrationRequest(new ApplyPendingMaintenanceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplyPendingMaintenanceActionRequest object.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest()
    : DatabaseMigrationRequest(new ApplyPendingMaintenanceActionRequestPrivate(DatabaseMigrationRequest::ApplyPendingMaintenanceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ApplyPendingMaintenanceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplyPendingMaintenanceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplyPendingMaintenanceActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyPendingMaintenanceActionResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ApplyPendingMaintenanceActionRequestPrivate
 * \brief The ApplyPendingMaintenanceActionRequestPrivate class provides private implementation for ApplyPendingMaintenanceActionRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const DatabaseMigrationRequest::Action action, ApplyPendingMaintenanceActionRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplyPendingMaintenanceActionRequest
 * class' copy constructor.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const ApplyPendingMaintenanceActionRequestPrivate &other, ApplyPendingMaintenanceActionRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
