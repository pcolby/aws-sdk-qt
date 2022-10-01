// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
