// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstagerequest.h"
#include "createstagerequest_p.h"
#include "createstageresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateStageRequest
 * \brief The CreateStageRequest class provides an interface for GameSparks CreateStage requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createStage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStageRequest::CreateStageRequest(const CreateStageRequest &other)
    : GameSparksRequest(new CreateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStageRequest object.
 */
CreateStageRequest::CreateStageRequest()
    : GameSparksRequest(new CreateStageRequestPrivate(GameSparksRequest::CreateStageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStageResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::CreateStageRequestPrivate
 * \brief The CreateStageRequestPrivate class provides private implementation for CreateStageRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateStageRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const GameSparksRequest::Action action, CreateStageRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStageRequest
 * class' copy constructor.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const CreateStageRequestPrivate &other, CreateStageRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
