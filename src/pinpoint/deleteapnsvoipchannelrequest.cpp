// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnsvoipchannelrequest.h"
#include "deleteapnsvoipchannelrequest_p.h"
#include "deleteapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelRequest
 * \brief The DeleteApnsVoipChannelRequest class provides an interface for Pinpoint DeleteApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest(const DeleteApnsVoipChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsVoipChannelRequest object.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest()
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(PinpointRequest::DeleteApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelRequestPrivate
 * \brief The DeleteApnsVoipChannelRequestPrivate class provides private implementation for DeleteApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipChannelRequest
 * class' copy constructor.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const DeleteApnsVoipChannelRequestPrivate &other, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
