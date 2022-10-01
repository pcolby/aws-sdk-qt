// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategameconfigurationrequest.h"
#include "updategameconfigurationrequest_p.h"
#include "updategameconfigurationresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateGameConfigurationRequest
 * \brief The UpdateGameConfigurationRequest class provides an interface for GameSparks UpdateGameConfiguration requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateGameConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGameConfigurationRequest::UpdateGameConfigurationRequest(const UpdateGameConfigurationRequest &other)
    : GameSparksRequest(new UpdateGameConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGameConfigurationRequest object.
 */
UpdateGameConfigurationRequest::UpdateGameConfigurationRequest()
    : GameSparksRequest(new UpdateGameConfigurationRequestPrivate(GameSparksRequest::UpdateGameConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGameConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGameConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGameConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGameConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::UpdateGameConfigurationRequestPrivate
 * \brief The UpdateGameConfigurationRequestPrivate class provides private implementation for UpdateGameConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateGameConfigurationRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
UpdateGameConfigurationRequestPrivate::UpdateGameConfigurationRequestPrivate(
    const GameSparksRequest::Action action, UpdateGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGameConfigurationRequest
 * class' copy constructor.
 */
UpdateGameConfigurationRequestPrivate::UpdateGameConfigurationRequestPrivate(
    const UpdateGameConfigurationRequestPrivate &other, UpdateGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
