// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsrequest_p.h"
#include "describependingmaintenanceactionsresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribePendingMaintenanceActionsRequest
 * \brief The DescribePendingMaintenanceActionsRequest class provides an interface for DatabaseMigration DescribePendingMaintenanceActions requests.
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
 * \sa DatabaseMigrationClient::describePendingMaintenanceActions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest(const DescribePendingMaintenanceActionsRequest &other)
    : DatabaseMigrationRequest(new DescribePendingMaintenanceActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePendingMaintenanceActionsRequest object.
 */
DescribePendingMaintenanceActionsRequest::DescribePendingMaintenanceActionsRequest()
    : DatabaseMigrationRequest(new DescribePendingMaintenanceActionsRequestPrivate(DatabaseMigrationRequest::DescribePendingMaintenanceActionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePendingMaintenanceActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePendingMaintenanceActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePendingMaintenanceActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePendingMaintenanceActionsResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribePendingMaintenanceActionsRequestPrivate
 * \brief The DescribePendingMaintenanceActionsRequestPrivate class provides private implementation for DescribePendingMaintenanceActionsRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribePendingMaintenanceActionsRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePendingMaintenanceActionsRequest
 * class' copy constructor.
 */
DescribePendingMaintenanceActionsRequestPrivate::DescribePendingMaintenanceActionsRequestPrivate(
    const DescribePendingMaintenanceActionsRequestPrivate &other, DescribePendingMaintenanceActionsRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
