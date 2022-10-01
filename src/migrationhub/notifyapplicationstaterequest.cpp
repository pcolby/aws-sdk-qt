// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
