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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
