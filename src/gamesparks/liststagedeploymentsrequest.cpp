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

#include "liststagedeploymentsrequest.h"
#include "liststagedeploymentsrequest_p.h"
#include "liststagedeploymentsresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListStageDeploymentsRequest
 * \brief The ListStageDeploymentsRequest class provides an interface for GameSparks ListStageDeployments requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listStageDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListStageDeploymentsRequest::ListStageDeploymentsRequest(const ListStageDeploymentsRequest &other)
    : GameSparksRequest(new ListStageDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStageDeploymentsRequest object.
 */
ListStageDeploymentsRequest::ListStageDeploymentsRequest()
    : GameSparksRequest(new ListStageDeploymentsRequestPrivate(GameSparksRequest::ListStageDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStageDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStageDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStageDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListStageDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListStageDeploymentsRequestPrivate
 * \brief The ListStageDeploymentsRequestPrivate class provides private implementation for ListStageDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListStageDeploymentsRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListStageDeploymentsRequestPrivate::ListStageDeploymentsRequestPrivate(
    const GameSparksRequest::Action action, ListStageDeploymentsRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStageDeploymentsRequest
 * class' copy constructor.
 */
ListStageDeploymentsRequestPrivate::ListStageDeploymentsRequestPrivate(
    const ListStageDeploymentsRequestPrivate &other, ListStageDeploymentsRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
