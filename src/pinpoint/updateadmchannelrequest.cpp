// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateadmchannelrequest.h"
#include "updateadmchannelrequest_p.h"
#include "updateadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelRequest
 * \brief The UpdateAdmChannelRequest class provides an interface for Pinpoint UpdateAdmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateAdmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest(const UpdateAdmChannelRequest &other)
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAdmChannelRequest object.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest()
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(PinpointRequest::UpdateAdmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAdmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAdmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAdmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelRequestPrivate
 * \brief The UpdateAdmChannelRequestPrivate class provides private implementation for UpdateAdmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateAdmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateAdmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAdmChannelRequest
 * class' copy constructor.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const UpdateAdmChannelRequestPrivate &other, UpdateAdmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
