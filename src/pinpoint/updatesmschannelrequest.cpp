// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesmschannelrequest.h"
#include "updatesmschannelrequest_p.h"
#include "updatesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelRequest
 * \brief The UpdateSmsChannelRequest class provides an interface for Pinpoint UpdateSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest(const UpdateSmsChannelRequest &other)
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSmsChannelRequest object.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest()
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(PinpointRequest::UpdateSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelRequestPrivate
 * \brief The UpdateSmsChannelRequestPrivate class provides private implementation for UpdateSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSmsChannelRequest
 * class' copy constructor.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const UpdateSmsChannelRequestPrivate &other, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
