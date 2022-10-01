// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcollectorsrequest.h"
#include "listcollectorsrequest_p.h"
#include "listcollectorsresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListCollectorsRequest
 * \brief The ListCollectorsRequest class provides an interface for MigrationHubStrategy ListCollectors requests.
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
 * \sa MigrationHubStrategyClient::listCollectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListCollectorsRequest::ListCollectorsRequest(const ListCollectorsRequest &other)
    : MigrationHubStrategyRequest(new ListCollectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCollectorsRequest object.
 */
ListCollectorsRequest::ListCollectorsRequest()
    : MigrationHubStrategyRequest(new ListCollectorsRequestPrivate(MigrationHubStrategyRequest::ListCollectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCollectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCollectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCollectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListCollectorsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::ListCollectorsRequestPrivate
 * \brief The ListCollectorsRequestPrivate class provides private implementation for ListCollectorsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListCollectorsRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
ListCollectorsRequestPrivate::ListCollectorsRequestPrivate(
    const MigrationHubStrategyRequest::Action action, ListCollectorsRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCollectorsRequest
 * class' copy constructor.
 */
ListCollectorsRequestPrivate::ListCollectorsRequestPrivate(
    const ListCollectorsRequestPrivate &other, ListCollectorsRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
