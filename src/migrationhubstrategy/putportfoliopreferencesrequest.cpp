// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putportfoliopreferencesrequest.h"
#include "putportfoliopreferencesrequest_p.h"
#include "putportfoliopreferencesresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::PutPortfolioPreferencesRequest
 * \brief The PutPortfolioPreferencesRequest class provides an interface for MigrationHubStrategy PutPortfolioPreferences requests.
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
 * \sa MigrationHubStrategyClient::putPortfolioPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
PutPortfolioPreferencesRequest::PutPortfolioPreferencesRequest(const PutPortfolioPreferencesRequest &other)
    : MigrationHubStrategyRequest(new PutPortfolioPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPortfolioPreferencesRequest object.
 */
PutPortfolioPreferencesRequest::PutPortfolioPreferencesRequest()
    : MigrationHubStrategyRequest(new PutPortfolioPreferencesRequestPrivate(MigrationHubStrategyRequest::PutPortfolioPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool PutPortfolioPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPortfolioPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPortfolioPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new PutPortfolioPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::PutPortfolioPreferencesRequestPrivate
 * \brief The PutPortfolioPreferencesRequestPrivate class provides private implementation for PutPortfolioPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a PutPortfolioPreferencesRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
PutPortfolioPreferencesRequestPrivate::PutPortfolioPreferencesRequestPrivate(
    const MigrationHubStrategyRequest::Action action, PutPortfolioPreferencesRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPortfolioPreferencesRequest
 * class' copy constructor.
 */
PutPortfolioPreferencesRequestPrivate::PutPortfolioPreferencesRequestPrivate(
    const PutPortfolioPreferencesRequestPrivate &other, PutPortfolioPreferencesRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
