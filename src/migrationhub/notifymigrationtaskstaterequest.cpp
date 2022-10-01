// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
