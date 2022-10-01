// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimportfiletaskrequest.h"
#include "listimportfiletaskrequest_p.h"
#include "listimportfiletaskresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListImportFileTaskRequest
 * \brief The ListImportFileTaskRequest class provides an interface for MigrationHubStrategy ListImportFileTask requests.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::listImportFileTask
 */

/*!
 * Constructs a copy of \a other.
 */
ListImportFileTaskRequest::ListImportFileTaskRequest(const ListImportFileTaskRequest &other)
    : MigrationHubStrategyRequest(new ListImportFileTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImportFileTaskRequest object.
 */
ListImportFileTaskRequest::ListImportFileTaskRequest()
    : MigrationHubStrategyRequest(new ListImportFileTaskRequestPrivate(MigrationHubStrategyRequest::ListImportFileTaskAction, this))
{

}

/*!
 * \reimp
 */
bool ListImportFileTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImportFileTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImportFileTaskRequest::response(QNetworkReply * const reply) const
{
    return new ListImportFileTaskResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::ListImportFileTaskRequestPrivate
 * \brief The ListImportFileTaskRequestPrivate class provides private implementation for ListImportFileTaskRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListImportFileTaskRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
ListImportFileTaskRequestPrivate::ListImportFileTaskRequestPrivate(
    const MigrationHubStrategyRequest::Action action, ListImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImportFileTaskRequest
 * class' copy constructor.
 */
ListImportFileTaskRequestPrivate::ListImportFileTaskRequestPrivate(
    const ListImportFileTaskRequestPrivate &other, ListImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
