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

#include "listinputdevicesrequest.h"
#include "listinputdevicesrequest_p.h"
#include "listinputdevicesresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDevicesRequest
 * \brief The ListInputDevicesRequest class provides an interface for MediaLive ListInputDevices requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputDevicesRequest::ListInputDevicesRequest(const ListInputDevicesRequest &other)
    : MediaLiveRequest(new ListInputDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputDevicesRequest object.
 */
ListInputDevicesRequest::ListInputDevicesRequest()
    : MediaLiveRequest(new ListInputDevicesRequestPrivate(MediaLiveRequest::ListInputDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListInputDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListInputDevicesRequestPrivate
 * \brief The ListInputDevicesRequestPrivate class provides private implementation for ListInputDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDevicesRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListInputDevicesRequestPrivate::ListInputDevicesRequestPrivate(
    const MediaLiveRequest::Action action, ListInputDevicesRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputDevicesRequest
 * class' copy constructor.
 */
ListInputDevicesRequestPrivate::ListInputDevicesRequestPrivate(
    const ListInputDevicesRequestPrivate &other, ListInputDevicesRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
