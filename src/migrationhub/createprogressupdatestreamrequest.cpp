// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprogressupdatestreamrequest.h"
#include "createprogressupdatestreamrequest_p.h"
#include "createprogressupdatestreamresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::CreateProgressUpdateStreamRequest
 * \brief The CreateProgressUpdateStreamRequest class provides an interface for MigrationHub CreateProgressUpdateStream requests.
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
 * \sa MigrationHubClient::createProgressUpdateStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProgressUpdateStreamRequest::CreateProgressUpdateStreamRequest(const CreateProgressUpdateStreamRequest &other)
    : MigrationHubRequest(new CreateProgressUpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProgressUpdateStreamRequest object.
 */
CreateProgressUpdateStreamRequest::CreateProgressUpdateStreamRequest()
    : MigrationHubRequest(new CreateProgressUpdateStreamRequestPrivate(MigrationHubRequest::CreateProgressUpdateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProgressUpdateStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProgressUpdateStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProgressUpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateProgressUpdateStreamResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::CreateProgressUpdateStreamRequestPrivate
 * \brief The CreateProgressUpdateStreamRequestPrivate class provides private implementation for CreateProgressUpdateStreamRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a CreateProgressUpdateStreamRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
CreateProgressUpdateStreamRequestPrivate::CreateProgressUpdateStreamRequestPrivate(
    const MigrationHubRequest::Action action, CreateProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProgressUpdateStreamRequest
 * class' copy constructor.
 */
CreateProgressUpdateStreamRequestPrivate::CreateProgressUpdateStreamRequestPrivate(
    const CreateProgressUpdateStreamRequestPrivate &other, CreateProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
