// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importgameconfigurationrequest.h"
#include "importgameconfigurationrequest_p.h"
#include "importgameconfigurationresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationRequest
 * \brief The ImportGameConfigurationRequest class provides an interface for GameSparks ImportGameConfiguration requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::importGameConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ImportGameConfigurationRequest::ImportGameConfigurationRequest(const ImportGameConfigurationRequest &other)
    : GameSparksRequest(new ImportGameConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportGameConfigurationRequest object.
 */
ImportGameConfigurationRequest::ImportGameConfigurationRequest()
    : GameSparksRequest(new ImportGameConfigurationRequestPrivate(GameSparksRequest::ImportGameConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ImportGameConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportGameConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportGameConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ImportGameConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationRequestPrivate
 * \brief The ImportGameConfigurationRequestPrivate class provides private implementation for ImportGameConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ImportGameConfigurationRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ImportGameConfigurationRequestPrivate::ImportGameConfigurationRequestPrivate(
    const GameSparksRequest::Action action, ImportGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportGameConfigurationRequest
 * class' copy constructor.
 */
ImportGameConfigurationRequestPrivate::ImportGameConfigurationRequestPrivate(
    const ImportGameConfigurationRequestPrivate &other, ImportGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
