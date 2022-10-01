// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowmediastreamrequest.h"
#include "updateflowmediastreamrequest_p.h"
#include "updateflowmediastreamresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamRequest
 * \brief The UpdateFlowMediaStreamRequest class provides an interface for MediaConnect UpdateFlowMediaStream requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowMediaStream
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowMediaStreamRequest::UpdateFlowMediaStreamRequest(const UpdateFlowMediaStreamRequest &other)
    : MediaConnectRequest(new UpdateFlowMediaStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowMediaStreamRequest object.
 */
UpdateFlowMediaStreamRequest::UpdateFlowMediaStreamRequest()
    : MediaConnectRequest(new UpdateFlowMediaStreamRequestPrivate(MediaConnectRequest::UpdateFlowMediaStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowMediaStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowMediaStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowMediaStreamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowMediaStreamResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamRequestPrivate
 * \brief The UpdateFlowMediaStreamRequestPrivate class provides private implementation for UpdateFlowMediaStreamRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowMediaStreamRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowMediaStreamRequestPrivate::UpdateFlowMediaStreamRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowMediaStreamRequest
 * class' copy constructor.
 */
UpdateFlowMediaStreamRequestPrivate::UpdateFlowMediaStreamRequestPrivate(
    const UpdateFlowMediaStreamRequestPrivate &other, UpdateFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
