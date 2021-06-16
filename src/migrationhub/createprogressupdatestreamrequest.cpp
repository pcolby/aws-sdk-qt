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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
