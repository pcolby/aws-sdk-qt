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

#include "listcreatedartifactsrequest.h"
#include "listcreatedartifactsrequest_p.h"
#include "listcreatedartifactsresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListCreatedArtifactsRequest
 * \brief The ListCreatedArtifactsRequest class provides an interface for MigrationHub ListCreatedArtifacts requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listCreatedArtifacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListCreatedArtifactsRequest::ListCreatedArtifactsRequest(const ListCreatedArtifactsRequest &other)
    : MigrationHubRequest(new ListCreatedArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCreatedArtifactsRequest object.
 */
ListCreatedArtifactsRequest::ListCreatedArtifactsRequest()
    : MigrationHubRequest(new ListCreatedArtifactsRequestPrivate(MigrationHubRequest::ListCreatedArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCreatedArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCreatedArtifactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCreatedArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListCreatedArtifactsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListCreatedArtifactsRequestPrivate
 * \brief The ListCreatedArtifactsRequestPrivate class provides private implementation for ListCreatedArtifactsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListCreatedArtifactsRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
ListCreatedArtifactsRequestPrivate::ListCreatedArtifactsRequestPrivate(
    const MigrationHubRequest::Action action, ListCreatedArtifactsRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCreatedArtifactsRequest
 * class' copy constructor.
 */
ListCreatedArtifactsRequestPrivate::ListCreatedArtifactsRequestPrivate(
    const ListCreatedArtifactsRequestPrivate &other, ListCreatedArtifactsRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
