// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DeleteStageRequest
 * \brief The DeleteStageRequest class provides an interface for GameSparks DeleteStage requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::deleteStage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : GameSparksRequest(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : GameSparksRequest(new DeleteStageRequestPrivate(GameSparksRequest::DeleteStageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStageResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::DeleteStageRequestPrivate
 * \brief The DeleteStageRequestPrivate class provides private implementation for DeleteStageRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DeleteStageRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const GameSparksRequest::Action action, DeleteStageRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStageRequest
 * class' copy constructor.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const DeleteStageRequestPrivate &other, DeleteStageRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
