// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserversrequest.h"
#include "listserversrequest_p.h"
#include "listserversresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListServersRequest
 * \brief The ListServersRequest class provides an interface for MigrationHubStrategy ListServers requests.
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
 * \sa MigrationHubStrategyClient::listServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListServersRequest::ListServersRequest(const ListServersRequest &other)
    : MigrationHubStrategyRequest(new ListServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServersRequest object.
 */
ListServersRequest::ListServersRequest()
    : MigrationHubStrategyRequest(new ListServersRequestPrivate(MigrationHubStrategyRequest::ListServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServersRequest::response(QNetworkReply * const reply) const
{
    return new ListServersResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::ListServersRequestPrivate
 * \brief The ListServersRequestPrivate class provides private implementation for ListServersRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListServersRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
ListServersRequestPrivate::ListServersRequestPrivate(
    const MigrationHubStrategyRequest::Action action, ListServersRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServersRequest
 * class' copy constructor.
 */
ListServersRequestPrivate::ListServersRequestPrivate(
    const ListServersRequestPrivate &other, ListServersRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
