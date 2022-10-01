// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstagedeploymentrequest.h"
#include "startstagedeploymentrequest_p.h"
#include "startstagedeploymentresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartStageDeploymentRequest
 * \brief The StartStageDeploymentRequest class provides an interface for GameSparks StartStageDeployment requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startStageDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartStageDeploymentRequest::StartStageDeploymentRequest(const StartStageDeploymentRequest &other)
    : GameSparksRequest(new StartStageDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStageDeploymentRequest object.
 */
StartStageDeploymentRequest::StartStageDeploymentRequest()
    : GameSparksRequest(new StartStageDeploymentRequestPrivate(GameSparksRequest::StartStageDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartStageDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStageDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStageDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartStageDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::StartStageDeploymentRequestPrivate
 * \brief The StartStageDeploymentRequestPrivate class provides private implementation for StartStageDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartStageDeploymentRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
StartStageDeploymentRequestPrivate::StartStageDeploymentRequestPrivate(
    const GameSparksRequest::Action action, StartStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStageDeploymentRequest
 * class' copy constructor.
 */
StartStageDeploymentRequestPrivate::StartStageDeploymentRequestPrivate(
    const StartStageDeploymentRequestPrivate &other, StartStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
