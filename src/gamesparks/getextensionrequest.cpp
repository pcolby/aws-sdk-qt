// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getextensionrequest.h"
#include "getextensionrequest_p.h"
#include "getextensionresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionRequest
 * \brief The GetExtensionRequest class provides an interface for GameSparks GetExtension requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtension
 */

/*!
 * Constructs a copy of \a other.
 */
GetExtensionRequest::GetExtensionRequest(const GetExtensionRequest &other)
    : GameSparksRequest(new GetExtensionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExtensionRequest object.
 */
GetExtensionRequest::GetExtensionRequest()
    : GameSparksRequest(new GetExtensionRequestPrivate(GameSparksRequest::GetExtensionAction, this))
{

}

/*!
 * \reimp
 */
bool GetExtensionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExtensionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExtensionRequest::response(QNetworkReply * const reply) const
{
    return new GetExtensionResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetExtensionRequestPrivate
 * \brief The GetExtensionRequestPrivate class provides private implementation for GetExtensionRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetExtensionRequestPrivate::GetExtensionRequestPrivate(
    const GameSparksRequest::Action action, GetExtensionRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExtensionRequest
 * class' copy constructor.
 */
GetExtensionRequestPrivate::GetExtensionRequestPrivate(
    const GetExtensionRequestPrivate &other, GetExtensionRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
