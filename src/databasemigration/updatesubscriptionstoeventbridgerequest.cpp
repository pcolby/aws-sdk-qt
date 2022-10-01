// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubscriptionstoeventbridgerequest.h"
#include "updatesubscriptionstoeventbridgerequest_p.h"
#include "updatesubscriptionstoeventbridgeresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::UpdateSubscriptionsToEventBridgeRequest
 * \brief The UpdateSubscriptionsToEventBridgeRequest class provides an interface for DatabaseMigration UpdateSubscriptionsToEventBridge requests.
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
 * \sa DatabaseMigrationClient::updateSubscriptionsToEventBridge
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubscriptionsToEventBridgeRequest::UpdateSubscriptionsToEventBridgeRequest(const UpdateSubscriptionsToEventBridgeRequest &other)
    : DatabaseMigrationRequest(new UpdateSubscriptionsToEventBridgeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeRequest object.
 */
UpdateSubscriptionsToEventBridgeRequest::UpdateSubscriptionsToEventBridgeRequest()
    : DatabaseMigrationRequest(new UpdateSubscriptionsToEventBridgeRequestPrivate(DatabaseMigrationRequest::UpdateSubscriptionsToEventBridgeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubscriptionsToEventBridgeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSubscriptionsToEventBridgeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriptionsToEventBridgeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionsToEventBridgeResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::UpdateSubscriptionsToEventBridgeRequestPrivate
 * \brief The UpdateSubscriptionsToEventBridgeRequestPrivate class provides private implementation for UpdateSubscriptionsToEventBridgeRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
UpdateSubscriptionsToEventBridgeRequestPrivate::UpdateSubscriptionsToEventBridgeRequestPrivate(
    const DatabaseMigrationRequest::Action action, UpdateSubscriptionsToEventBridgeRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionsToEventBridgeRequest
 * class' copy constructor.
 */
UpdateSubscriptionsToEventBridgeRequestPrivate::UpdateSubscriptionsToEventBridgeRequestPrivate(
    const UpdateSubscriptionsToEventBridgeRequestPrivate &other, UpdateSubscriptionsToEventBridgeRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
