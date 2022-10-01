// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopassessmentrequest.h"
#include "stopassessmentrequest_p.h"
#include "stopassessmentresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StopAssessmentRequest
 * \brief The StopAssessmentRequest class provides an interface for MigrationHubStrategy StopAssessment requests.
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
 * \sa MigrationHubStrategyClient::stopAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
StopAssessmentRequest::StopAssessmentRequest(const StopAssessmentRequest &other)
    : MigrationHubStrategyRequest(new StopAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAssessmentRequest object.
 */
StopAssessmentRequest::StopAssessmentRequest()
    : MigrationHubStrategyRequest(new StopAssessmentRequestPrivate(MigrationHubStrategyRequest::StopAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool StopAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new StopAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::StopAssessmentRequestPrivate
 * \brief The StopAssessmentRequestPrivate class provides private implementation for StopAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StopAssessmentRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
StopAssessmentRequestPrivate::StopAssessmentRequestPrivate(
    const MigrationHubStrategyRequest::Action action, StopAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAssessmentRequest
 * class' copy constructor.
 */
StopAssessmentRequestPrivate::StopAssessmentRequestPrivate(
    const StopAssessmentRequestPrivate &other, StopAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
