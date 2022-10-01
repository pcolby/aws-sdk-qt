// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importmigrationtaskrequest.h"
#include "importmigrationtaskrequest_p.h"
#include "importmigrationtaskresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ImportMigrationTaskRequest
 * \brief The ImportMigrationTaskRequest class provides an interface for MigrationHub ImportMigrationTask requests.
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
 * \sa MigrationHubClient::importMigrationTask
 */

/*!
 * Constructs a copy of \a other.
 */
ImportMigrationTaskRequest::ImportMigrationTaskRequest(const ImportMigrationTaskRequest &other)
    : MigrationHubRequest(new ImportMigrationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportMigrationTaskRequest object.
 */
ImportMigrationTaskRequest::ImportMigrationTaskRequest()
    : MigrationHubRequest(new ImportMigrationTaskRequestPrivate(MigrationHubRequest::ImportMigrationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool ImportMigrationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportMigrationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportMigrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new ImportMigrationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ImportMigrationTaskRequestPrivate
 * \brief The ImportMigrationTaskRequestPrivate class provides private implementation for ImportMigrationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ImportMigrationTaskRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
ImportMigrationTaskRequestPrivate::ImportMigrationTaskRequestPrivate(
    const MigrationHubRequest::Action action, ImportMigrationTaskRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportMigrationTaskRequest
 * class' copy constructor.
 */
ImportMigrationTaskRequestPrivate::ImportMigrationTaskRequestPrivate(
    const ImportMigrationTaskRequestPrivate &other, ImportMigrationTaskRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
