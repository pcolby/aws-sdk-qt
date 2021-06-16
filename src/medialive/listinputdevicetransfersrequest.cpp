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

#include "listinputdevicetransfersrequest.h"
#include "listinputdevicetransfersrequest_p.h"
#include "listinputdevicetransfersresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersRequest
 * \brief The ListInputDeviceTransfersRequest class provides an interface for MediaLive ListInputDeviceTransfers requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDeviceTransfers
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputDeviceTransfersRequest::ListInputDeviceTransfersRequest(const ListInputDeviceTransfersRequest &other)
    : MediaLiveRequest(new ListInputDeviceTransfersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputDeviceTransfersRequest object.
 */
ListInputDeviceTransfersRequest::ListInputDeviceTransfersRequest()
    : MediaLiveRequest(new ListInputDeviceTransfersRequestPrivate(MediaLiveRequest::ListInputDeviceTransfersAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputDeviceTransfersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputDeviceTransfersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputDeviceTransfersRequest::response(QNetworkReply * const reply) const
{
    return new ListInputDeviceTransfersResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersRequestPrivate
 * \brief The ListInputDeviceTransfersRequestPrivate class provides private implementation for ListInputDeviceTransfersRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDeviceTransfersRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListInputDeviceTransfersRequestPrivate::ListInputDeviceTransfersRequestPrivate(
    const MediaLiveRequest::Action action, ListInputDeviceTransfersRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputDeviceTransfersRequest
 * class' copy constructor.
 */
ListInputDeviceTransfersRequestPrivate::ListInputDeviceTransfersRequestPrivate(
    const ListInputDeviceTransfersRequestPrivate &other, ListInputDeviceTransfersRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
