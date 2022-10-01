// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
