// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
