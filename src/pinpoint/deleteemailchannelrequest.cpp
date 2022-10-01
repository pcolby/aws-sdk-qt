// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailchannelrequest.h"
#include "deleteemailchannelrequest_p.h"
#include "deleteemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelRequest
 * \brief The DeleteEmailChannelRequest class provides an interface for Pinpoint DeleteEmailChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest(const DeleteEmailChannelRequest &other)
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailChannelRequest object.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest()
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(PinpointRequest::DeleteEmailChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelRequestPrivate
 * \brief The DeleteEmailChannelRequestPrivate class provides private implementation for DeleteEmailChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailChannelRequest
 * class' copy constructor.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const DeleteEmailChannelRequestPrivate &other, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
