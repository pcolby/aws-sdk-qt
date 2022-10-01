// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationcomponentstrategiesrequest.h"
#include "getapplicationcomponentstrategiesrequest_p.h"
#include "getapplicationcomponentstrategiesresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentStrategiesRequest
 * \brief The GetApplicationComponentStrategiesRequest class provides an interface for MigrationHubStrategy GetApplicationComponentStrategies requests.
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
 * \sa MigrationHubStrategyClient::getApplicationComponentStrategies
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationComponentStrategiesRequest::GetApplicationComponentStrategiesRequest(const GetApplicationComponentStrategiesRequest &other)
    : MigrationHubStrategyRequest(new GetApplicationComponentStrategiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationComponentStrategiesRequest object.
 */
GetApplicationComponentStrategiesRequest::GetApplicationComponentStrategiesRequest()
    : MigrationHubStrategyRequest(new GetApplicationComponentStrategiesRequestPrivate(MigrationHubStrategyRequest::GetApplicationComponentStrategiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationComponentStrategiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationComponentStrategiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationComponentStrategiesRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationComponentStrategiesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentStrategiesRequestPrivate
 * \brief The GetApplicationComponentStrategiesRequestPrivate class provides private implementation for GetApplicationComponentStrategiesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetApplicationComponentStrategiesRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetApplicationComponentStrategiesRequestPrivate::GetApplicationComponentStrategiesRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetApplicationComponentStrategiesRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationComponentStrategiesRequest
 * class' copy constructor.
 */
GetApplicationComponentStrategiesRequestPrivate::GetApplicationComponentStrategiesRequestPrivate(
    const GetApplicationComponentStrategiesRequestPrivate &other, GetApplicationComponentStrategiesRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
