// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnschannelrequest.h"
#include "updateapnschannelrequest_p.h"
#include "updateapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelRequest
 * \brief The UpdateApnsChannelRequest class provides an interface for Pinpoint UpdateApnsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest(const UpdateApnsChannelRequest &other)
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsChannelRequest object.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest()
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(PinpointRequest::UpdateApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelRequestPrivate
 * \brief The UpdateApnsChannelRequestPrivate class provides private implementation for UpdateApnsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsChannelRequest
 * class' copy constructor.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const UpdateApnsChannelRequestPrivate &other, UpdateApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
