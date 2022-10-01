// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowmediastreamrequest.h"
#include "removeflowmediastreamrequest_p.h"
#include "removeflowmediastreamresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamRequest
 * \brief The RemoveFlowMediaStreamRequest class provides an interface for MediaConnect RemoveFlowMediaStream requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowMediaStream
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFlowMediaStreamRequest::RemoveFlowMediaStreamRequest(const RemoveFlowMediaStreamRequest &other)
    : MediaConnectRequest(new RemoveFlowMediaStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFlowMediaStreamRequest object.
 */
RemoveFlowMediaStreamRequest::RemoveFlowMediaStreamRequest()
    : MediaConnectRequest(new RemoveFlowMediaStreamRequestPrivate(MediaConnectRequest::RemoveFlowMediaStreamAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFlowMediaStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFlowMediaStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFlowMediaStreamRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFlowMediaStreamResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamRequestPrivate
 * \brief The RemoveFlowMediaStreamRequestPrivate class provides private implementation for RemoveFlowMediaStreamRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowMediaStreamRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RemoveFlowMediaStreamRequestPrivate::RemoveFlowMediaStreamRequestPrivate(
    const MediaConnectRequest::Action action, RemoveFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFlowMediaStreamRequest
 * class' copy constructor.
 */
RemoveFlowMediaStreamRequestPrivate::RemoveFlowMediaStreamRequestPrivate(
    const RemoveFlowMediaStreamRequestPrivate &other, RemoveFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
