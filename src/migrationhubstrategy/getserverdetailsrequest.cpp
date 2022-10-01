// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserverdetailsrequest.h"
#include "getserverdetailsrequest_p.h"
#include "getserverdetailsresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetServerDetailsRequest
 * \brief The GetServerDetailsRequest class provides an interface for MigrationHubStrategy GetServerDetails requests.
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
 * \sa MigrationHubStrategyClient::getServerDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetServerDetailsRequest::GetServerDetailsRequest(const GetServerDetailsRequest &other)
    : MigrationHubStrategyRequest(new GetServerDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServerDetailsRequest object.
 */
GetServerDetailsRequest::GetServerDetailsRequest()
    : MigrationHubStrategyRequest(new GetServerDetailsRequestPrivate(MigrationHubStrategyRequest::GetServerDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetServerDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServerDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServerDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetServerDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetServerDetailsRequestPrivate
 * \brief The GetServerDetailsRequestPrivate class provides private implementation for GetServerDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetServerDetailsRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetServerDetailsRequestPrivate::GetServerDetailsRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetServerDetailsRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServerDetailsRequest
 * class' copy constructor.
 */
GetServerDetailsRequestPrivate::GetServerDetailsRequestPrivate(
    const GetServerDetailsRequestPrivate &other, GetServerDetailsRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
