// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrecommendationreportgenerationrequest.h"
#include "startrecommendationreportgenerationrequest_p.h"
#include "startrecommendationreportgenerationresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartRecommendationReportGenerationRequest
 * \brief The StartRecommendationReportGenerationRequest class provides an interface for MigrationHubStrategy StartRecommendationReportGeneration requests.
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
 * \sa MigrationHubStrategyClient::startRecommendationReportGeneration
 */

/*!
 * Constructs a copy of \a other.
 */
StartRecommendationReportGenerationRequest::StartRecommendationReportGenerationRequest(const StartRecommendationReportGenerationRequest &other)
    : MigrationHubStrategyRequest(new StartRecommendationReportGenerationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRecommendationReportGenerationRequest object.
 */
StartRecommendationReportGenerationRequest::StartRecommendationReportGenerationRequest()
    : MigrationHubStrategyRequest(new StartRecommendationReportGenerationRequestPrivate(MigrationHubStrategyRequest::StartRecommendationReportGenerationAction, this))
{

}

/*!
 * \reimp
 */
bool StartRecommendationReportGenerationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRecommendationReportGenerationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRecommendationReportGenerationRequest::response(QNetworkReply * const reply) const
{
    return new StartRecommendationReportGenerationResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::StartRecommendationReportGenerationRequestPrivate
 * \brief The StartRecommendationReportGenerationRequestPrivate class provides private implementation for StartRecommendationReportGenerationRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartRecommendationReportGenerationRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
StartRecommendationReportGenerationRequestPrivate::StartRecommendationReportGenerationRequestPrivate(
    const MigrationHubStrategyRequest::Action action, StartRecommendationReportGenerationRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRecommendationReportGenerationRequest
 * class' copy constructor.
 */
StartRecommendationReportGenerationRequestPrivate::StartRecommendationReportGenerationRequestPrivate(
    const StartRecommendationReportGenerationRequestPrivate &other, StartRecommendationReportGenerationRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
