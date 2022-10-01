// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startassessmentrequest.h"
#include "startassessmentrequest_p.h"
#include "startassessmentresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartAssessmentRequest
 * \brief The StartAssessmentRequest class provides an interface for MigrationHubStrategy StartAssessment requests.
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
 * \sa MigrationHubStrategyClient::startAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
StartAssessmentRequest::StartAssessmentRequest(const StartAssessmentRequest &other)
    : MigrationHubStrategyRequest(new StartAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartAssessmentRequest object.
 */
StartAssessmentRequest::StartAssessmentRequest()
    : MigrationHubStrategyRequest(new StartAssessmentRequestPrivate(MigrationHubStrategyRequest::StartAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool StartAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new StartAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::StartAssessmentRequestPrivate
 * \brief The StartAssessmentRequestPrivate class provides private implementation for StartAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartAssessmentRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
StartAssessmentRequestPrivate::StartAssessmentRequestPrivate(
    const MigrationHubStrategyRequest::Action action, StartAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartAssessmentRequest
 * class' copy constructor.
 */
StartAssessmentRequestPrivate::StartAssessmentRequestPrivate(
    const StartAssessmentRequestPrivate &other, StartAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
