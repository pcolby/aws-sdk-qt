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
