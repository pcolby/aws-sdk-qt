// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteadmchannelrequest.h"
#include "deleteadmchannelrequest_p.h"
#include "deleteadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelRequest
 * \brief The DeleteAdmChannelRequest class provides an interface for Pinpoint DeleteAdmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteAdmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest(const DeleteAdmChannelRequest &other)
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAdmChannelRequest object.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest()
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(PinpointRequest::DeleteAdmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAdmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAdmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAdmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelRequestPrivate
 * \brief The DeleteAdmChannelRequestPrivate class provides private implementation for DeleteAdmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAdmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteAdmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAdmChannelRequest
 * class' copy constructor.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const DeleteAdmChannelRequestPrivate &other, DeleteAdmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
