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

#include "acceptinputdevicetransferrequest.h"
#include "acceptinputdevicetransferrequest_p.h"
#include "acceptinputdevicetransferresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::AcceptInputDeviceTransferRequest
 * \brief The AcceptInputDeviceTransferRequest class provides an interface for MediaLive AcceptInputDeviceTransfer requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::acceptInputDeviceTransfer
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptInputDeviceTransferRequest::AcceptInputDeviceTransferRequest(const AcceptInputDeviceTransferRequest &other)
    : MediaLiveRequest(new AcceptInputDeviceTransferRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptInputDeviceTransferRequest object.
 */
AcceptInputDeviceTransferRequest::AcceptInputDeviceTransferRequest()
    : MediaLiveRequest(new AcceptInputDeviceTransferRequestPrivate(MediaLiveRequest::AcceptInputDeviceTransferAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptInputDeviceTransferRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptInputDeviceTransferResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptInputDeviceTransferRequest::response(QNetworkReply * const reply) const
{
    return new AcceptInputDeviceTransferResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::AcceptInputDeviceTransferRequestPrivate
 * \brief The AcceptInputDeviceTransferRequestPrivate class provides private implementation for AcceptInputDeviceTransferRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a AcceptInputDeviceTransferRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
AcceptInputDeviceTransferRequestPrivate::AcceptInputDeviceTransferRequestPrivate(
    const MediaLiveRequest::Action action, AcceptInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptInputDeviceTransferRequest
 * class' copy constructor.
 */
AcceptInputDeviceTransferRequestPrivate::AcceptInputDeviceTransferRequestPrivate(
    const AcceptInputDeviceTransferRequestPrivate &other, AcceptInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
