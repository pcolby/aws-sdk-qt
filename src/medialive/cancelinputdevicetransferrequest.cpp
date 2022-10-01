// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
