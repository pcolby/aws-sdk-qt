/*
    Copyright 2013-2020 Paul Colby

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

#include "associatecreatedartifactrequest.h"
#include "associatecreatedartifactrequest_p.h"
#include "associatecreatedartifactresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactRequest
 * \brief The AssociateCreatedArtifactRequest class provides an interface for MigrationHub AssociateCreatedArtifact requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::associateCreatedArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest(const AssociateCreatedArtifactRequest &other)
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateCreatedArtifactRequest object.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest()
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(MigrationHubRequest::AssociateCreatedArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateCreatedArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateCreatedArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateCreatedArtifactRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCreatedArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactRequestPrivate
 * \brief The AssociateCreatedArtifactRequestPrivate class provides private implementation for AssociateCreatedArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a AssociateCreatedArtifactRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const MigrationHubRequest::Action action, AssociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateCreatedArtifactRequest
 * class' copy constructor.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const AssociateCreatedArtifactRequestPrivate &other, AssociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
