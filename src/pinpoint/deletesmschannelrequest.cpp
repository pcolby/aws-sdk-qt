// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesmschannelrequest.h"
#include "deletesmschannelrequest_p.h"
#include "deletesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelRequest
 * \brief The DeleteSmsChannelRequest class provides an interface for Pinpoint DeleteSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest(const DeleteSmsChannelRequest &other)
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSmsChannelRequest object.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest()
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(PinpointRequest::DeleteSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelRequestPrivate
 * \brief The DeleteSmsChannelRequestPrivate class provides private implementation for DeleteSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSmsChannelRequest
 * class' copy constructor.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const DeleteSmsChannelRequestPrivate &other, DeleteSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
