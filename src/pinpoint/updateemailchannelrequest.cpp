// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailchannelrequest.h"
#include "updateemailchannelrequest_p.h"
#include "updateemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelRequest
 * \brief The UpdateEmailChannelRequest class provides an interface for Pinpoint UpdateEmailChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest(const UpdateEmailChannelRequest &other)
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmailChannelRequest object.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest()
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(PinpointRequest::UpdateEmailChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmailChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmailChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelRequestPrivate
 * \brief The UpdateEmailChannelRequestPrivate class provides private implementation for UpdateEmailChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailChannelRequest
 * class' copy constructor.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const UpdateEmailChannelRequestPrivate &other, UpdateEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
