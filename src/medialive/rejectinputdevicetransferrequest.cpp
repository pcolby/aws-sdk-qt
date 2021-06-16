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

#include "rejectinputdevicetransferrequest.h"
#include "rejectinputdevicetransferrequest_p.h"
#include "rejectinputdevicetransferresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferRequest
 * \brief The RejectInputDeviceTransferRequest class provides an interface for MediaLive RejectInputDeviceTransfer requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rejectInputDeviceTransfer
 */

/*!
 * Constructs a copy of \a other.
 */
RejectInputDeviceTransferRequest::RejectInputDeviceTransferRequest(const RejectInputDeviceTransferRequest &other)
    : MediaLiveRequest(new RejectInputDeviceTransferRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectInputDeviceTransferRequest object.
 */
RejectInputDeviceTransferRequest::RejectInputDeviceTransferRequest()
    : MediaLiveRequest(new RejectInputDeviceTransferRequestPrivate(MediaLiveRequest::RejectInputDeviceTransferAction, this))
{

}

/*!
 * \reimp
 */
bool RejectInputDeviceTransferRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectInputDeviceTransferResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectInputDeviceTransferRequest::response(QNetworkReply * const reply) const
{
    return new RejectInputDeviceTransferResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::RejectInputDeviceTransferRequestPrivate
 * \brief The RejectInputDeviceTransferRequestPrivate class provides private implementation for RejectInputDeviceTransferRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RejectInputDeviceTransferRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
RejectInputDeviceTransferRequestPrivate::RejectInputDeviceTransferRequestPrivate(
    const MediaLiveRequest::Action action, RejectInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectInputDeviceTransferRequest
 * class' copy constructor.
 */
RejectInputDeviceTransferRequestPrivate::RejectInputDeviceTransferRequestPrivate(
    const RejectInputDeviceTransferRequestPrivate &other, RejectInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
