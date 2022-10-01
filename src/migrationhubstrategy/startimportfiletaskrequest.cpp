// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportfiletaskrequest.h"
#include "startimportfiletaskrequest_p.h"
#include "startimportfiletaskresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartImportFileTaskRequest
 * \brief The StartImportFileTaskRequest class provides an interface for MigrationHubStrategy StartImportFileTask requests.
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
 * \sa MigrationHubStrategyClient::startImportFileTask
 */

/*!
 * Constructs a copy of \a other.
 */
StartImportFileTaskRequest::StartImportFileTaskRequest(const StartImportFileTaskRequest &other)
    : MigrationHubStrategyRequest(new StartImportFileTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImportFileTaskRequest object.
 */
StartImportFileTaskRequest::StartImportFileTaskRequest()
    : MigrationHubStrategyRequest(new StartImportFileTaskRequestPrivate(MigrationHubStrategyRequest::StartImportFileTaskAction, this))
{

}

/*!
 * \reimp
 */
bool StartImportFileTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImportFileTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImportFileTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartImportFileTaskResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::StartImportFileTaskRequestPrivate
 * \brief The StartImportFileTaskRequestPrivate class provides private implementation for StartImportFileTaskRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartImportFileTaskRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
StartImportFileTaskRequestPrivate::StartImportFileTaskRequestPrivate(
    const MigrationHubStrategyRequest::Action action, StartImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImportFileTaskRequest
 * class' copy constructor.
 */
StartImportFileTaskRequestPrivate::StartImportFileTaskRequestPrivate(
    const StartImportFileTaskRequestPrivate &other, StartImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
