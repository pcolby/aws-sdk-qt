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

#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionrequest_p.h"
#include "deleteeventsubscriptionresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteEventSubscriptionRequest
 * \brief The DeleteEventSubscriptionRequest class provides an interface for DatabaseMigration DeleteEventSubscription requests.
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
 * \sa DatabaseMigrationClient::deleteEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest(const DeleteEventSubscriptionRequest &other)
    : DatabaseMigrationRequest(new DeleteEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventSubscriptionRequest object.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest()
    : DatabaseMigrationRequest(new DeleteEventSubscriptionRequestPrivate(DatabaseMigrationRequest::DeleteEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteEventSubscriptionRequestPrivate
 * \brief The DeleteEventSubscriptionRequestPrivate class provides private implementation for DeleteEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteEventSubscriptionRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteEventSubscriptionRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSubscriptionRequest
 * class' copy constructor.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const DeleteEventSubscriptionRequestPrivate &other, DeleteEventSubscriptionRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
