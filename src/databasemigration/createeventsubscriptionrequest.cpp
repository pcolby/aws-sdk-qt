// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionrequest_p.h"
#include "createeventsubscriptionresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateEventSubscriptionRequest
 * \brief The CreateEventSubscriptionRequest class provides an interface for DatabaseMigration CreateEventSubscription requests.
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
 * \sa DatabaseMigrationClient::createEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest(const CreateEventSubscriptionRequest &other)
    : DatabaseMigrationRequest(new CreateEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEventSubscriptionRequest object.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest()
    : DatabaseMigrationRequest(new CreateEventSubscriptionRequestPrivate(DatabaseMigrationRequest::CreateEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::CreateEventSubscriptionRequestPrivate
 * \brief The CreateEventSubscriptionRequestPrivate class provides private implementation for CreateEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateEventSubscriptionRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const DatabaseMigrationRequest::Action action, CreateEventSubscriptionRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEventSubscriptionRequest
 * class' copy constructor.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const CreateEventSubscriptionRequestPrivate &other, CreateEventSubscriptionRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
