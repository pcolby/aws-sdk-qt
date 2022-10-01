// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
