// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgameconfigurationrequest.h"
#include "getgameconfigurationrequest_p.h"
#include "getgameconfigurationresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameConfigurationRequest
 * \brief The GetGameConfigurationRequest class provides an interface for GameSparks GetGameConfiguration requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGameConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetGameConfigurationRequest::GetGameConfigurationRequest(const GetGameConfigurationRequest &other)
    : GameSparksRequest(new GetGameConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGameConfigurationRequest object.
 */
GetGameConfigurationRequest::GetGameConfigurationRequest()
    : GameSparksRequest(new GetGameConfigurationRequestPrivate(GameSparksRequest::GetGameConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetGameConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGameConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGameConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetGameConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetGameConfigurationRequestPrivate
 * \brief The GetGameConfigurationRequestPrivate class provides private implementation for GetGameConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameConfigurationRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetGameConfigurationRequestPrivate::GetGameConfigurationRequestPrivate(
    const GameSparksRequest::Action action, GetGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGameConfigurationRequest
 * class' copy constructor.
 */
GetGameConfigurationRequestPrivate::GetGameConfigurationRequestPrivate(
    const GetGameConfigurationRequestPrivate &other, GetGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
