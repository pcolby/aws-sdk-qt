// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportfiletaskrequest.h"
#include "getimportfiletaskrequest_p.h"
#include "getimportfiletaskresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetImportFileTaskRequest
 * \brief The GetImportFileTaskRequest class provides an interface for MigrationHubStrategy GetImportFileTask requests.
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
 * \sa MigrationHubStrategyClient::getImportFileTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportFileTaskRequest::GetImportFileTaskRequest(const GetImportFileTaskRequest &other)
    : MigrationHubStrategyRequest(new GetImportFileTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportFileTaskRequest object.
 */
GetImportFileTaskRequest::GetImportFileTaskRequest()
    : MigrationHubStrategyRequest(new GetImportFileTaskRequestPrivate(MigrationHubStrategyRequest::GetImportFileTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportFileTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportFileTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportFileTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetImportFileTaskResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetImportFileTaskRequestPrivate
 * \brief The GetImportFileTaskRequestPrivate class provides private implementation for GetImportFileTaskRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetImportFileTaskRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetImportFileTaskRequestPrivate::GetImportFileTaskRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportFileTaskRequest
 * class' copy constructor.
 */
GetImportFileTaskRequestPrivate::GetImportFileTaskRequestPrivate(
    const GetImportFileTaskRequestPrivate &other, GetImportFileTaskRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
