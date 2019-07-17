/*
    Copyright 2013-2019 Paul Colby

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

#include "notifyapplicationstaterequest.h"
#include "notifyapplicationstaterequest_p.h"
#include "notifyapplicationstateresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyApplicationStateRequest
 * \brief The NotifyApplicationStateRequest class provides an interface for MigrationHub NotifyApplicationState requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::notifyApplicationState
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyApplicationStateRequest::NotifyApplicationStateRequest(const NotifyApplicationStateRequest &other)
    : MigrationHubRequest(new NotifyApplicationStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyApplicationStateRequest object.
 */
NotifyApplicationStateRequest::NotifyApplicationStateRequest()
    : MigrationHubRequest(new NotifyApplicationStateRequestPrivate(MigrationHubRequest::NotifyApplicationStateAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyApplicationStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyApplicationStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyApplicationStateRequest::response(QNetworkReply * const reply) const
{
    return new NotifyApplicationStateResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::NotifyApplicationStateRequestPrivate
 * \brief The NotifyApplicationStateRequestPrivate class provides private implementation for NotifyApplicationStateRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a NotifyApplicationStateRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
NotifyApplicationStateRequestPrivate::NotifyApplicationStateRequestPrivate(
    const MigrationHubRequest::Action action, NotifyApplicationStateRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyApplicationStateRequest
 * class' copy constructor.
 */
NotifyApplicationStateRequestPrivate::NotifyApplicationStateRequestPrivate(
    const NotifyApplicationStateRequestPrivate &other, NotifyApplicationStateRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
