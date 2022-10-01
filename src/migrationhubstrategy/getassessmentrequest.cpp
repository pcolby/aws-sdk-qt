// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassessmentrequest.h"
#include "getassessmentrequest_p.h"
#include "getassessmentresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetAssessmentRequest
 * \brief The GetAssessmentRequest class provides an interface for MigrationHubStrategy GetAssessment requests.
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
 * \sa MigrationHubStrategyClient::getAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssessmentRequest::GetAssessmentRequest(const GetAssessmentRequest &other)
    : MigrationHubStrategyRequest(new GetAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssessmentRequest object.
 */
GetAssessmentRequest::GetAssessmentRequest()
    : MigrationHubStrategyRequest(new GetAssessmentRequestPrivate(MigrationHubStrategyRequest::GetAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new GetAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetAssessmentRequestPrivate
 * \brief The GetAssessmentRequestPrivate class provides private implementation for GetAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetAssessmentRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetAssessmentRequestPrivate::GetAssessmentRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssessmentRequest
 * class' copy constructor.
 */
GetAssessmentRequestPrivate::GetAssessmentRequestPrivate(
    const GetAssessmentRequestPrivate &other, GetAssessmentRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
