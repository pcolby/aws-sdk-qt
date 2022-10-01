/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getextensionversionrequest.h"
#include "getextensionversionrequest_p.h"
#include "getextensionversionresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetExtensionVersionRequest
 * \brief The GetExtensionVersionRequest class provides an interface for GameSparks GetExtensionVersion requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getExtensionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetExtensionVersionRequest::GetExtensionVersionRequest(const GetExtensionVersionRequest &other)
    : GameSparksRequest(new GetExtensionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExtensionVersionRequest object.
 */
GetExtensionVersionRequest::GetExtensionVersionRequest()
    : GameSparksRequest(new GetExtensionVersionRequestPrivate(GameSparksRequest::GetExtensionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetExtensionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExtensionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExtensionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetExtensionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetExtensionVersionRequestPrivate
 * \brief The GetExtensionVersionRequestPrivate class provides private implementation for GetExtensionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetExtensionVersionRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetExtensionVersionRequestPrivate::GetExtensionVersionRequestPrivate(
    const GameSparksRequest::Action action, GetExtensionVersionRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExtensionVersionRequest
 * class' copy constructor.
 */
GetExtensionVersionRequestPrivate::GetExtensionVersionRequestPrivate(
    const GetExtensionVersionRequestPrivate &other, GetExtensionVersionRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
