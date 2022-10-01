// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startgeneratedcodejobrequest.h"
#include "startgeneratedcodejobrequest_p.h"
#include "startgeneratedcodejobresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobRequest
 * \brief The StartGeneratedCodeJobRequest class provides an interface for GameSparks StartGeneratedCodeJob requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startGeneratedCodeJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartGeneratedCodeJobRequest::StartGeneratedCodeJobRequest(const StartGeneratedCodeJobRequest &other)
    : GameSparksRequest(new StartGeneratedCodeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartGeneratedCodeJobRequest object.
 */
StartGeneratedCodeJobRequest::StartGeneratedCodeJobRequest()
    : GameSparksRequest(new StartGeneratedCodeJobRequestPrivate(GameSparksRequest::StartGeneratedCodeJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartGeneratedCodeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartGeneratedCodeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartGeneratedCodeJobRequest::response(QNetworkReply * const reply) const
{
    return new StartGeneratedCodeJobResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobRequestPrivate
 * \brief The StartGeneratedCodeJobRequestPrivate class provides private implementation for StartGeneratedCodeJobRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartGeneratedCodeJobRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
StartGeneratedCodeJobRequestPrivate::StartGeneratedCodeJobRequestPrivate(
    const GameSparksRequest::Action action, StartGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartGeneratedCodeJobRequest
 * class' copy constructor.
 */
StartGeneratedCodeJobRequestPrivate::StartGeneratedCodeJobRequestPrivate(
    const StartGeneratedCodeJobRequestPrivate &other, StartGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
