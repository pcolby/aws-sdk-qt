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

#include "cancelinputdevicetransferrequest.h"
#include "cancelinputdevicetransferrequest_p.h"
#include "cancelinputdevicetransferresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferRequest
 * \brief The CancelInputDeviceTransferRequest class provides an interface for MediaLive CancelInputDeviceTransfer requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::cancelInputDeviceTransfer
 */

/*!
 * Constructs a copy of \a other.
 */
CancelInputDeviceTransferRequest::CancelInputDeviceTransferRequest(const CancelInputDeviceTransferRequest &other)
    : MediaLiveRequest(new CancelInputDeviceTransferRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelInputDeviceTransferRequest object.
 */
CancelInputDeviceTransferRequest::CancelInputDeviceTransferRequest()
    : MediaLiveRequest(new CancelInputDeviceTransferRequestPrivate(MediaLiveRequest::CancelInputDeviceTransferAction, this))
{

}

/*!
 * \reimp
 */
bool CancelInputDeviceTransferRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelInputDeviceTransferResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelInputDeviceTransferRequest::response(QNetworkReply * const reply) const
{
    return new CancelInputDeviceTransferResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CancelInputDeviceTransferRequestPrivate
 * \brief The CancelInputDeviceTransferRequestPrivate class provides private implementation for CancelInputDeviceTransferRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CancelInputDeviceTransferRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CancelInputDeviceTransferRequestPrivate::CancelInputDeviceTransferRequestPrivate(
    const MediaLiveRequest::Action action, CancelInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelInputDeviceTransferRequest
 * class' copy constructor.
 */
CancelInputDeviceTransferRequestPrivate::CancelInputDeviceTransferRequestPrivate(
    const CancelInputDeviceTransferRequestPrivate &other, CancelInputDeviceTransferRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
