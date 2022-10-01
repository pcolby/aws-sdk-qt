// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getportfoliopreferencesrequest.h"
#include "getportfoliopreferencesrequest_p.h"
#include "getportfoliopreferencesresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioPreferencesRequest
 * \brief The GetPortfolioPreferencesRequest class provides an interface for MigrationHubStrategy GetPortfolioPreferences requests.
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
 * \sa MigrationHubStrategyClient::getPortfolioPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
GetPortfolioPreferencesRequest::GetPortfolioPreferencesRequest(const GetPortfolioPreferencesRequest &other)
    : MigrationHubStrategyRequest(new GetPortfolioPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPortfolioPreferencesRequest object.
 */
GetPortfolioPreferencesRequest::GetPortfolioPreferencesRequest()
    : MigrationHubStrategyRequest(new GetPortfolioPreferencesRequestPrivate(MigrationHubStrategyRequest::GetPortfolioPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool GetPortfolioPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPortfolioPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPortfolioPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new GetPortfolioPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioPreferencesRequestPrivate
 * \brief The GetPortfolioPreferencesRequestPrivate class provides private implementation for GetPortfolioPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetPortfolioPreferencesRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetPortfolioPreferencesRequestPrivate::GetPortfolioPreferencesRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetPortfolioPreferencesRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPortfolioPreferencesRequest
 * class' copy constructor.
 */
GetPortfolioPreferencesRequestPrivate::GetPortfolioPreferencesRequestPrivate(
    const GetPortfolioPreferencesRequestPrivate &other, GetPortfolioPreferencesRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
