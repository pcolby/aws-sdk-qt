// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprogressupdatestreamrequest.h"
#include "deleteprogressupdatestreamrequest_p.h"
#include "deleteprogressupdatestreamresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DeleteProgressUpdateStreamRequest
 * \brief The DeleteProgressUpdateStreamRequest class provides an interface for MigrationHub DeleteProgressUpdateStream requests.
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
 * \sa MigrationHubClient::deleteProgressUpdateStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProgressUpdateStreamRequest::DeleteProgressUpdateStreamRequest(const DeleteProgressUpdateStreamRequest &other)
    : MigrationHubRequest(new DeleteProgressUpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProgressUpdateStreamRequest object.
 */
DeleteProgressUpdateStreamRequest::DeleteProgressUpdateStreamRequest()
    : MigrationHubRequest(new DeleteProgressUpdateStreamRequestPrivate(MigrationHubRequest::DeleteProgressUpdateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProgressUpdateStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProgressUpdateStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProgressUpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProgressUpdateStreamResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::DeleteProgressUpdateStreamRequestPrivate
 * \brief The DeleteProgressUpdateStreamRequestPrivate class provides private implementation for DeleteProgressUpdateStreamRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DeleteProgressUpdateStreamRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
DeleteProgressUpdateStreamRequestPrivate::DeleteProgressUpdateStreamRequestPrivate(
    const MigrationHubRequest::Action action, DeleteProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProgressUpdateStreamRequest
 * class' copy constructor.
 */
DeleteProgressUpdateStreamRequestPrivate::DeleteProgressUpdateStreamRequestPrivate(
    const DeleteProgressUpdateStreamRequestPrivate &other, DeleteProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
