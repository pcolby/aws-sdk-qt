// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationcomponentsrequest.h"
#include "listapplicationcomponentsrequest_p.h"
#include "listapplicationcomponentsresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListApplicationComponentsRequest
 * \brief The ListApplicationComponentsRequest class provides an interface for MigrationHubStrategy ListApplicationComponents requests.
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
 * \sa MigrationHubStrategyClient::listApplicationComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationComponentsRequest::ListApplicationComponentsRequest(const ListApplicationComponentsRequest &other)
    : MigrationHubStrategyRequest(new ListApplicationComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationComponentsRequest object.
 */
ListApplicationComponentsRequest::ListApplicationComponentsRequest()
    : MigrationHubStrategyRequest(new ListApplicationComponentsRequestPrivate(MigrationHubStrategyRequest::ListApplicationComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::ListApplicationComponentsRequestPrivate
 * \brief The ListApplicationComponentsRequestPrivate class provides private implementation for ListApplicationComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListApplicationComponentsRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
ListApplicationComponentsRequestPrivate::ListApplicationComponentsRequestPrivate(
    const MigrationHubStrategyRequest::Action action, ListApplicationComponentsRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationComponentsRequest
 * class' copy constructor.
 */
ListApplicationComponentsRequestPrivate::ListApplicationComponentsRequestPrivate(
    const ListApplicationComponentsRequestPrivate &other, ListApplicationComponentsRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
