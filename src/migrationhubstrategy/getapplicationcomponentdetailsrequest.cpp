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

#include "getapplicationcomponentdetailsrequest.h"
#include "getapplicationcomponentdetailsrequest_p.h"
#include "getapplicationcomponentdetailsresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentDetailsRequest
 * \brief The GetApplicationComponentDetailsRequest class provides an interface for MigrationHubStrategy GetApplicationComponentDetails requests.
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
 * \sa MigrationHubStrategyClient::getApplicationComponentDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationComponentDetailsRequest::GetApplicationComponentDetailsRequest(const GetApplicationComponentDetailsRequest &other)
    : MigrationHubStrategyRequest(new GetApplicationComponentDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationComponentDetailsRequest object.
 */
GetApplicationComponentDetailsRequest::GetApplicationComponentDetailsRequest()
    : MigrationHubStrategyRequest(new GetApplicationComponentDetailsRequestPrivate(MigrationHubStrategyRequest::GetApplicationComponentDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationComponentDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationComponentDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationComponentDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationComponentDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentDetailsRequestPrivate
 * \brief The GetApplicationComponentDetailsRequestPrivate class provides private implementation for GetApplicationComponentDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetApplicationComponentDetailsRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
GetApplicationComponentDetailsRequestPrivate::GetApplicationComponentDetailsRequestPrivate(
    const MigrationHubStrategyRequest::Action action, GetApplicationComponentDetailsRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationComponentDetailsRequest
 * class' copy constructor.
 */
GetApplicationComponentDetailsRequestPrivate::GetApplicationComponentDetailsRequestPrivate(
    const GetApplicationComponentDetailsRequestPrivate &other, GetApplicationComponentDetailsRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
