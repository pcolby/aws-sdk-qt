/*
    Copyright 2013-2018 Paul Colby

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

#include "updateinputrequest.h"
#include "updateinputrequest_p.h"
#include "updateinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputRequest
 * \brief The UpdateInputRequest class provides an interface for MediaLive UpdateInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInput
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInputRequest::UpdateInputRequest(const UpdateInputRequest &other)
    : MediaLiveRequest(new UpdateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInputRequest object.
 */
UpdateInputRequest::UpdateInputRequest()
    : MediaLiveRequest(new UpdateInputRequestPrivate(MediaLiveRequest::UpdateInputAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateInputRequestPrivate
 * \brief The UpdateInputRequestPrivate class provides private implementation for UpdateInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputRequest
 * class' copy constructor.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const UpdateInputRequestPrivate &other, UpdateInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
