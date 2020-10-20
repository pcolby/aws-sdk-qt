/*
    Copyright 2013-2020 Paul Colby

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

#include "updatechannelclassrequest.h"
#include "updatechannelclassrequest_p.h"
#include "updatechannelclassresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelClassRequest
 * \brief The UpdateChannelClassRequest class provides an interface for MediaLive UpdateChannelClass requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannelClass
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelClassRequest::UpdateChannelClassRequest(const UpdateChannelClassRequest &other)
    : MediaLiveRequest(new UpdateChannelClassRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelClassRequest object.
 */
UpdateChannelClassRequest::UpdateChannelClassRequest()
    : MediaLiveRequest(new UpdateChannelClassRequestPrivate(MediaLiveRequest::UpdateChannelClassAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelClassRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelClassResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelClassRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelClassResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateChannelClassRequestPrivate
 * \brief The UpdateChannelClassRequestPrivate class provides private implementation for UpdateChannelClassRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelClassRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateChannelClassRequestPrivate::UpdateChannelClassRequestPrivate(
    const MediaLiveRequest::Action action, UpdateChannelClassRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelClassRequest
 * class' copy constructor.
 */
UpdateChannelClassRequestPrivate::UpdateChannelClassRequestPrivate(
    const UpdateChannelClassRequestPrivate &other, UpdateChannelClassRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
