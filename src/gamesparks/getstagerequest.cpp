// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetStageRequest
 * \brief The GetStageRequest class provides an interface for GameSparks GetStage requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getStage
 */

/*!
 * Constructs a copy of \a other.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : GameSparksRequest(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStageRequest object.
 */
GetStageRequest::GetStageRequest()
    : GameSparksRequest(new GetStageRequestPrivate(GameSparksRequest::GetStageAction, this))
{

}

/*!
 * \reimp
 */
bool GetStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStageRequest::response(QNetworkReply * const reply) const
{
    return new GetStageResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetStageRequestPrivate
 * \brief The GetStageRequestPrivate class provides private implementation for GetStageRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetStageRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GameSparksRequest::Action action, GetStageRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStageRequest
 * class' copy constructor.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GetStageRequestPrivate &other, GetStageRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
