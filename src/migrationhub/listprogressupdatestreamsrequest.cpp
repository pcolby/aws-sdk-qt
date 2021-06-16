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

#include "listprogressupdatestreamsrequest.h"
#include "listprogressupdatestreamsrequest_p.h"
#include "listprogressupdatestreamsresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsRequest
 * \brief The ListProgressUpdateStreamsRequest class provides an interface for MigrationHub ListProgressUpdateStreams requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listProgressUpdateStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest(const ListProgressUpdateStreamsRequest &other)
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProgressUpdateStreamsRequest object.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest()
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(MigrationHubRequest::ListProgressUpdateStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProgressUpdateStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProgressUpdateStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProgressUpdateStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListProgressUpdateStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsRequestPrivate
 * \brief The ListProgressUpdateStreamsRequestPrivate class provides private implementation for ListProgressUpdateStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListProgressUpdateStreamsRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const MigrationHubRequest::Action action, ListProgressUpdateStreamsRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProgressUpdateStreamsRequest
 * class' copy constructor.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const ListProgressUpdateStreamsRequestPrivate &other, ListProgressUpdateStreamsRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
