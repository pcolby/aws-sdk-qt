// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatecreatedartifactrequest.h"
#include "disassociatecreatedartifactrequest_p.h"
#include "disassociatecreatedartifactresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactRequest
 * \brief The DisassociateCreatedArtifactRequest class provides an interface for MigrationHub DisassociateCreatedArtifact requests.
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
 * \sa MigrationHubClient::disassociateCreatedArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateCreatedArtifactRequest::DisassociateCreatedArtifactRequest(const DisassociateCreatedArtifactRequest &other)
    : MigrationHubRequest(new DisassociateCreatedArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateCreatedArtifactRequest object.
 */
DisassociateCreatedArtifactRequest::DisassociateCreatedArtifactRequest()
    : MigrationHubRequest(new DisassociateCreatedArtifactRequestPrivate(MigrationHubRequest::DisassociateCreatedArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateCreatedArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateCreatedArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateCreatedArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateCreatedArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactRequestPrivate
 * \brief The DisassociateCreatedArtifactRequestPrivate class provides private implementation for DisassociateCreatedArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DisassociateCreatedArtifactRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
DisassociateCreatedArtifactRequestPrivate::DisassociateCreatedArtifactRequestPrivate(
    const MigrationHubRequest::Action action, DisassociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateCreatedArtifactRequest
 * class' copy constructor.
 */
DisassociateCreatedArtifactRequestPrivate::DisassociateCreatedArtifactRequestPrivate(
    const DisassociateCreatedArtifactRequestPrivate &other, DisassociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
