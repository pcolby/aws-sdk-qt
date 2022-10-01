// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getportfoliosummaryrequest.h"
#include "getportfoliosummaryrequest_p.h"
#include "getportfoliosummaryresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioSummaryRequest
 * \brief The GetPortfolioSummaryRequest class provides an interface for MigrationHubStrategy GetPortfolioSummary requests.
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
 * \sa MigrationHubStrategyClient::getPortfolioSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetPortfolioSummaryRequest::GetPortfolioSummaryRequest(const GetPortfolioSummaryRequest &other)
    : MigrationHubStrategyRequest(new GetPortfolioSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPortfolioSummaryRequest object.
 */
GetPortfolioSummaryRequest::GetPortfolioSummaryRequest()
    : MigrationHubStrategyRequest(new GetPortfolioSummaryRequestPrivate(MigrationHubStrategyRequest::GetPortfolioSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetPortfolioSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPortfolioSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPortfolioSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetPortfolioSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioSummaryRequestPrivate
 * \brief The GetPortfolioSummaryRequestPrivate class provides private implementation for GetPortfolioSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetPortfolioSummaryRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetPortfolioSummaryRequestPrivate::GetPortfolioSummaryRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetPortfolioSummaryRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPortfolioSummaryRequest
 * class' copy constructor.
 */
GetPortfolioSummaryRequestPrivate::GetPortfolioSummaryRequestPrivate(
    const GetPortfolioSummaryRequestPrivate &other, GetPortfolioSummaryRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
