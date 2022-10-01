// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserverstrategiesrequest.h"
#include "getserverstrategiesrequest_p.h"
#include "getserverstrategiesresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetServerStrategiesRequest
 * \brief The GetServerStrategiesRequest class provides an interface for MigrationHubStrategy GetServerStrategies requests.
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
 * \sa MigrationHubStrategyClient::getServerStrategies
 */

/*!
 * Constructs a copy of \a other.
 */
GetServerStrategiesRequest::GetServerStrategiesRequest(const GetServerStrategiesRequest &other)
    : MigrationHubStrategyRequest(new GetServerStrategiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServerStrategiesRequest object.
 */
GetServerStrategiesRequest::GetServerStrategiesRequest()
    : MigrationHubStrategyRequest(new GetServerStrategiesRequestPrivate(MigrationHubStrategyRequest::GetServerStrategiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetServerStrategiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServerStrategiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServerStrategiesRequest::response(QNetworkReply * const reply) const
{
    return new GetServerStrategiesResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetServerStrategiesRequestPrivate
 * \brief The GetServerStrategiesRequestPrivate class provides private implementation for GetServerStrategiesRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetServerStrategiesRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetServerStrategiesRequestPrivate::GetServerStrategiesRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetServerStrategiesRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServerStrategiesRequest
 * class' copy constructor.
 */
GetServerStrategiesRequestPrivate::GetServerStrategiesRequestPrivate(
    const GetServerStrategiesRequestPrivate &other, GetServerStrategiesRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
