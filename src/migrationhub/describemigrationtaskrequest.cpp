/*
    Copyright 2013-2019 Paul Colby

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

#include "describemigrationtaskrequest.h"
#include "describemigrationtaskrequest_p.h"
#include "describemigrationtaskresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DescribeMigrationTaskRequest
 * \brief The DescribeMigrationTaskRequest class provides an interface for MigrationHub DescribeMigrationTask requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::describeMigrationTask
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMigrationTaskRequest::DescribeMigrationTaskRequest(const DescribeMigrationTaskRequest &other)
    : MigrationHubRequest(new DescribeMigrationTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMigrationTaskRequest object.
 */
DescribeMigrationTaskRequest::DescribeMigrationTaskRequest()
    : MigrationHubRequest(new DescribeMigrationTaskRequestPrivate(MigrationHubRequest::DescribeMigrationTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMigrationTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMigrationTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMigrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMigrationTaskResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::DescribeMigrationTaskRequestPrivate
 * \brief The DescribeMigrationTaskRequestPrivate class provides private implementation for DescribeMigrationTaskRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DescribeMigrationTaskRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
DescribeMigrationTaskRequestPrivate::DescribeMigrationTaskRequestPrivate(
    const MigrationHubRequest::Action action, DescribeMigrationTaskRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMigrationTaskRequest
 * class' copy constructor.
 */
DescribeMigrationTaskRequestPrivate::DescribeMigrationTaskRequestPrivate(
    const DescribeMigrationTaskRequestPrivate &other, DescribeMigrationTaskRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
