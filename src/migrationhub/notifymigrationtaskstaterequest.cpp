/*
    Copyright 2013-2018 Paul Colby

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

#include "notifymigrationtaskstaterequest.h"
#include "notifymigrationtaskstaterequest_p.h"
#include "notifymigrationtaskstateresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyMigrationTaskStateRequest
 * \brief The NotifyMigrationTaskStateRequest class provides an interface for MigrationHub NotifyMigrationTaskState requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::notifyMigrationTaskState
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest(const NotifyMigrationTaskStateRequest &other)
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyMigrationTaskStateRequest object.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest()
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(MigrationHubRequest::NotifyMigrationTaskStateAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyMigrationTaskStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyMigrationTaskStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyMigrationTaskStateRequest::response(QNetworkReply * const reply) const
{
    return new NotifyMigrationTaskStateResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::NotifyMigrationTaskStateRequestPrivate
 * \brief The NotifyMigrationTaskStateRequestPrivate class provides private implementation for NotifyMigrationTaskStateRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a NotifyMigrationTaskStateRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const MigrationHubRequest::Action action, NotifyMigrationTaskStateRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyMigrationTaskStateRequest
 * class' copy constructor.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const NotifyMigrationTaskStateRequestPrivate &other, NotifyMigrationTaskStateRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
